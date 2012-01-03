//---------------------------------------------------------------------------

#ifndef icdagitimlistH
#define icdagitimlistH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmIcDagitimList : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TGroupBox *GroupBox2;
    TDBGrid *DBGrid1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label4;
    TLabel *Label5;
    TComboBox *comboHareketTuru;
    TComboBox *comboFirmaAdi;
    TComboBox *comboDonem;
    TEdit *editIcDagitimNo;
    TDataSource *dsrcIC_DAGITIM;
    TQuery *queryIC_DAGITIM;
    TStringField *queryIC_DAGITIMbelge_turu;
    TStringField *queryIC_DAGITIMbelge_no;
    TStringField *queryIC_DAGITIMfirma_adi;
    TStringField *queryIC_DAGITIMdonem;
    TFloatField *queryIC_DAGITIMFIRMA_KODU;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall comboHareketTuruChange(TObject *Sender);
    void __fastcall comboFirmaAdiChange(TObject *Sender);
    void __fastcall comboDonemChange(TObject *Sender);
    void __fastcall editIcDagitimNoChange(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmIcDagitimList(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmIcDagitimList *frmIcDagitimList;
//---------------------------------------------------------------------------
#endif
