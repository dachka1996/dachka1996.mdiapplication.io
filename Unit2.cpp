//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
// #include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	AnsiString login=Edit1->Text;
	AnsiString password=Edit2->Text;
	if(login == "twogoose" && password == "twogoose")
	{
	   ModalResult = mrOk;
	}


	//TForm *Form1 = new TForm1(this);
    // Form1->Visible = true;
}

bool __fastcall TForm2::Execute()
{
	bool Result;
	TForm2 *LoginForm = new TForm2(NULL);
	try
	{
		Result = (LoginForm->ShowModal() == mrOk);
	}
	__finally
	{
		delete LoginForm;
	}
	return Result;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button2Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------


