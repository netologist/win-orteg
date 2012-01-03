//---------------------------------------------------------------------------

#ifndef icdagitimH
#define icdagitimH

#define ILISKILENDIR    0
#define OLUSTUR         1
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
typedef struct _StokAnaDetay {
    double dtTarih;
    double nAlisFiyati;
    double nMiktar;
} StokAnaDetay;

class TfrmIcDagitim : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TMainMenu *MainMenu1;
    TMenuItem *Dosya1;
    TMenuItem *Rapor1;
    TMenuItem *Yeni1;
    TMenuItem *Sil1;
    TMenuItem *N1;
    TMenuItem *kl1;
    TToolBar *ToolBar1;
    TImageList *ImageList1;
    TRadioGroup *radiogroupICDAGITIM;
    TLabel *Label1;
    TLabel *Label4;
    TDateTimePicker *datetimeTarih;
    TEdit *editBelgeNo;
    TGroupBox *GroupBox2;
    TLabel *Label2;
    TComboBox *comboBelgeTuru;
    TGroupBox *GroupBox3;
    TGroupBox *GroupBox4;
    TLabel *Label7;
    TLabel *Label8;
    TLabel *Label9;
    TLabel *Label10;
    TStatusBar *StatusBar1;
    TComboBox *comboIsletmelerAmiriAd;
    TComboBox *comboMuhasebeKsAAd;
    TComboBox *comboAnakilerKsAAd;
    TComboBox *comboUniteKsAAd;
    TEdit *editIsletmelerAmiriRut;
    TEdit *editIsletmelerAmiriGor;
    TEdit *editMuhasebeKsARut;
    TEdit *editMuhasebeKsAGor;
    TEdit *editAnakilerKsARut;
    TEdit *editAnakilerKsAGor;
    TEdit *editUniteKsARut;
    TEdit *editUniteKsAGor;
    TComboBox *comboDonem;
    TLabel *Label3;
    TToolButton *tbtnYENI;
    TToolButton *tbtnSIL;
    TGroupBox *GroupBox5;
    TEdit *editFirmaKodu;
    TComboBox *comboFirmaAdi;
    TSpeedButton *SpeedButton1;
    TTimer *Timer1;
    TPageControl *PageControl1;
    TTabSheet *TabSheet1;
    TTabSheet *TabSheet2;
    TDBGrid *DBGrid1;
    TSpeedButton *SpeedButton2;
    TToolButton *ToolButton4;
    TToolButton *tbtnFIYATTABLOSU;
    TQuery *querySTOKHAR;
    TDBGrid *DBGrid2;
    TTable *tblSTOKANADETAY;
    TFloatField *tblSTOKANADETAYSTOK_KODU;
    TStringField *tblSTOKANADETAYBIRIMI;
    TFloatField *tblSTOKANADETAYALIS_FIYATI;
    TFloatField *tblSTOKANADETAYMIKTAR;
    TQuery *querySTOKANAHAR;
    TStringField *querySTOKANAHARBELGE_TURU;
    TFloatField *querySTOKANAHARFIRMA_KODU;
    TStringField *querySTOKANAHARFIRMA_ADI;
    TDateField *querySTOKANAHARTARIH;
    TStringField *querySTOKANAHARBELGE;
    TStringField *querySTOKANAHARIC_DAGITIM_NO;
    TFloatField *querySTOKANAHARSTOK_KODU;
    TStringField *querySTOKANAHARSTOK_ADI;
    TStringField *querySTOKANAHARBIRIMI;
    TFloatField *querySTOKANAHARMIKTAR;
    TStringField *querySTOKANAHARBIRIM2;
    TFloatField *querySTOKANAHARMIKTAR2;
    TFloatField *querySTOKANAHARBIRIM_KATSAYISI;
    TFloatField *querySTOKANAHARNET_FIYAT;
    TFloatField *querySTOKANAHARKDV;
    TFloatField *querySTOKANAHARISKONTO;
    TFloatField *querySTOKANAHARALIS_FIYATI;
    TFloatField *querySTOKANAHARALIS_TUTARI;
    TFloatField *querySTOKANAHARSATIS_FIYATI;
    TFloatField *querySTOKANAHARSATIS_TUTARI;
    TFloatField *querySTOKANAHARKAR;
    TQuery *querySTOKANADETAY;
    TFloatField *querySTOKANADETAYalis_fiyati;
    TFloatField *querySTOKANADETAYSUMOFmiktar;
    TQuery *queryBELGE_NO;
    TStringField *queryBELGE_NOBELGE_TURU;
    TStringField *queryBELGE_NOBELGE_NO;
    TFloatField *queryBELGE_NOFIRMA_KODU;
    TStringField *queryBELGE_NOFIRMA_ADI;
    TStringField *queryBELGE_NODONEM;
    TDateField *queryBELGE_NOTARIH;
    TFloatField *queryBELGE_NOSTOK_KODU;
    TFloatField *queryBELGE_NOMIKTAR;
    TStringField *queryBELGE_NOBIRIMI;
    TFloatField *queryBELGE_NOHAREKET_NO;
    TFloatField *queryBELGE_NOALIS_FIYATI;
    TFloatField *queryBELGE_NOALIS_TUTARI;
    TFloatField *queryBELGE_NOSATIS_FIYATI;
    TFloatField *queryBELGE_NOSATIS_TUTARI;
    TFloatField *queryBELGE_NOKAR;
    TIntegerField *querySTOKANAHARHAREKET_NO;
    TDataSource *dsrcSTOKHAR;
    TToolButton *tbtnCALISTIR;
    TMenuItem *Datm1;
    TMenuItem *TemizlikTutana1;
    TMenuItem *Fatura1;
    TMenuItem *N2;
    TMenuItem *Olutur1;
    TBevel *Bevel1;
    TRadioGroup *radiogroupFIRMASECIM;
    TLabel *Label5;
    TLabel *Label11;
    TToolButton *tbtnKAYDET;
    TMenuItem *Kaydet1;
    TToolButton *tbtnAC;
    TToolButton *ToolButton3;
    TPopupMenu *popupIC_DAGITIM;
    TMenuItem *Kaydet2;
    TMenuItem *Sil2;
    TMenuItem *N3;
    TMenuItem *zellikler1;
    TQuery *querySIL;
    TMenuItem *DatmA1;
    TMenuItem *N4;
    TMenuItem *FirmaTablosu1;
    TQuery *queryICDAGITIMTOPLAMI;
    TFloatField *queryICDAGITIMTOPLAMISUMOFALIS_TUTARI;
    TFloatField *queryICDAGITIMTOPLAMISUMOFSATIS_TUTARI;
    TFloatField *queryICDAGITIMTOPLAMISUMOFKAR;
    TProgressBar *ProgressBar1;
    TStringField *queryBELGE_NOSTOK_ADI;
    TMenuItem *DatmnBalantsnSil1;
    TMenuItem *BalantsnKes1;
    TToolButton *tbtnBAGLANTI;
    TToolButton *ToolButton5;
    TMenuItem *Yardm1;
    TMenuItem *erik1;
    TStringField *querySTOKHARBELGE_TURU;
    TFloatField *querySTOKHARFIRMA_KODU;
    TStringField *querySTOKHARFIRMA_ADI;
    TDateField *querySTOKHARTARIH;
    TStringField *querySTOKHARBELGE;
    TStringField *querySTOKHARIC_DAGITIM_NO;
    TStringField *querySTOKHARSTOK_ADI;
    TStringField *querySTOKHARBIRIMI;
    TFloatField *querySTOKHARMIKTAR;
    TStringField *querySTOKHARBIRIM2;
    TFloatField *querySTOKHARMIKTAR2;
    TFloatField *querySTOKHARALIS_FIYATI;
    TFloatField *querySTOKHARALIS_TUTARI;
    TFloatField *querySTOKHARSATIS_FIYATI;
    TFloatField *querySTOKHARSATIS_TUTARI;
    TFloatField *querySTOKHARKAR;
    TFloatField *querySTOKHARSTOK_KODU;
    TFloatField *querySTOKHARNET_FIYAT;
    TFloatField *querySTOKHARKDV;
    TFloatField *querySTOKHARISKONTO;
    TFloatField *querySTOKHARBIRIM_KATSAYISI;
    TIntegerField *querySTOKHARHAREKET_NO;
    TToolButton *ToolButton1;
    TToolButton *tbtnKOPYA;
    TMenuItem *N5;
    TMenuItem *HareketiKopyala1;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall comboIsletmelerAmiriAdChange(TObject *Sender);
    void __fastcall comboMuhasebeKsAAdChange(TObject *Sender);
    void __fastcall comboAnakilerKsAAdChange(TObject *Sender);
    void __fastcall comboUniteKsAAdChange(TObject *Sender);
    void __fastcall comboFirmaAdiChange(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall radiogroupICDAGITIMClick(TObject *Sender);
    void __fastcall radiogroupFIRMASECIMClick(TObject *Sender);
    float __fastcall StokMalDurumuHazirla(float nStokKodu);
    void __fastcall IcDagitimiOlustur(int nDurum);
    void __fastcall comboBelgeTuruChange(TObject *Sender);
    void __fastcall comboDonemChange(TObject *Sender);
    void __fastcall YeniKayitNoGetir(void);
    void __fastcall TabloyuOlustur(void);
    void __fastcall TabloyuSil(void);
    void __fastcall IcDagitimEkle(double nAlisFiyati, double nMiktar);
    void __fastcall editBelgeNoChange(TObject *Sender);
    void __fastcall CikilacakIcDagitimlar(void);
    void __fastcall NesneleriTemizle(void);
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall kl1Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall Kaydet1Click(TObject *Sender);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall Sil2Click(TObject *Sender);
    void __fastcall Kaydet2Click(TObject *Sender);
    void __fastcall zellikler1Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall DatmA1Click(TObject *Sender);
    void __fastcall Olutur1Click(TObject *Sender);
    void __fastcall Yeni1Click(TObject *Sender);
    void __fastcall FirmaTablosu1Click(TObject *Sender);
    void __fastcall Datm1Click(TObject *Sender);
    void __fastcall TemizlikTutana1Click(TObject *Sender);
    void __fastcall datetimeTarihChange(TObject *Sender);
    void __fastcall DatmnBalantsnSil1Click(TObject *Sender);
    void __fastcall BalantsnKes1Click(TObject *Sender);
    void __fastcall erik1Click(TObject *Sender);
    void __fastcall Fatura1Click(TObject *Sender);
    void __fastcall HareketiKopyala1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmIcDagitim(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmIcDagitim *frmIcDagitim;
extern StokAnaDetay *saDetay;
//---------------------------------------------------------------------------
#endif
