//---------------------------------------------------------------------------

#ifndef firmalistH
#define firmalistH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrmFirmaListesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TGroupBox *GroupBox2;
    TRadioButton *RadioButton1;
    TRadioButton *RadioButton2;
    TEdit *Edit1;
    TDBGrid *DBGrid1;
    TQuery *queryFIRMALIST;
    TDataSource *dsrcFIRMALIST;
    TFloatField *queryFIRMALISTFIRMA_KODU;
    TStringField *queryFIRMALISTFIRMA_ADI;
    TStringField *queryFIRMALISTADRES_1;
    TStringField *queryFIRMALISTADRES_2;
    TStringField *queryFIRMALISTTELEFON;
    TStringField *queryFIRMALISTFAKS;
    void __fastcall Edit1Change(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmFirmaListesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmFirmaListesi *frmFirmaListesi;
//---------------------------------------------------------------------------
#endif
