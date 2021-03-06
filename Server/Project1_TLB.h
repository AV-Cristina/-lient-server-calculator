// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// C++ TLBWRTR : $Revision:   1.151.1.0.1.27  $
// File generated on 21.12.2010 21:15:21 from Type Library described below.

// ************************************************************************  //
// Type Lib: D:\Afanaseva_lab_4\Server\Project1.tlb (1)
// LIBID: {10CD851B-C378-4941-AECE-02D9837FC24F}
// LCID: 0
// Helpfile: 
// HelpString: Project1 Library
// DepndLst: 
//   (1) v2.0 stdole, (C:\WINDOWS\system32\stdole2.tlb)
// ************************************************************************ //
#ifndef   Project1_TLBH
#define   Project1_TLBH

#pragma option push -b -w-inl

#include <utilcls.h>
#if !defined(__UTILCLS_H_VERSION) || (__UTILCLS_H_VERSION < 0x0600)
//
// The code generated by the TLIBIMP utility or the Import|TypeLibrary 
// and Import|ActiveX feature of C++Builder rely on specific versions of
// the header file UTILCLS.H found in the INCLUDE\VCL directory. If an 
// older version of the file is detected, you probably need an update/patch.
//
#error "This file requires a newer version of the header UTILCLS.H" \
       "You need to apply an update/patch to your copy of C++Builder"
#endif
#include <olectl.h>
#include <ocidl.h>
#if defined(USING_ATLVCL) || defined(USING_ATL)
#if !defined(__TLB_NO_EVENT_WRAPPERS)
#include <atl/atlmod.h>
#endif
#endif


// *********************************************************************//
// Forward reference of some VCL types (to avoid including STDVCL.HPP)    
// *********************************************************************//
namespace Stdvcl {class IStrings; class IStringsDisp;}
using namespace Stdvcl;
typedef TComInterface<IStrings> IStringsPtr;
typedef TComInterface<IStringsDisp> IStringsDispPtr;

namespace Project1_tlb
{

// *********************************************************************//
// HelpString: Project1 Library
// Version:    1.0
// *********************************************************************//


// *********************************************************************//
// GUIDS declared in the TypeLibrary. Following prefixes are used:        
//   Type Libraries     : LIBID_xxxx                                      
//   CoClasses          : CLSID_xxxx                                      
//   DISPInterfaces     : DIID_xxxx                                       
//   Non-DISP interfaces: IID_xxxx                                        
// *********************************************************************//
extern "C" const __declspec(selectany) GUID LIBID_Project1 = {0x10CD851B, 0xC378, 0x4941,{ 0xAE, 0xCE, 0x02,0xD9, 0x83, 0x7F,0xC2, 0x4F} };
extern "C" const __declspec(selectany) GUID IID_IServerClass = {0x9C9408AE, 0x1DE9, 0x4292,{ 0xBC, 0xE7, 0x71,0x6D, 0xAA, 0xCB,0x40, 0x98} };
extern "C" const __declspec(selectany) GUID CLSID_ServerClass = {0xA60708C6, 0xA80A, 0x40BD,{ 0xB6, 0x64, 0x27,0x2E, 0xFA, 0xF7,0x87, 0x08} };

// *********************************************************************//
// Forward declaration of types defined in TypeLibrary                    
// *********************************************************************//
interface DECLSPEC_UUID("{9C9408AE-1DE9-4292-BCE7-716DAACB4098}") IServerClass;
typedef TComInterface<IServerClass, &IID_IServerClass> IServerClassPtr;


// *********************************************************************//
// Declaration of CoClasses defined in Type Library                       
// (NOTE: Here we map each CoClass to its Default Interface)              
//                                                                        
// The LIBID_OF_ macro(s) map a LIBID_OF_CoClassName to the GUID of this  
// TypeLibrary. It simplifies the updating of macros when CoClass name    
// change.                                                                
// *********************************************************************//
typedef IServerClass ServerClass;
typedef IServerClassPtr ServerClassPtr;

#define LIBID_OF_ServerClass (&LIBID_Project1)
// *********************************************************************//
// Interface: IServerClass
// Flags:     (4416) Dual OleAutomation Dispatchable
// GUID:      {9C9408AE-1DE9-4292-BCE7-716DAACB4098}
// *********************************************************************//
interface IServerClass  : public IDispatch
{
public:
  virtual HRESULT STDMETHODCALLTYPE Entry(BSTR str/*[in]*/, int* answ/*[out]*/) = 0; // [1]
  virtual HRESULT STDMETHODCALLTYPE Protocol(BSTR str/*[in]*/) = 0; // [2]
  virtual HRESULT STDMETHODCALLTYPE Dif(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/) = 0; // [3]
  virtual HRESULT STDMETHODCALLTYPE Mul(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/) = 0; // [4]
  virtual HRESULT STDMETHODCALLTYPE Sum(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/) = 0; // [5]
  virtual HRESULT STDMETHODCALLTYPE Exit(BSTR str/*[in]*/) = 0; // [6]

#if !defined(__TLB_NO_INTERFACE_WRAPPERS)



#endif //   __TLB_NO_INTERFACE_WRAPPERS

};

#if !defined(__TLB_NO_INTERFACE_WRAPPERS)
// *********************************************************************//
// SmartIntf: TCOMIServerClass
// Interface: IServerClass
// *********************************************************************//
template <class T /* IServerClass */ >
class TCOMIServerClassT : public TComInterface<IServerClass>, public TComInterfaceBase<IUnknown>
{
public:
  TCOMIServerClassT() {}
  TCOMIServerClassT(IServerClass *intf, bool addRef = false) : TComInterface<IServerClass>(intf, addRef) {}
  TCOMIServerClassT(const TCOMIServerClassT& src) : TComInterface<IServerClass>(src) {}
  TCOMIServerClassT& operator=(const TCOMIServerClassT& src) { Bind(src, true); return *this;}

  HRESULT         __fastcall Entry(BSTR str/*[in]*/, int* answ/*[out]*/);
  HRESULT         __fastcall Protocol(BSTR str/*[in]*/);
  HRESULT         __fastcall Dif(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/);
  HRESULT         __fastcall Mul(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/);
  HRESULT         __fastcall Sum(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/);
  HRESULT         __fastcall Exit(BSTR str/*[in]*/);

};
typedef TCOMIServerClassT<IServerClass> TCOMIServerClass;

// *********************************************************************//
// DispIntf:  IServerClass
// Flags:     (4416) Dual OleAutomation Dispatchable
// GUID:      {9C9408AE-1DE9-4292-BCE7-716DAACB4098}
// *********************************************************************//
template<class T>
class IServerClassDispT : public TAutoDriver<IServerClass>
{
public:
  IServerClassDispT(){}

  IServerClassDispT(IServerClass *pintf)
  {
    TAutoDriver<IServerClass>::Bind(pintf, false);
  }

  IServerClassDispT(IServerClassPtr pintf)
  {
    TAutoDriver<IServerClass>::Bind(pintf, true);
  }

  IServerClassDispT& operator=(IServerClass *pintf)
  {
    TAutoDriver<IServerClass>::Bind(pintf, false);
    return *this;
  }

  IServerClassDispT& operator=(IServerClassPtr pintf)
  {
    TAutoDriver<IServerClass>::Bind(pintf, true);
    return *this;
  }

  HRESULT BindDefault()
  {
    return OLECHECK(Bind(CLSID_ServerClass));
  }

  HRESULT BindRunning()
  {
    return BindToActive(CLSID_ServerClass);
  }

  HRESULT         __fastcall Entry(BSTR str/*[in]*/, int* answ/*[out]*/);
  HRESULT         __fastcall Protocol(BSTR str/*[in]*/);
  HRESULT         __fastcall Dif(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/);
  HRESULT         __fastcall Mul(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/);
  HRESULT         __fastcall Sum(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/);
  HRESULT         __fastcall Exit(BSTR str/*[in]*/);

};
typedef IServerClassDispT<IServerClass> IServerClassDisp;

// *********************************************************************//
// SmartIntf: TCOMIServerClass
// Interface: IServerClass
// *********************************************************************//
template <class T> HRESULT __fastcall
TCOMIServerClassT<T>::Entry(BSTR str/*[in]*/, int* answ/*[out]*/)
{
  return (*this)->Entry(str, answ);
}

template <class T> HRESULT __fastcall
TCOMIServerClassT<T>::Protocol(BSTR str/*[in]*/)
{
  return (*this)->Protocol(str);
}

template <class T> HRESULT __fastcall
TCOMIServerClassT<T>::Dif(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/)
{
  return (*this)->Dif(x, y, res);
}

template <class T> HRESULT __fastcall
TCOMIServerClassT<T>::Mul(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/)
{
  return (*this)->Mul(x, y, res);
}

template <class T> HRESULT __fastcall
TCOMIServerClassT<T>::Sum(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/)
{
  return (*this)->Sum(x, y, res);
}

template <class T> HRESULT __fastcall
TCOMIServerClassT<T>::Exit(BSTR str/*[in]*/)
{
  return (*this)->Exit(str);
}

// *********************************************************************//
// DispIntf:  IServerClass
// Flags:     (4416) Dual OleAutomation Dispatchable
// GUID:      {9C9408AE-1DE9-4292-BCE7-716DAACB4098}
// *********************************************************************//
template <class T> HRESULT __fastcall
IServerClassDispT<T>::Entry(BSTR str/*[in]*/, int* answ/*[out]*/)
{
  _TDispID _dispid(*this, OLETEXT("Entry"), DISPID(1));
  TAutoArgs<2> _args;
  _args[1] = str /*[VT_BSTR:0]*/;
  _args[2] = answ /*[VT_INT:1]*/;
  return OleFunction(_dispid, _args);
}

template <class T> HRESULT __fastcall
IServerClassDispT<T>::Protocol(BSTR str/*[in]*/)
{
  _TDispID _dispid(*this, OLETEXT("Protocol"), DISPID(2));
  TAutoArgs<1> _args;
  _args[1] = str /*[VT_BSTR:0]*/;
  return OleFunction(_dispid, _args);
}

template <class T> HRESULT __fastcall
IServerClassDispT<T>::Dif(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/)
{
  _TDispID _dispid(*this, OLETEXT("Dif"), DISPID(3));
  TAutoArgs<3> _args;
  _args[1] = x /*[VT_INT:0]*/;
  _args[2] = y /*[VT_INT:0]*/;
  _args[3] = res /*[VT_INT:1]*/;
  return OleFunction(_dispid, _args);
}

template <class T> HRESULT __fastcall
IServerClassDispT<T>::Mul(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/)
{
  _TDispID _dispid(*this, OLETEXT("Mul"), DISPID(4));
  TAutoArgs<3> _args;
  _args[1] = x /*[VT_INT:0]*/;
  _args[2] = y /*[VT_INT:0]*/;
  _args[3] = res /*[VT_INT:1]*/;
  return OleFunction(_dispid, _args);
}

template <class T> HRESULT __fastcall
IServerClassDispT<T>::Sum(int x/*[in]*/, int y/*[in]*/, int* res/*[out]*/)
{
  _TDispID _dispid(*this, OLETEXT("Sum"), DISPID(5));
  TAutoArgs<3> _args;
  _args[1] = x /*[VT_INT:0]*/;
  _args[2] = y /*[VT_INT:0]*/;
  _args[3] = res /*[VT_INT:1]*/;
  return OleFunction(_dispid, _args);
}

template <class T> HRESULT __fastcall
IServerClassDispT<T>::Exit(BSTR str/*[in]*/)
{
  _TDispID _dispid(*this, OLETEXT("Exit"), DISPID(6));
  TAutoArgs<1> _args;
  _args[1] = str /*[VT_BSTR:0]*/;
  return OleFunction(_dispid, _args);
}

// *********************************************************************//
// The following typedefs expose classes (named CoCoClassName) that       
// provide static Create() and CreateRemote(LPWSTR machineName) methods   
// for creating an instance of an exposed object. These functions can     
// be used by client wishing to automate CoClasses exposed by this        
// typelibrary.                                                           
// *********************************************************************//

// *********************************************************************//
// COCLASS DEFAULT INTERFACE CREATOR
// CoClass  : ServerClass
// Interface: TCOMIServerClass
// *********************************************************************//
typedef TCoClassCreatorT<TCOMIServerClass, IServerClass, &CLSID_ServerClass, &IID_IServerClass> CoServerClass;
#endif  //   __TLB_NO_INTERFACE_WRAPPERS


};     // namespace Project1_tlb

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace Project1_tlb;
#endif

#pragma option pop

#endif // Project1_TLBH
