#include <iostream>
#include "TFile.h"
#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include "TCatPulseShape.h"
#include "TGraph.h"
#include "TF1.h"
#include "TH1F.h"

int main()
{
    TFile file("/home/daq/data/rootfiles/data0092.root");
    TTreeReader reader("tree", &file);
    reader.GetTree()->SetBranchStatus("*", 0);
    reader.GetTree()->SetBranchStatus("fadc12", 1);
    TTreeReaderValue<TClonesArray> fadc11(reader, "fadc11");
    TTreeReaderValue<TClonesArray> fadc12(reader, "fadc12");
    TFile output("output.root", "recreate");

    TH1F hist("time", "time", 1000, 600, 800);

    while (reader.Next())
    {
        auto fadc = (art::TCatPulseShape *)fadc12->At(0);
        auto sample = fadc->GetSample();
        TGraph gr(sample.size());
        //TGraph dgr(sample.size());
        TF1 *fit = new TF1("fit", "[0]*(TMath::Erf((x-[3])/[2])+1.)/2.+[1]", 0, 1000);
        fit->SetParameters(40, 3070, 10, 700);
        for (int i = 0; i < sample.size(); ++i)
        {
            if (sample[i] < 0)
                continue;
            gr.SetPoint(i, i, sample[i]);
            //auto avg = [&sample](int n)
            //{
            //    double val = 0;
            //    for (int j = n - 5; j < n + 5; j++)
            //        val += sample[j];
            //    return val;
            //};
            //if (i + 55 < sample.size() && i - 5 >= 0)
            //    dgr.SetPoint(i, i, avg(i + 8) - avg(i));
        }

        gr.Fit(fit, "", "", 500, 800);
        hist.Fill(fit->GetParameter(3));
    }
    hist.Write();
    output.Close();
    file.Close();
    return 0;
}