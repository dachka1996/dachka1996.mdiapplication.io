//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
/*#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>    */
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <System.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.ToolWin.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TMainMenu *MainMenu1;
	TMenuItem *F1;
	TMenuItem *Edit1;
	TMenuItem *Window1;
	TMenuItem *Close1;
	TMenuItem *Saveas1;
	TMenuItem *Exit1;
	TMenuItem *Cut1;
	TMenuItem *Copy1;
	TMenuItem *Paste1;
	TMenuItem *Cascade1;
	TMenuItem *ileHorizontally1;
	TMenuItem *ileVertically1;
	TMenuItem *MinimizeAll1;
	TMenuItem *ArrangeAll1;
	TOpenDialog *OpenDialog1;
	TActionList *ActionList1;
	TAction *FileNew1;
	TAction *FileOpen1;
	TWindowClose *FileClose1;
	TAction *FileSave1;
	TAction *FileSaveAs1;
	TAction *FileExit1;
	TEditCut *EditCut1;
	TEditCopy *EditCopy1;
	TEditPaste *EditPaste1;
	TWindowCascade *WindowCascade1;
	TWindowTileHorizontal *WindowTileHorizontal1;
	TWindowTileVertical *WindowTileVertical1;
	TWindowMinimizeAll *WindowMinimizeAll1;
	TWindowArrange *WindowArrangeAll1;
	TAction *HelpAbout1;
	TImageList *ImageList1;
	TMenuItem *Save1;
	TToolBar *ToolBar2;
	TToolButton *ToolButton2;
	TToolButton *ToolButton3;
	TToolButton *ToolButton4;
	TToolButton *ToolButton5;
	TToolButton *ToolButton6;
	TToolButton *ToolButton7;
	TToolButton *ToolButton8;
	TToolButton *ToolButton10;
	TToolButton *ToolButton11;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall Exit1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
