//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <ComObj.hpp>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Variant Server;
int num = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


//__________ Вводятся только цифры _________________________________________
void __fastcall TForm1::Edit2KeyPress(TObject *Sender, char &Key)
{
 if (!(Key >= '0' && Key <= '9') && (Key != VK_BACK)) {Key=0;}
}

void __fastcall TForm1::Edit3KeyPress(TObject *Sender, char &Key)
{
 if (!(Key >= '0' && Key <= '9') && (Key!=VK_BACK)) {Key=0;}
}


//_________________ Вход в систему _________________________________________
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 if (Form1->Edit1->Text=="")
    {
    Application->MessageBox("Не заполнено имя пользователя!", "Ошибка", MB_OK);
    }
 else
    {
    if (num == 0)
       {Server=CreateOleObject("Project1.ServerClass");}
    AnsiString str = Edit1->Text;
    int answ;
    Server.OleProcedure("Entry",str.c_str(),&answ);
    if (answ==0)
       {
       Form1->Caption = Caption + " - " + Edit1->Text.c_str();
       AnsiString str1 = "Подключен пользователь "+ Edit1->Text;
       Server.OleProcedure("Protocol",str1.c_str());
       Panel1->Visible = false;
       Panel2->Visible = true;
       num++;
       }
    if (answ==1)
       {
       Application->MessageBox("Пользователь с этим именем уже в системе!", "Ошибка", MB_OK);
       }
    }
}


//_________________ Сложение _______________________________________________
void __fastcall TForm1::Button2Click(TObject *Sender)
{
 if (Form1->Edit2->Text=="")
    {
    Application->MessageBox("Не введен 1ый операнд!", "Ошибка", MB_OK);
    }
 if (Form1->Edit3->Text=="")
    {
    Application->MessageBox("Не введен 2ый операнд!", "Ошибка", MB_OK);
    }
 if (Form1->Edit2->Text!="" && Form1->Edit3->Text!="")
    {
    int x = StrToInt(Edit2->Text);
    int y = StrToInt(Edit3->Text);
    int res;
    Server.OleProcedure("Sum", x, y, &res);
    Edit4->Text = res;
    AnsiString str = Edit1->Text + "  " + IntToStr(x) + " + " +IntToStr(y);
    Server.OleProcedure("Protocol",str.c_str());
    }
}


//_________________ Вычитание ______________________________________________
void __fastcall TForm1::Button3Click(TObject *Sender)
{
 if (Form1->Edit2->Text=="")
    {
    Application->MessageBox("Не введен 1ый операнд!", "Ошибка", MB_OK);
    }
 if (Form1->Edit3->Text=="")
    {
    Application->MessageBox("Не введен 2ый операнд!", "Ошибка", MB_OK);
    }
 if (Form1->Edit2->Text!="" && Form1->Edit3->Text!="")
    {
    int x = StrToInt(Edit2->Text);
    int y = StrToInt(Edit3->Text);
    int res;
    Server.OleProcedure("Dif", x, y, &res);
    Edit4->Text = res;
    AnsiString str = Edit1->Text + "  " + IntToStr(x) + " - " +IntToStr(y);
    Server.OleProcedure("Protocol",str.c_str());
    }
}


//_________________ Умножение ______________________________________________
void __fastcall TForm1::Button4Click(TObject *Sender)
{
 if (Form1->Edit2->Text=="")
    {
    Application->MessageBox("Не введен 1ый операнд!", "Ошибка", MB_OK);
    }
 if (Form1->Edit3->Text=="")
    {
    Application->MessageBox("Не введен 2ый операнд!", "Ошибка", MB_OK);
    }
 if (Form1->Edit2->Text!="" && Form1->Edit3->Text!="")
    {
    int x = StrToInt(Edit2->Text);
    int y = StrToInt(Edit3->Text);
    int res;
    Server.OleProcedure("Mul", x, y, &res);
    Edit4->Text = res;
    AnsiString str = Edit1->Text + "  " + IntToStr(x) + " * " +IntToStr(y);
    Server.OleProcedure("Protocol",str.c_str());
    }
}


//__________ Выход из системы ______________________________________________
void __fastcall TForm1::N2Click(TObject *Sender)
{
 AnsiString str1 = "Отключен пользователь " + Edit1->Text;
 AnsiString str2 = Edit1->Text;
 Server.OleProcedure("Protocol",str1.c_str());
 Server.OleProcedure("Exit",str2.c_str());
 Form1->Close();
}


//_________________ Открытие руководства пользователя ______________________
void __fastcall TForm1::N4Click(TObject *Sender)
{
 AnsiString s =  GetCurrentDir()+"\\Doc\\ReadMe.doc";
 char* str = new char[(GetCurrentDir().Length())];
 strcpy(str, s.c_str());
 ShellExecute(Form1->Handle, "open", str, NULL, NULL, SW_SHOWNORMAL);
}


//_________________ Открытие отчета ________________________________________
void __fastcall TForm1::N5Click(TObject *Sender)
{
 AnsiString s =  GetCurrentDir()+"\\Doc\\Report.doc";
 char* str = new char[(GetCurrentDir().Length())];
 strcpy(str, s.c_str());
 ShellExecute(Form1->Handle, "open", str, NULL, NULL, SW_SHOWNORMAL);
}


//_________________ О программе ____________________________________________
void __fastcall TForm1::N6Click(TObject *Sender)
{
 MessageBox(NULL,"Выполнила Афанасьева К. В.","О программе", MB_OK);
}
//---------------------------------------------------------------------------