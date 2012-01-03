//---------------------------------------------------------------------------

#ifndef stoklistH
#define stoklistH
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
class TfrmStokListesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TGroupBox *GroupBox2;
    TDBGrid *DBGrid1;
    TRadioButton *RadioButton1;
    TRadioButton *RadioButton2;
    TEdit *editSorgu;
    TQuery *querySTOKLIST;
    TDataSource *DataSource1;
    TFloatField *querySTOKLISTStokKodu;
    TStringField *querySTOKLISTCinsi;
    TFloatField *querySTOKLISTDevirMiktari;
    TStringField *querySTOKLISTBirimi;
    TStringField *querySTOKLISTBirim2;
    TFloatField *querySTOKLISTBirim2Katsayisi;
    TFloatField *querySTOKLISTKDVOrani;
    TFloatField *querySTOKLISTIskontoOrani;
    TStringField *querySTOKLISTBirimeGore;
    TFloatField *querySTOKLISTSonDurum;
    TStringField *querySTOKLISTStokAdi;
    TComboBox *comboCinsi;
    void __fastcall editSorguChange(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall RadioButton1Click(TObject *Sender);
    void __fastcall RadioButton2Click(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall comboCinsiChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmStokListesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmStokListesi *frmStokListesi;
extern bool bKontrol;
//---------------------------------------------------------------------------
#endif
