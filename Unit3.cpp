//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
Action=caFree;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button3Click(TObject *Sender)
{
	  DBGrid1->DataSource = DataSource5;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
        DBGrid1->DataSource = DataSource4;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::RadioButton2Click(TObject *Sender)
{
      DBGrid1->DataSource = DataSource1;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DataSource1DataChange(TObject *Sender, TField *Field)
{
		DBGrid1->DataSource = DataSource1;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::RadioButton1Click(TObject *Sender)
{
DBGrid1->DataSource = DataSource2;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
	DBGrid1->DataSource = DataSource3;
}
//---------------------------------------------------------------------------


