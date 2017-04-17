// SERVERCLASSIMPL : Implementation of TServerClassImpl (CoClass: ServerClass, Interface: IServerClass)

#include <vcl.h>
#include <atl\atlvcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "SERVERCLASSIMPL.H"

/////////////////////////////////////////////////////////////////////////////
// TServerClassImpl

STDMETHODIMP TServerClassImpl::Dif(int x, int y, int* res)
{ 
 try
   {
   *res = x-y;
   }
 catch(Exception &e)
   {
   return Error(e.Message.c_str(), IID_IServerClass);
   }
 return S_OK;
}


STDMETHODIMP TServerClassImpl::Entry(BSTR str, int* answ)
{ 
 try
   {
   *answ = 0;
   for(int i=0; i<Form1->Memo2->Lines->Count; i++)
      {
      if (Form1->Memo2->Lines->Strings[i]==str)
         {
         *answ = 1;  //если пользователь с этим именем уже он-лайн
         break;
         }
      }
   if(*answ == 0) {Form1->Memo2->Lines->Add(str);}
   }
 catch(Exception &e)
   {
   return Error(e.Message.c_str(), IID_IServerClass);
   }
 return S_OK;
}


STDMETHODIMP TServerClassImpl::Exit(BSTR str)
{ 
 try
   {
   for(int i=0; i<Form1->Memo2->Lines->Count; i++)
      {
      if (Form1->Memo2->Lines->Strings[i]==str)
         {
         Form1->Memo2->Lines->Delete(i);
         break;
         }
      }
   }
 catch(Exception &e)
   {
   return Error(e.Message.c_str(), IID_IServerClass);
   }
 return S_OK;
}


STDMETHODIMP TServerClassImpl::Mul(int x, int y, int* res)
{ 
 try
   {
   *res = x*y;
   }
 catch(Exception &e)
   {
   return Error(e.Message.c_str(), IID_IServerClass);
   }
 return S_OK;
}


STDMETHODIMP TServerClassImpl::Protocol(BSTR str)
{ 
 try
   {
   Form1->Memo1->Lines->Add(str);
   }
 catch(Exception &e)
   {
   return Error(e.Message.c_str(), IID_IServerClass);
   }
 return S_OK;
}


STDMETHODIMP TServerClassImpl::Sum(int x, int y, int* res)
{ 
 try
   {
   *res = x+y;
   }
 catch(Exception &e)
   {
   return Error(e.Message.c_str(), IID_IServerClass);
   }
 return S_OK;
}