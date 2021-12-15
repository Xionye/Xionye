#include <iostream>
#include "TFile.h"
#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include "TCatPulseShape.h"
#include "TGraph.h"
#include "TF1.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TCanvas.h"
#include "TText.h"
int main()
{
    TFile file("/home/daq/data/rootfiles/data0103.root");
    TTreeReader reader("tree", &file);
    reader.GetTree()->SetBranchStatus("*", 0);
    reader.GetTree()->SetBranchStatus("fadc11", 1);
    reader.GetTree()->SetBranchStatus("fadc12", 1);
    TTreeReaderValue<TClonesArray> fadc11(reader, "fadc11");
    TTreeReaderValue<TClonesArray> fadc12(reader, "fadc12");
    TFile output("output.root", "recreate");
    TH1F hist("wtime", "time", 1000, 0, 300);
    TH1F hamp("amplitude", "amplitude", 1000, -100, 500);
    TH1F hrise("risetime", "risetime", 1000, 0, 200);
    TH1F histsi("stime", "time", 1000, 0, 50);
    TH1F hampsi("samp", "samp", 1000, -100, 500);
    TH1F hrisesi("srisetime", "srisetime", 1000, 0, 200);
    TH1F timelag("timelag", "timelag", 1000, 0, 1000);
    TH2F timelagvsevtid("timelagvsevtid", "timelag vs evtid", 1000, 0, 1000, 1000, 0, 1000);
    TCanvas c1("c1", "c1");
    c1.Print("output-w.pdf[");
    c1.Print("output-s.pdf[");
    ULong64_t event_id = 0;

    //event loop
    while (reader.Next())
    {
        auto fadcsi = (art::TCatPulseShape *)fadc11->At(0);
        auto fadcwire = (art::TCatPulseShape *)fadc12->At(0);
        auto sample11 = fadcsi->GetSample();
        auto sample12 = fadcwire->GetSample();
        TGraph gr(sample11.size());
        TGraph gr2(sample12.size());
        //TGraph dgr(sample.size());

        double wlowavg = 0;
        double whighavg = 0;
        double slowavg = 0;
        double shighavg = 0;

        //sample loop
        for (int i = 0; i < sample12.size(); ++i)
        {
            if (sample12[i] < 0)
                continue;
            gr.SetPoint(i, i, sample12[i]);
            gr2.SetPoint(i, i, sample11[i]);
            if (i < 10)
            {
                slowavg += sample11[i];
            }
            if (i > 30 && i < 50)
            {
                shighavg += sample11[i];
            }
            if (i >= 20 && i < 60)
            {
                wlowavg += sample12[i];
            }

            if (i >= 70 && i < 100)
            {
                whighavg += sample12[i];
            }
        }
        //if (i + 55 < sample.size() && i - 5 >= 0)
        //dgr.SetPoint(i, i, avg(i + 8) - avg(i)); //SetPoint(No,、x、y)

        //Fitting
        TF1 *fit = new TF1("fit", "[0]*(TMath::Erf((x-[3])/[2])+1.)/2.+[1]", 0, 100);
        fit->SetParameters(whighavg / 30 - wlowavg / 40, wlowavg / 40, 2, 65);
        TF1 *fit2 = new TF1("fit2", "[0]*(TMath::Erf((x-[3])/[2])+1.)/2.+[1]", 0, 1000);
        fit2->SetParameters(shighavg / 20 - slowavg / 10, slowavg / 10, 5, 15);

        gr.Fit(fit, "", "", 20, 100);
        auto amp = fit->GetParameter(0);
        auto rtime = fit->GetParameter(2);
        gr2.Fit(fit2, "", "", 0, 50);
        auto samp = fit2->GetParameter(0);
        auto srtime = fit2->GetParameter(2);

        TText text(800, 3400, "invalid");
        //if (amp > 40 && rtime > 5 && rtime < 40)
        {
            hist.Fill(fit->GetParameter(3));
            timelag.Fill(fit->GetParameter(3) - fit2->GetParameter(3));
            text.SetText(800, 3400, "");
            timelagvsevtid.Fill(event_id, fit->GetParameter(3) - fit2->GetParameter(3));
        }
        hamp.Fill(amp);
        hrise.Fill(rtime);
        gr.Draw("AL");
        gr.GetYaxis()->SetRangeUser(2500, 3500);
        text.Draw("same");

        c1.Print("output-w.pdf");
        hampsi.Fill(samp);
        hrisesi.Fill(srtime);
        histsi.Fill(fit2->GetParameter(3));
        gr2.Draw("AL");
        gr2.GetXaxis()->SetRangeUser(0, 100);
        c1.Print("output-s.pdf");
        event_id++;
    }
    c1.Print("output-w.pdf]");
    c1.Print("output-s.pdf]");

    //histgram
    hist.Write();
    hamp.Write();
    hrise.Write();
    histsi.Write();
    hampsi.Write();
    hrisesi.Write();
    timelag.Write();
    timelagvsevtid.Write();
    //TFile fitting
    output.Close();
    //average plot
    //dgr.Write("deri");
    //TFile Sample
    file.Close();
    return 0;
}