//---------------------------------------------------------------------------

#ifndef fiyattablosuH
#define fiyattablosuH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmFiyatTablosu : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TQuery *querySTOKANADETAY;
    TStringField *querySTOKANADETAYbirimi;
    TFloatField *querySTOKANADETAYalis_fiyati;
    TFloatField *querySTOKANADETAYSUMOFmiktar;
    TDataSource *dsrcSTOKANADETAY;
    TQuery *querySTOKHAR;
    TStringField *querySTOKHARBELGE_TURU;
    TFloatField *querySTOKHARFIRMA_KODU;
    TStringField *querySTOKHARFIRMA_ADI;
    TDateField *querySTOKHARTARIH;
    TStringField *querySTOKHARBELGE;
    TStringField *querySTOKHARIC_DAGITIM_NO;
    TFloatField *querySTOKHARSTOK_KODU;
    TStringField *querySTOKHARSTOK_ADI;
    TStringField *querySTOKHARBIRIMI;
    TFloatField *querySTOKHARMIKTAR;
    TStringField *querySTOKHARBIRIM2;
    TFloatField *querySTOKHARMIKTAR2;
    TFloatField *querySTOKHARNET_FIYAT;
    TFloatField *querySTOKHARKDV;
    TFloatField *querySTOKHARISKONTO;
    TFloatField *querySTOKHARALIS_FIYATI;
    TFloatField *querySTOKHARALIS_TUTARI;
    TFloatField *querySTOKHARSATIS_FIYATI;
    TFloatField *querySTOKHARSATIS_TUTARI;
    TFloatField *querySTOKHARKAR;
    TLabel *labelStokKodu;
    TStaticText *StaticText1;
    TQuery *queryIADEHAR;
    TStringField *queryIADEHARBELGE_TURU;
    TFloatField *queryIADEHARFIRMA_KODU;
    TStringField *queryIADEHARFIRMA_ADI;
    TDateField *queryIADEHARTARIH;
    TStringField *queryIADEHARBELGE;
    TStringField *queryIADEHARIC_DAGITIM_NO;
    TStringField *queryIADEHARSTOK_ADI;
    TStringField *queryIADEHARBIRIMI;
    TFloatField *queryIADEHARMIKTAR;
    TStringField *queryIADEHARBIRIM2;
    TFloatField *queryIADEHARMIKTAR2;
    TFloatField *queryIADEHARALIS_FIYATI;
    TFloatField *queryIADEHARALIS_TUTARI;
    TFloatField *queryIADEHARSATIS_FIYATI;
    TFloatField *queryIADEHARSATIS_TUTARI;
    TFloatField *queryIADEHARKAR;
    TFloatField *queryIADEHARSTOK_KODU;
    TFloatField *queryIADEHARNET_FIYAT;
    TFloatField *queryIADEHARKDV;
    TFloatField *queryIADEHARISKONTO;
    TFloatField *queryIADEHARBIRIM_KATSAYISI;
    TIntegerField *queryIADEHARHAREKET_NO;
    TStatusBar *StatusBar1;
    TLabel *labelDurum;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmFiyatTablosu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmFiyatTablosu *frmFiyatTablosu;
//---------------------------------------------------------------------------
#endif
