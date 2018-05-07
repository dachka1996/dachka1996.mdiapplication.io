//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit4.h"
#include "Unit3.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
	TForm3 *Form3 = new TForm3(Application);
	// Form3->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
	  TForm4 *Form4 = new TForm4(Application);
}


//---------------------------------------------------------------------------

void __fastcall TForm1::Exit1Click(TObject *Sender)
{
	 Close();
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------



