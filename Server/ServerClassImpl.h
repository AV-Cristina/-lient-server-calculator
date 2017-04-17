// SERVERCLASSIMPL.H : Declaration of the TServerClassImpl

#ifndef ServerClassImplH
#define ServerClassImplH

#define ATL_APARTMENT_THREADED

#include "Project1_TLB.H"


/////////////////////////////////////////////////////////////////////////////
// TServerClassImpl     Implements IServerClass, default interface of ServerClass
// ThreadingModel : Apartment
// Dual Interface : TRUE
// Event Support  : FALSE
// Default ProgID : Project1.ServerClass
// Description    : 
/////////////////////////////////////////////////////////////////////////////
class ATL_NO_VTABLE TServerClassImpl : 
  public CComObjectRootEx<CComSingleThreadModel>,
  public CComCoClass<TServerClassImpl, &CLSID_ServerClass>,
  public IDispatchImpl<IServerClass, &IID_IServerClass, &LIBID_Project1>
{
public:
  TServerClassImpl()
  {
  }

  // Data used when registering Object 
  //
  DECLARE_THREADING_MODEL(otApartment);
  DECLARE_PROGID("Project1.ServerClass");
  DECLARE_DESCRIPTION("");

  // Function invoked to (un)register object
  //
  static HRESULT WINAPI UpdateRegistry(BOOL bRegister)
  {
    TTypedComServerRegistrarT<TServerClassImpl> 
    regObj(GetObjectCLSID(), GetProgID(), GetDescription());
    return regObj.UpdateRegistry(bRegister);
  }


BEGIN_COM_MAP(TServerClassImpl)
  COM_INTERFACE_ENTRY(IServerClass)
  COM_INTERFACE_ENTRY2(IDispatch, IServerClass)
END_COM_MAP()

// IServerClass
public:
 
  STDMETHOD(Dif(int x, int y, int* res));
  STDMETHOD(Entry(BSTR str, int* answ));
  STDMETHOD(Exit(BSTR str));
  STDMETHOD(Mul(int x, int y, int* res));
  STDMETHOD(Protocol(BSTR str));
  STDMETHOD(Sum(int x, int y, int* res));
};

#endif //ServerClassImplH
