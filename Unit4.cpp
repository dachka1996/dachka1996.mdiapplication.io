//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormClose(TObject *Sender, TCloseAction &Action)
{
Action=caFree;
}
void __fastcall TForm4::Button2Click(TObject *Sender)
{
	  DBGrid1->DataSource = DataSource3;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	   DBGrid1->DataSource = DataSource2;
}
//---------------------------------------------------------------------------
