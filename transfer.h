//---------------------------------------------------------------------------

#ifndef transferH
#define transferH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <stdio.h>
#include <Dialogs.hpp>
#include <Db.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <DBTables.hpp>

#define IC_DAGITIM          0
#define IADE_IC_DAGITIM     1
#define FATURA              2
#define DEVIR               3
#define TEMIZLIK            4
#define FIRMAYA_IADE        5

//---------------------------------------------------------------------------
typedef struct tagTRANSFER_FORMU {
    TDateTime dtTarih;
    char szIslemTuru[30];
    char szFirmaAdi[40];
    char szBelgeNo[10];
    char szStokAdi[50];
    char szBirimi_1[10];
    char szBirimi_2[10];
    double nFirmaKodu;
    double nStokKodu;
    double nBirimKatsayisi;
    double nMiktar_1;
    double nMiktar_2;
    double nAlisFiyati;
    double nAlisTutari;
    double nSatisFiyati;
    double nSatisTutari;
    double nKar;
} TRANSFER_FORMU;


class TfrmTransfer : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TBevel *Bevel1;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    TDateTimePicker *datetimeBASLANGIC;
    TDateTimePicker *datetimeBITIS;
    TStaticText *StaticText1;
    TStaticText *StaticText2;
    TBevel *Bevel2;
    TSaveDialog *SaveDialog1;
    TCheckBox *checkboxICDAGITIM;
    TCheckBox *checkboxFATURA;
    TCheckBox *checkboxIADE;
    TCheckBox *checkboxTEMIZLIK;
    TLabel *Label1;
    TProgressBar *ProgressBar1;
    TOpenDialog *OpenDialog1;
    TQuery *queryTRANSFER;
    TQuery *querySTOKANA;
    TDataSource *dsrcTRANSFER;
    TFloatField *querySTOKANAStokKodu;
    TStringField *querySTOKANAStokAdi;
    TStringField *querySTOKANACinsi;
    TFloatField *querySTOKANADevirMiktari;
    TStringField *querySTOKANABirimi;
    TStringField *querySTOKANABirim2;
    TFloatField *querySTOKANABirim2Katsayisi;
    TFloatField *querySTOKANAKDVOrani;
    TFloatField *querySTOKANAIskontoOrani;
    TStringField *querySTOKANABirimeGore;
    TFloatField *querySTOKANASonDurum;
    TQuery *querySTOKHAR;
    TStringField *queryTRANSFERBELGE_TURU;
    TStringField *queryTRANSFERBELGE_NO;
    TFloatField *queryTRANSFERFIRMA_KODU;
    TStringField *queryTRANSFERFIRMA_ADI;
    TStringField *queryTRANSFERDONEM;
    TDateField *queryTRANSFERTARIH;
    TFloatField *queryTRANSFERSTOK_KODU;
    TStringField *queryTRANSFERSTOK_ADI;
    TFloatField *queryTRANSFERMIKTAR;
    TStringField *queryTRANSFERBIRIMI;
    TFloatField *queryTRANSFERALIS_FIYATI;
    TFloatField *queryTRANSFERALIS_TUTARI;
    TFloatField *queryTRANSFERSATIS_FIYATI;
    TFloatField *queryTRANSFERSATIS_TUTARI;
    TFloatField *queryTRANSFERKAR;
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall checkboxICDAGITIMClick(TObject *Sender);
    void __fastcall checkboxTEMIZLIKClick(TObject *Sender);
    void __fastcall checkboxIADEClick(TObject *Sender);
    void __fastcall checkboxFATURAClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmTransfer(TComponent* Owner);
    void __fastcall ORTEGdenTexte(TRANSFER_FORMU *tfTransfer);
    void __fastcall TexttenORTEGe(TRANSFER_FORMU *tfTransfer);
    void __fastcall DosyayaKaydet(FILE *fpDosya, TRANSFER_FORMU *tfTransfer, long nKayitNo);
    int __fastcall DosyadanYukle(FILE *fpDosya, TRANSFER_FORMU *tfTransfer, long nKayitNo);
    AnsiString __fastcall BelgeNoHazirla(TRANSFER_FORMU *tfTransfer);
    AnsiString __fastcall DosyaKaydetIletisimKutusu(void);
    AnsiString __fastcall DosyaAcIletisimKutusu(void);
    long __fastcall DosyaBoyu(FILE *stream);
    bool __fastcall MetinDosyasiFiltresi(TRANSFER_FORMU *tfTransfer);
    bool __fastcall KayitVarmi(TRANSFER_FORMU *tfTransfer);

    void __fastcall FirmaKartiKontrol(TRANSFER_FORMU *tfTransfer);
    void __fastcall UniteKartiKontrol(TRANSFER_FORMU *tfTransfer);
    void __fastcall StokKartiKontrol(TRANSFER_FORMU *tfTransfer);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmTransfer *frmTransfer;
//---------------------------------------------------------------------------
#endif
