//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.Oracle.hpp>
#include <FireDAC.Phys.OracleDef.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TFDPhysOracleDriverLink *FDPhysOracleDriverLink1;
	TFDConnection *TestConnection;
	TDataSource *DataSource1;
	TFDQuery *FDQuery1;
	TSQLStoredProc *SQLStoredProc1;
	TRadioGroup *RadioGroup1;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TButton *Button1;
	TRadioGroup *RadioGroup2;
	TButton *Button2;
	TButton *Button3;
	TDataSource *DataSource4;
	TFDQuery *FDQuery4;
	TDataSource *DataSource5;
	TFDQuery *FDQuery5;
	TFDQuery *FDQuery2;
	TDataSource *DataSource2;
	TFDQuery *FDQuery3;
	TDataSource *DataSource3;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall DataSource1DataChange(TObject *Sender, TField *Field);
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
