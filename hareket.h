//---------------------------------------------------------------------------

#ifndef hareketH
#define hareketH

#define hareketKOD          0
#define hareketCINSI        1
#define hareketMIKTAR       2
#define hareketBIRIM        3
#define hareketMIKTAR2      4
#define hareketBIRIM2       5
#define hareketPAKET_ICINDE 6
#define hareketNETFIYAT     7
#define hareketISKONTO      8
#define hareketKDV          9
#define hareketALISFIYATI   10
#define hareketALIS_TUTARI  11
#define hareketSATISFIYATI  12
#define hareketSATISTUTARI  13
#define hareketKAR          14
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmHareket : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TStatusBar *StatusBar1;
    TGroupBox *GroupBox2;
    TLabel *Label1;
    TDateTimePicker *datetimeTarih;
    TToolBar *ToolBar1;
    TToolButton *tbtnYENI;
    TToolButton *tbtnKAYDET;
    TToolButton *tbtnSIL;
    TToolButton *ToolButton4;
    TToolButton *tbtnSTOKEKLE;
    TImageList *ImageList1;
    TMainMenu *MainMenu1;
    TMenuItem *Dosya1;
    TMenuItem *Yeni1;
    TMenuItem *Kaydet1;
    TMenuItem *Sil1;
    TMenuItem *N1;
    TMenuItem *StokEkle1;
    TMenuItem *N2;
    TMenuItem *k1;
    TMenuItem *Rapor1;
    TMenuItem *KartDkm1;
    TGroupBox *GroupBox3;
    TSpeedButton *SpeedButton1;
    TEdit *editBelgeNo;
    TLabel *Label3;
    TEdit *editFirmaKodu;
    TTimer *Timer1;
    TPopupMenu *popupSTOKHAR;
    TMenuItem *Sil2;
    TMenuItem *Listeyiboalt1;
    TQuery *queryTABLOSIL;
    TQuery *queryHAREKETTOPLAMI;
    TFloatField *queryHAREKETTOPLAMISUMOFsatis_tutari;
    TFloatField *queryHAREKETTOPLAMISUMOFalis_tutari;
    TFloatField *queryHAREKETTOPLAMISUMOFkar;
    TQuery *queryGIRISTOPLAMI;
    TQuery *queryCIKISTOPLAMI;
    TFloatField *queryGIRISTOPLAMISUMOFmiktar;
    TFloatField *queryCIKISTOPLAMISUMOFmiktar;
    TToolButton *ToolButton2;
    TToolButton *tbtnFIYATTABLOSU;
    TMenuItem *FiyatTablosu1;
    TToolButton *tbtnFIYATTESPITI;
    TToolButton *ToolButton3;
    TRadioGroup *radiogroupFIRMASECIMI;
    TLabel *Label4;
    TMenuItem *N3;
    TMenuItem *zellikler1;
    TToolButton *tbtnIADE;
    TMenuItem *adeTablosu1;
    TGroupBox *GroupBox4;
    TLabel *Label5;
    TLabel *Label2;
    TComboBox *comboBelgeTuru;
    TComboBox *comboDonem;
    TComboBox *comboUniteAdi;
    TSpeedButton *SpeedButton2;
    TToolButton *tbtnBAGLANTI;
    TMenuItem *BalantyKes1;
    TMenuItem *BalantyKes2;
    TMenuItem *N4;
    TMenuItem *N5;
    TMenuItem *Yardm1;
    TMenuItem *erik1;
    TToolButton *tbtnBARKOD;
    TToolButton *ToolButton5;
    TMenuItem *BarkodaGreAra1;
    TToolButton *ToolButton1;
    TToolButton *ToolButton6;
    TQuery *querySTOKHAR;
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
    TMenuItem *Barkod1;
    TLabel *Label6;
    void __fastcall comboBelgeTuruChange(TObject *Sender);
    void __fastcall datetimeTarihChange(TObject *Sender);
    void __fastcall editBelgeNoChange(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall Kaydet1Click(TObject *Sender);
    void __fastcall Yeni1Click(TObject *Sender);
    void __fastcall StokEkle1Click(TObject *Sender);
    void __fastcall Sil2Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall Listeyiboalt1Click(TObject *Sender);
    void __fastcall tbtnFIYATTESPITIClick(TObject *Sender);
    void __fastcall FiyatTablosu1Click(TObject *Sender);
    void __fastcall radiogroupFIRMASECIMIClick(TObject *Sender);
    void __fastcall comboUniteAdiChange(TObject *Sender);
    void __fastcall zellikler1Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall adeTablosu1Click(TObject *Sender);
    void __fastcall comboDonemChange(TObject *Sender);
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall comboUniteAdiClick(TObject *Sender);
    void __fastcall comboBelgeTuruClick(TObject *Sender);
    void __fastcall datetimeTarihClick(TObject *Sender);
    void __fastcall comboDonemClick(TObject *Sender);
    void __fastcall BalantyKes1Click(TObject *Sender);
    void __fastcall BalantyKes2Click(TObject *Sender);
    void __fastcall erik1Click(TObject *Sender);
    void __fastcall tbtnBARKODClick(TObject *Sender);
    void __fastcall BarkodaGreAra1Click(TObject *Sender);
    void __fastcall KartDkm1Click(TObject *Sender);
    void __fastcall Barkod1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmHareket(TComponent* Owner);
    void __fastcall HareketToplamiGetir(void);    
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHareket *frmHareket;
extern bool bMiktarCevirme;
extern bool bStokCagirma;
//---------------------------------------------------------------------------
#endif
