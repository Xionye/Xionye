// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__treeanalib
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/daq/opt/artemis/include/TRawDataObject.h"
#include "/home/daq/opt/artemis/include/TRawDataFadc.h"
#include "/home/daq/opt/artemis/include/TRunInfo.h"
#include "/home/daq/opt/artemis/include/TArtemisObject.h"
#include "/home/daq/opt/artemis/include/TCatPulseShape.h"
#include "/home/daq/opt/artemis/include/TDataObject.h"
#include "/home/daq/opt/artemis/include/ICharge.h"
#include "/home/daq/opt/artemis/include/ITiming.h"
#include "/home/daq/opt/artemis/include/IPosition.h"
#include "/home/daq/opt/artemis/include/TEventHeader.h"
#include "/home/daq/opt/artemis_src/share/src/gate/TGateObject.h"
#include "/home/daq/opt/artemis_src/share/src/gate/TGateArray.h"
#include "/home/daq/opt/artemis_src/share/src/gate/TGateInfo.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_artcLcLTRawDataObject(void *p = 0);
   static void *newArray_artcLcLTRawDataObject(Long_t size, void *p);
   static void delete_artcLcLTRawDataObject(void *p);
   static void deleteArray_artcLcLTRawDataObject(void *p);
   static void destruct_artcLcLTRawDataObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::TRawDataObject*)
   {
      ::art::TRawDataObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::TRawDataObject >(0);
      static ::ROOT::TGenericClassInfo 
         instance("art::TRawDataObject", ::art::TRawDataObject::Class_Version(), "TRawDataObject.h", 21,
                  typeid(::art::TRawDataObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::TRawDataObject::Dictionary, isa_proxy, 4,
                  sizeof(::art::TRawDataObject) );
      instance.SetNew(&new_artcLcLTRawDataObject);
      instance.SetNewArray(&newArray_artcLcLTRawDataObject);
      instance.SetDelete(&delete_artcLcLTRawDataObject);
      instance.SetDeleteArray(&deleteArray_artcLcLTRawDataObject);
      instance.SetDestructor(&destruct_artcLcLTRawDataObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::TRawDataObject*)
   {
      return GenerateInitInstanceLocal((::art::TRawDataObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::TRawDataObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_artcLcLTRawDataFadc(void *p = 0);
   static void *newArray_artcLcLTRawDataFadc(Long_t size, void *p);
   static void delete_artcLcLTRawDataFadc(void *p);
   static void deleteArray_artcLcLTRawDataFadc(void *p);
   static void destruct_artcLcLTRawDataFadc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::TRawDataFadc*)
   {
      ::art::TRawDataFadc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::TRawDataFadc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("art::TRawDataFadc", ::art::TRawDataFadc::Class_Version(), "TRawDataFadc.h", 20,
                  typeid(::art::TRawDataFadc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::TRawDataFadc::Dictionary, isa_proxy, 4,
                  sizeof(::art::TRawDataFadc) );
      instance.SetNew(&new_artcLcLTRawDataFadc);
      instance.SetNewArray(&newArray_artcLcLTRawDataFadc);
      instance.SetDelete(&delete_artcLcLTRawDataFadc);
      instance.SetDeleteArray(&deleteArray_artcLcLTRawDataFadc);
      instance.SetDestructor(&destruct_artcLcLTRawDataFadc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::TRawDataFadc*)
   {
      return GenerateInitInstanceLocal((::art::TRawDataFadc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::TRawDataFadc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_artcLcLTRunInfo(void *p = 0);
   static void *newArray_artcLcLTRunInfo(Long_t size, void *p);
   static void delete_artcLcLTRunInfo(void *p);
   static void deleteArray_artcLcLTRunInfo(void *p);
   static void destruct_artcLcLTRunInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::TRunInfo*)
   {
      ::art::TRunInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::TRunInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("art::TRunInfo", ::art::TRunInfo::Class_Version(), "TRunInfo.h", 20,
                  typeid(::art::TRunInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::TRunInfo::Dictionary, isa_proxy, 4,
                  sizeof(::art::TRunInfo) );
      instance.SetNew(&new_artcLcLTRunInfo);
      instance.SetNewArray(&newArray_artcLcLTRunInfo);
      instance.SetDelete(&delete_artcLcLTRunInfo);
      instance.SetDeleteArray(&deleteArray_artcLcLTRunInfo);
      instance.SetDestructor(&destruct_artcLcLTRunInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::TRunInfo*)
   {
      return GenerateInitInstanceLocal((::art::TRunInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::TRunInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_artcLcLTArtemisObject(void *p = 0);
   static void *newArray_artcLcLTArtemisObject(Long_t size, void *p);
   static void delete_artcLcLTArtemisObject(void *p);
   static void deleteArray_artcLcLTArtemisObject(void *p);
   static void destruct_artcLcLTArtemisObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::TArtemisObject*)
   {
      ::art::TArtemisObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::TArtemisObject >(0);
      static ::ROOT::TGenericClassInfo 
         instance("art::TArtemisObject", ::art::TArtemisObject::Class_Version(), "TArtemisObject.h", 20,
                  typeid(::art::TArtemisObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::TArtemisObject::Dictionary, isa_proxy, 4,
                  sizeof(::art::TArtemisObject) );
      instance.SetNew(&new_artcLcLTArtemisObject);
      instance.SetNewArray(&newArray_artcLcLTArtemisObject);
      instance.SetDelete(&delete_artcLcLTArtemisObject);
      instance.SetDeleteArray(&deleteArray_artcLcLTArtemisObject);
      instance.SetDestructor(&destruct_artcLcLTArtemisObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::TArtemisObject*)
   {
      return GenerateInitInstanceLocal((::art::TArtemisObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::TArtemisObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_artcLcLTDataObject(void *p = 0);
   static void *newArray_artcLcLTDataObject(Long_t size, void *p);
   static void delete_artcLcLTDataObject(void *p);
   static void deleteArray_artcLcLTDataObject(void *p);
   static void destruct_artcLcLTDataObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::TDataObject*)
   {
      ::art::TDataObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::TDataObject >(0);
      static ::ROOT::TGenericClassInfo 
         instance("art::TDataObject", ::art::TDataObject::Class_Version(), "TDataObject.h", 20,
                  typeid(::art::TDataObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::TDataObject::Dictionary, isa_proxy, 4,
                  sizeof(::art::TDataObject) );
      instance.SetNew(&new_artcLcLTDataObject);
      instance.SetNewArray(&newArray_artcLcLTDataObject);
      instance.SetDelete(&delete_artcLcLTDataObject);
      instance.SetDeleteArray(&deleteArray_artcLcLTDataObject);
      instance.SetDestructor(&destruct_artcLcLTDataObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::TDataObject*)
   {
      return GenerateInitInstanceLocal((::art::TDataObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::TDataObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_artcLcLICharge(void *p);
   static void deleteArray_artcLcLICharge(void *p);
   static void destruct_artcLcLICharge(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::ICharge*)
   {
      ::art::ICharge *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::ICharge >(0);
      static ::ROOT::TGenericClassInfo 
         instance("art::ICharge", ::art::ICharge::Class_Version(), "ICharge.h", 21,
                  typeid(::art::ICharge), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::ICharge::Dictionary, isa_proxy, 4,
                  sizeof(::art::ICharge) );
      instance.SetDelete(&delete_artcLcLICharge);
      instance.SetDeleteArray(&deleteArray_artcLcLICharge);
      instance.SetDestructor(&destruct_artcLcLICharge);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::ICharge*)
   {
      return GenerateInitInstanceLocal((::art::ICharge*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::ICharge*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_artcLcLITiming(void *p);
   static void deleteArray_artcLcLITiming(void *p);
   static void destruct_artcLcLITiming(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::ITiming*)
   {
      ::art::ITiming *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::ITiming >(0);
      static ::ROOT::TGenericClassInfo 
         instance("art::ITiming", ::art::ITiming::Class_Version(), "ITiming.h", 21,
                  typeid(::art::ITiming), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::ITiming::Dictionary, isa_proxy, 4,
                  sizeof(::art::ITiming) );
      instance.SetDelete(&delete_artcLcLITiming);
      instance.SetDeleteArray(&deleteArray_artcLcLITiming);
      instance.SetDestructor(&destruct_artcLcLITiming);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::ITiming*)
   {
      return GenerateInitInstanceLocal((::art::ITiming*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::ITiming*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_artcLcLIPosition(void *p);
   static void deleteArray_artcLcLIPosition(void *p);
   static void destruct_artcLcLIPosition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::IPosition*)
   {
      ::art::IPosition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::IPosition >(0);
      static ::ROOT::TGenericClassInfo 
         instance("art::IPosition", ::art::IPosition::Class_Version(), "IPosition.h", 22,
                  typeid(::art::IPosition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::IPosition::Dictionary, isa_proxy, 4,
                  sizeof(::art::IPosition) );
      instance.SetDelete(&delete_artcLcLIPosition);
      instance.SetDeleteArray(&deleteArray_artcLcLIPosition);
      instance.SetDestructor(&destruct_artcLcLIPosition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::IPosition*)
   {
      return GenerateInitInstanceLocal((::art::IPosition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::IPosition*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_artcLcLTCatPulseShape(void *p = 0);
   static void *newArray_artcLcLTCatPulseShape(Long_t size, void *p);
   static void delete_artcLcLTCatPulseShape(void *p);
   static void deleteArray_artcLcLTCatPulseShape(void *p);
   static void destruct_artcLcLTCatPulseShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::TCatPulseShape*)
   {
      ::art::TCatPulseShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::TCatPulseShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("art::TCatPulseShape", ::art::TCatPulseShape::Class_Version(), "TCatPulseShape.h", 29,
                  typeid(::art::TCatPulseShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::TCatPulseShape::Dictionary, isa_proxy, 4,
                  sizeof(::art::TCatPulseShape) );
      instance.SetNew(&new_artcLcLTCatPulseShape);
      instance.SetNewArray(&newArray_artcLcLTCatPulseShape);
      instance.SetDelete(&delete_artcLcLTCatPulseShape);
      instance.SetDeleteArray(&deleteArray_artcLcLTCatPulseShape);
      instance.SetDestructor(&destruct_artcLcLTCatPulseShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::TCatPulseShape*)
   {
      return GenerateInitInstanceLocal((::art::TCatPulseShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::TCatPulseShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_artcLcLTEventHeader(void *p = 0);
   static void *newArray_artcLcLTEventHeader(Long_t size, void *p);
   static void delete_artcLcLTEventHeader(void *p);
   static void deleteArray_artcLcLTEventHeader(void *p);
   static void destruct_artcLcLTEventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::TEventHeader*)
   {
      ::art::TEventHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::TEventHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("art::TEventHeader", ::art::TEventHeader::Class_Version(), "TEventHeader.h", 21,
                  typeid(::art::TEventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::TEventHeader::Dictionary, isa_proxy, 4,
                  sizeof(::art::TEventHeader) );
      instance.SetNew(&new_artcLcLTEventHeader);
      instance.SetNewArray(&newArray_artcLcLTEventHeader);
      instance.SetDelete(&delete_artcLcLTEventHeader);
      instance.SetDeleteArray(&deleteArray_artcLcLTEventHeader);
      instance.SetDestructor(&destruct_artcLcLTEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::TEventHeader*)
   {
      return GenerateInitInstanceLocal((::art::TEventHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::TEventHeader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_artcLcLTGateObject(void *p = 0);
   static void *newArray_artcLcLTGateObject(Long_t size, void *p);
   static void delete_artcLcLTGateObject(void *p);
   static void deleteArray_artcLcLTGateObject(void *p);
   static void destruct_artcLcLTGateObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::TGateObject*)
   {
      ::art::TGateObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::TGateObject >(0);
      static ::ROOT::TGenericClassInfo 
         instance("art::TGateObject", ::art::TGateObject::Class_Version(), "TGateObject.h", 22,
                  typeid(::art::TGateObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::TGateObject::Dictionary, isa_proxy, 4,
                  sizeof(::art::TGateObject) );
      instance.SetNew(&new_artcLcLTGateObject);
      instance.SetNewArray(&newArray_artcLcLTGateObject);
      instance.SetDelete(&delete_artcLcLTGateObject);
      instance.SetDeleteArray(&deleteArray_artcLcLTGateObject);
      instance.SetDestructor(&destruct_artcLcLTGateObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::TGateObject*)
   {
      return GenerateInitInstanceLocal((::art::TGateObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::TGateObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_artcLcLTGateArray(void *p = 0);
   static void *newArray_artcLcLTGateArray(Long_t size, void *p);
   static void delete_artcLcLTGateArray(void *p);
   static void deleteArray_artcLcLTGateArray(void *p);
   static void destruct_artcLcLTGateArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::TGateArray*)
   {
      ::art::TGateArray *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::TGateArray >(0);
      static ::ROOT::TGenericClassInfo 
         instance("art::TGateArray", ::art::TGateArray::Class_Version(), "TGateArray.h", 27,
                  typeid(::art::TGateArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::TGateArray::Dictionary, isa_proxy, 4,
                  sizeof(::art::TGateArray) );
      instance.SetNew(&new_artcLcLTGateArray);
      instance.SetNewArray(&newArray_artcLcLTGateArray);
      instance.SetDelete(&delete_artcLcLTGateArray);
      instance.SetDeleteArray(&deleteArray_artcLcLTGateArray);
      instance.SetDestructor(&destruct_artcLcLTGateArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::TGateArray*)
   {
      return GenerateInitInstanceLocal((::art::TGateArray*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::TGateArray*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_artcLcLTGateInfo(void *p = 0);
   static void *newArray_artcLcLTGateInfo(Long_t size, void *p);
   static void delete_artcLcLTGateInfo(void *p);
   static void deleteArray_artcLcLTGateInfo(void *p);
   static void destruct_artcLcLTGateInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::TGateInfo*)
   {
      ::art::TGateInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::TGateInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("art::TGateInfo", ::art::TGateInfo::Class_Version(), "TGateInfo.h", 22,
                  typeid(::art::TGateInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::TGateInfo::Dictionary, isa_proxy, 4,
                  sizeof(::art::TGateInfo) );
      instance.SetNew(&new_artcLcLTGateInfo);
      instance.SetNewArray(&newArray_artcLcLTGateInfo);
      instance.SetDelete(&delete_artcLcLTGateInfo);
      instance.SetDeleteArray(&deleteArray_artcLcLTGateInfo);
      instance.SetDestructor(&destruct_artcLcLTGateInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::TGateInfo*)
   {
      return GenerateInitInstanceLocal((::art::TGateInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::art::TGateInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace art {
//______________________________________________________________________________
atomic_TClass_ptr TRawDataObject::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRawDataObject::Class_Name()
{
   return "art::TRawDataObject";
}

//______________________________________________________________________________
const char *TRawDataObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TRawDataObject*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRawDataObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TRawDataObject*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRawDataObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TRawDataObject*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRawDataObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TRawDataObject*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
atomic_TClass_ptr TRawDataFadc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRawDataFadc::Class_Name()
{
   return "art::TRawDataFadc";
}

//______________________________________________________________________________
const char *TRawDataFadc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TRawDataFadc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRawDataFadc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TRawDataFadc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRawDataFadc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TRawDataFadc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRawDataFadc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TRawDataFadc*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
atomic_TClass_ptr TRunInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRunInfo::Class_Name()
{
   return "art::TRunInfo";
}

//______________________________________________________________________________
const char *TRunInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TRunInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRunInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TRunInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRunInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TRunInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRunInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TRunInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
atomic_TClass_ptr TArtemisObject::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TArtemisObject::Class_Name()
{
   return "art::TArtemisObject";
}

//______________________________________________________________________________
const char *TArtemisObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TArtemisObject*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TArtemisObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TArtemisObject*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArtemisObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TArtemisObject*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArtemisObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TArtemisObject*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
atomic_TClass_ptr TDataObject::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDataObject::Class_Name()
{
   return "art::TDataObject";
}

//______________________________________________________________________________
const char *TDataObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TDataObject*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDataObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TDataObject*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDataObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TDataObject*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDataObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TDataObject*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
atomic_TClass_ptr ICharge::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ICharge::Class_Name()
{
   return "art::ICharge";
}

//______________________________________________________________________________
const char *ICharge::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::ICharge*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ICharge::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::ICharge*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ICharge::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::ICharge*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ICharge::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::ICharge*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
atomic_TClass_ptr ITiming::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ITiming::Class_Name()
{
   return "art::ITiming";
}

//______________________________________________________________________________
const char *ITiming::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::ITiming*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ITiming::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::ITiming*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ITiming::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::ITiming*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ITiming::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::ITiming*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
atomic_TClass_ptr IPosition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IPosition::Class_Name()
{
   return "art::IPosition";
}

//______________________________________________________________________________
const char *IPosition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::IPosition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IPosition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::IPosition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IPosition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::IPosition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IPosition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::IPosition*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
atomic_TClass_ptr TCatPulseShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCatPulseShape::Class_Name()
{
   return "art::TCatPulseShape";
}

//______________________________________________________________________________
const char *TCatPulseShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TCatPulseShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCatPulseShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TCatPulseShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCatPulseShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TCatPulseShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCatPulseShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TCatPulseShape*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
atomic_TClass_ptr TEventHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TEventHeader::Class_Name()
{
   return "art::TEventHeader";
}

//______________________________________________________________________________
const char *TEventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TEventHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TEventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TEventHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TEventHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TEventHeader*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
atomic_TClass_ptr TGateObject::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGateObject::Class_Name()
{
   return "art::TGateObject";
}

//______________________________________________________________________________
const char *TGateObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TGateObject*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGateObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TGateObject*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGateObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TGateObject*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGateObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TGateObject*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
atomic_TClass_ptr TGateArray::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGateArray::Class_Name()
{
   return "art::TGateArray";
}

//______________________________________________________________________________
const char *TGateArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TGateArray*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGateArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TGateArray*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGateArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TGateArray*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGateArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TGateArray*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
atomic_TClass_ptr TGateInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGateInfo::Class_Name()
{
   return "art::TGateInfo";
}

//______________________________________________________________________________
const char *TGateInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TGateInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGateInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TGateInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGateInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TGateInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGateInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TGateInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
void TRawDataObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::TRawDataObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(art::TRawDataObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(art::TRawDataObject::Class(),this);
   }
}

} // namespace art
namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLTRawDataObject(void *p) {
      return  p ? new(p) ::art::TRawDataObject : new ::art::TRawDataObject;
   }
   static void *newArray_artcLcLTRawDataObject(Long_t nElements, void *p) {
      return p ? new(p) ::art::TRawDataObject[nElements] : new ::art::TRawDataObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLTRawDataObject(void *p) {
      delete ((::art::TRawDataObject*)p);
   }
   static void deleteArray_artcLcLTRawDataObject(void *p) {
      delete [] ((::art::TRawDataObject*)p);
   }
   static void destruct_artcLcLTRawDataObject(void *p) {
      typedef ::art::TRawDataObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::TRawDataObject

namespace art {
//______________________________________________________________________________
void TRawDataFadc::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::TRawDataFadc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(art::TRawDataFadc::Class(),this);
   } else {
      R__b.WriteClassBuffer(art::TRawDataFadc::Class(),this);
   }
}

} // namespace art
namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLTRawDataFadc(void *p) {
      return  p ? new(p) ::art::TRawDataFadc : new ::art::TRawDataFadc;
   }
   static void *newArray_artcLcLTRawDataFadc(Long_t nElements, void *p) {
      return p ? new(p) ::art::TRawDataFadc[nElements] : new ::art::TRawDataFadc[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLTRawDataFadc(void *p) {
      delete ((::art::TRawDataFadc*)p);
   }
   static void deleteArray_artcLcLTRawDataFadc(void *p) {
      delete [] ((::art::TRawDataFadc*)p);
   }
   static void destruct_artcLcLTRawDataFadc(void *p) {
      typedef ::art::TRawDataFadc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::TRawDataFadc

namespace art {
//______________________________________________________________________________
void TRunInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::TRunInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(art::TRunInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(art::TRunInfo::Class(),this);
   }
}

} // namespace art
namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLTRunInfo(void *p) {
      return  p ? new(p) ::art::TRunInfo : new ::art::TRunInfo;
   }
   static void *newArray_artcLcLTRunInfo(Long_t nElements, void *p) {
      return p ? new(p) ::art::TRunInfo[nElements] : new ::art::TRunInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLTRunInfo(void *p) {
      delete ((::art::TRunInfo*)p);
   }
   static void deleteArray_artcLcLTRunInfo(void *p) {
      delete [] ((::art::TRunInfo*)p);
   }
   static void destruct_artcLcLTRunInfo(void *p) {
      typedef ::art::TRunInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::TRunInfo

namespace art {
//______________________________________________________________________________
void TArtemisObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::TArtemisObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(art::TArtemisObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(art::TArtemisObject::Class(),this);
   }
}

} // namespace art
namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLTArtemisObject(void *p) {
      return  p ? new(p) ::art::TArtemisObject : new ::art::TArtemisObject;
   }
   static void *newArray_artcLcLTArtemisObject(Long_t nElements, void *p) {
      return p ? new(p) ::art::TArtemisObject[nElements] : new ::art::TArtemisObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLTArtemisObject(void *p) {
      delete ((::art::TArtemisObject*)p);
   }
   static void deleteArray_artcLcLTArtemisObject(void *p) {
      delete [] ((::art::TArtemisObject*)p);
   }
   static void destruct_artcLcLTArtemisObject(void *p) {
      typedef ::art::TArtemisObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::TArtemisObject

namespace art {
//______________________________________________________________________________
void TDataObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::TDataObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(art::TDataObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(art::TDataObject::Class(),this);
   }
}

} // namespace art
namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLTDataObject(void *p) {
      return  p ? new(p) ::art::TDataObject : new ::art::TDataObject;
   }
   static void *newArray_artcLcLTDataObject(Long_t nElements, void *p) {
      return p ? new(p) ::art::TDataObject[nElements] : new ::art::TDataObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLTDataObject(void *p) {
      delete ((::art::TDataObject*)p);
   }
   static void deleteArray_artcLcLTDataObject(void *p) {
      delete [] ((::art::TDataObject*)p);
   }
   static void destruct_artcLcLTDataObject(void *p) {
      typedef ::art::TDataObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::TDataObject

namespace art {
//______________________________________________________________________________
void ICharge::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::ICharge.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(art::ICharge::Class(),this);
   } else {
      R__b.WriteClassBuffer(art::ICharge::Class(),this);
   }
}

} // namespace art
namespace ROOT {
   // Wrapper around operator delete
   static void delete_artcLcLICharge(void *p) {
      delete ((::art::ICharge*)p);
   }
   static void deleteArray_artcLcLICharge(void *p) {
      delete [] ((::art::ICharge*)p);
   }
   static void destruct_artcLcLICharge(void *p) {
      typedef ::art::ICharge current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::ICharge

namespace art {
//______________________________________________________________________________
void ITiming::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::ITiming.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(art::ITiming::Class(),this);
   } else {
      R__b.WriteClassBuffer(art::ITiming::Class(),this);
   }
}

} // namespace art
namespace ROOT {
   // Wrapper around operator delete
   static void delete_artcLcLITiming(void *p) {
      delete ((::art::ITiming*)p);
   }
   static void deleteArray_artcLcLITiming(void *p) {
      delete [] ((::art::ITiming*)p);
   }
   static void destruct_artcLcLITiming(void *p) {
      typedef ::art::ITiming current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::ITiming

namespace art {
//______________________________________________________________________________
void IPosition::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::IPosition.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(art::IPosition::Class(),this);
   } else {
      R__b.WriteClassBuffer(art::IPosition::Class(),this);
   }
}

} // namespace art
namespace ROOT {
   // Wrapper around operator delete
   static void delete_artcLcLIPosition(void *p) {
      delete ((::art::IPosition*)p);
   }
   static void deleteArray_artcLcLIPosition(void *p) {
      delete [] ((::art::IPosition*)p);
   }
   static void destruct_artcLcLIPosition(void *p) {
      typedef ::art::IPosition current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::IPosition

namespace art {
//______________________________________________________________________________
//void TCatPulseShape::Streamer(TBuffer &R__b)
//{
//   // Stream an object of class art::TCatPulseShape.
//
//   if (R__b.IsReading()) {
//      R__b.ReadClassBuffer(art::TCatPulseShape::Class(),this);
//   } else {
//      R__b.WriteClassBuffer(art::TCatPulseShape::Class(),this);
//   }
//}

} // namespace art
namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLTCatPulseShape(void *p) {
      return  p ? new(p) ::art::TCatPulseShape : new ::art::TCatPulseShape;
   }
   static void *newArray_artcLcLTCatPulseShape(Long_t nElements, void *p) {
      return p ? new(p) ::art::TCatPulseShape[nElements] : new ::art::TCatPulseShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLTCatPulseShape(void *p) {
      delete ((::art::TCatPulseShape*)p);
   }
   static void deleteArray_artcLcLTCatPulseShape(void *p) {
      delete [] ((::art::TCatPulseShape*)p);
   }
   static void destruct_artcLcLTCatPulseShape(void *p) {
      typedef ::art::TCatPulseShape current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::TCatPulseShape

namespace art {
//______________________________________________________________________________
void TEventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::TEventHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(art::TEventHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(art::TEventHeader::Class(),this);
   }
}

} // namespace art
namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLTEventHeader(void *p) {
      return  p ? new(p) ::art::TEventHeader : new ::art::TEventHeader;
   }
   static void *newArray_artcLcLTEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::art::TEventHeader[nElements] : new ::art::TEventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLTEventHeader(void *p) {
      delete ((::art::TEventHeader*)p);
   }
   static void deleteArray_artcLcLTEventHeader(void *p) {
      delete [] ((::art::TEventHeader*)p);
   }
   static void destruct_artcLcLTEventHeader(void *p) {
      typedef ::art::TEventHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::TEventHeader

namespace art {
//______________________________________________________________________________
void TGateObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::TGateObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(art::TGateObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(art::TGateObject::Class(),this);
   }
}

} // namespace art
namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLTGateObject(void *p) {
      return  p ? new(p) ::art::TGateObject : new ::art::TGateObject;
   }
   static void *newArray_artcLcLTGateObject(Long_t nElements, void *p) {
      return p ? new(p) ::art::TGateObject[nElements] : new ::art::TGateObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLTGateObject(void *p) {
      delete ((::art::TGateObject*)p);
   }
   static void deleteArray_artcLcLTGateObject(void *p) {
      delete [] ((::art::TGateObject*)p);
   }
   static void destruct_artcLcLTGateObject(void *p) {
      typedef ::art::TGateObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::TGateObject

namespace art {
//______________________________________________________________________________
void TGateArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::TGateArray.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(art::TGateArray::Class(),this);
   } else {
      R__b.WriteClassBuffer(art::TGateArray::Class(),this);
   }
}

} // namespace art
namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLTGateArray(void *p) {
      return  p ? new(p) ::art::TGateArray : new ::art::TGateArray;
   }
   static void *newArray_artcLcLTGateArray(Long_t nElements, void *p) {
      return p ? new(p) ::art::TGateArray[nElements] : new ::art::TGateArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLTGateArray(void *p) {
      delete ((::art::TGateArray*)p);
   }
   static void deleteArray_artcLcLTGateArray(void *p) {
      delete [] ((::art::TGateArray*)p);
   }
   static void destruct_artcLcLTGateArray(void *p) {
      typedef ::art::TGateArray current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::TGateArray

namespace art {
//______________________________________________________________________________
void TGateInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::TGateInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(art::TGateInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(art::TGateInfo::Class(),this);
   }
}

} // namespace art
namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLTGateInfo(void *p) {
      return  p ? new(p) ::art::TGateInfo : new ::art::TGateInfo;
   }
   static void *newArray_artcLcLTGateInfo(Long_t nElements, void *p) {
      return p ? new(p) ::art::TGateInfo[nElements] : new ::art::TGateInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLTGateInfo(void *p) {
      delete ((::art::TGateInfo*)p);
   }
   static void deleteArray_artcLcLTGateInfo(void *p) {
      delete [] ((::art::TGateInfo*)p);
   }
   static void destruct_artcLcLTGateInfo(void *p) {
      typedef ::art::TGateInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::art::TGateInfo

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 386,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));

      ::ROOT::AddClassAlternate("vector<float>","std::vector<float, std::allocator<float> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 386,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      ::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_libtreeanalib_Impl() {
    static const char* headers[] = {
"/home/daq/opt/artemis/include/TRawDataObject.h",
"/home/daq/opt/artemis/include/TRawDataFadc.h",
"/home/daq/opt/artemis/include/TRunInfo.h",
"/home/daq/opt/artemis/include/TArtemisObject.h",
"/home/daq/opt/artemis/include/TCatPulseShape.h",
"/home/daq/opt/artemis/include/TDataObject.h",
"/home/daq/opt/artemis/include/ICharge.h",
"/home/daq/opt/artemis/include/ITiming.h",
"/home/daq/opt/artemis/include/IPosition.h",
"/home/daq/opt/artemis/include/TEventHeader.h",
"/home/daq/opt/artemis_src/share/src/gate/TGateObject.h",
"/home/daq/opt/artemis_src/share/src/gate/TGateArray.h",
"/home/daq/opt/artemis_src/share/src/gate/TGateInfo.h",
0
    };
    static const char* includePaths[] = {
"/home/daq/opt/root-6.25.01/include",
"/home/daq/opt/artemis/include",
"/home/daq/opt/artemis_src/share/src",
"/home/daq/opt/artemis_src/share/src/gate",
"/home/daq/analysis/treeanalysis/source",
"/home/daq/opt/root-6.25.01/include/",
"/home/daq/analysis/treeanalysis/build/source/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libtreeanalib dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace art{class __attribute__((annotate("$clingAutoload$/home/daq/opt/artemis/include/TRawDataObject.h")))  TRawDataObject;}
namespace art{class __attribute__((annotate("$clingAutoload$/home/daq/opt/artemis/include/TRawDataFadc.h")))  TRawDataFadc;}
namespace art{class __attribute__((annotate("$clingAutoload$/home/daq/opt/artemis/include/TRunInfo.h")))  TRunInfo;}
namespace art{class __attribute__((annotate(R"ATTRDUMP(base of artemis objects)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(base of artemis objects)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(base of artemis objects)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(base of artemis objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$/home/daq/opt/artemis/include/TArtemisObject.h")))  TArtemisObject;}
namespace art{class __attribute__((annotate(R"ATTRDUMP(base class for data object)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(base class for data object)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(base class for data object)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(base class for data object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TDataObject.h")))  __attribute__((annotate("$clingAutoload$/home/daq/opt/artemis/include/TCatPulseShape.h")))  TDataObject;}
namespace art{class __attribute__((annotate(R"ATTRDUMP(interface for charge information)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ICharge.h")))  __attribute__((annotate("$clingAutoload$/home/daq/opt/artemis/include/TCatPulseShape.h")))  ICharge;}
namespace art{class __attribute__((annotate(R"ATTRDUMP(interface for timing information)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ITiming.h")))  __attribute__((annotate("$clingAutoload$/home/daq/opt/artemis/include/TCatPulseShape.h")))  ITiming;}
namespace art{class __attribute__((annotate("$clingAutoload$IPosition.h")))  __attribute__((annotate("$clingAutoload$/home/daq/opt/artemis/include/TCatPulseShape.h")))  IPosition;}
namespace art{class __attribute__((annotate("$clingAutoload$/home/daq/opt/artemis/include/TCatPulseShape.h")))  TCatPulseShape;}
namespace art{class __attribute__((annotate(R"ATTRDUMP(Header for each event)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Header for each event)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Header for each event)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Header for each event)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$/home/daq/opt/artemis/include/TEventHeader.h")))  TEventHeader;}
namespace art{class __attribute__((annotate(R"ATTRDUMP(Gate object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$/home/daq/opt/artemis_src/share/src/gate/TGateObject.h")))  TGateObject;}
namespace art{class __attribute__((annotate(R"ATTRDUMP(gate array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$/home/daq/opt/artemis_src/share/src/gate/TGateArray.h")))  TGateArray;}
namespace art{class __attribute__((annotate(R"ATTRDUMP(gate infomation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$/home/daq/opt/artemis_src/share/src/gate/TGateInfo.h")))  TGateInfo;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libtreeanalib dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/daq/opt/artemis/include/TRawDataObject.h"
#include "/home/daq/opt/artemis/include/TRawDataFadc.h"
#include "/home/daq/opt/artemis/include/TRunInfo.h"
#include "/home/daq/opt/artemis/include/TArtemisObject.h"
#include "/home/daq/opt/artemis/include/TCatPulseShape.h"
#include "/home/daq/opt/artemis/include/TDataObject.h"
#include "/home/daq/opt/artemis/include/ICharge.h"
#include "/home/daq/opt/artemis/include/ITiming.h"
#include "/home/daq/opt/artemis/include/IPosition.h"
#include "/home/daq/opt/artemis/include/TEventHeader.h"
#include "/home/daq/opt/artemis_src/share/src/gate/TGateObject.h"
#include "/home/daq/opt/artemis_src/share/src/gate/TGateArray.h"
#include "/home/daq/opt/artemis_src/share/src/gate/TGateInfo.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"art::ICharge", payloadCode, "@",
"art::IPosition", payloadCode, "@",
"art::ITiming", payloadCode, "@",
"art::TArtemisObject", payloadCode, "@",
"art::TCatPulseShape", payloadCode, "@",
"art::TDataObject", payloadCode, "@",
"art::TEventHeader", payloadCode, "@",
"art::TGateArray", payloadCode, "@",
"art::TGateInfo", payloadCode, "@",
"art::TGateObject", payloadCode, "@",
"art::TRawDataFadc", payloadCode, "@",
"art::TRawDataObject", payloadCode, "@",
"art::TRunInfo", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libtreeanalib",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libtreeanalib_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libtreeanalib_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libtreeanalib() {
  TriggerDictionaryInitialization_libtreeanalib_Impl();
}
