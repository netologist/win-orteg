//---------------------------------------------------------------------------

#ifndef stokkartiH
#define stokkartiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <DBCtrls.hpp>
#include <ImgList.hpp>
#include <Mask.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <ExtCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmStokKarti : public TForm
{
__published:	// IDE-managed Components
    TToolBar *ToolBar1;
    TToolButton *tntYENI;
    TToolButton *tbtnKAYDET;
    TToolButton *tbtnSIL;
    TToolButton *ToolButton4;
    TToolButton *tbtnAC;
    TImageList *ImageList1;
    TMainMenu *MainMenu1;
    TMenuItem *Dosya1;
    TMenuItem *Yeni1;
    TMenuItem *Kaydet1;
    TMenuItem *Sil1;
    TMenuItem *N1;
    TMenuItem *A1;
    TMenuItem *N2;
    TMenuItem *k1;
    TMenuItem *Rapor1;
    TMenuItem *KartDkm1;
    TPageControl *PageControl1;
    TTabSheet *TabSheet1;
    TTabSheet *TabSheet2;
    TTabSheet *TabSheet3;
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label5;
    TLabel *Label6;
    TLabel *Label7;
    TLabel *Label9;
    TBevel *Bevel1;
    TLabel *Label3;
    TLabel *Label4;
    TDBEdit *dbeditStokKodu;
    TDBEdit *dbeditStokAdi;
    TDBEdit *dbeditBirimKatsayisi;
    TDBEdit *dbeditSonDurum;
    TDBComboBox *dbcomboBirimi;
    TDBComboBox *dbcomboBirim2;
    TDBComboBox *dbcomboCinsi;
    TDBComboBox *dbcomboBirimeGore;
    TTabSheet *TabSheet4;
    TDBGrid *DBGrid1;
    TDBGrid *DBGrid3;
    TPanel *Panel1;
    TLabel *Label10;
    TLabel *Label11;
    TDBEdit *dbeditKDVOrani;
    TDBEdit *dbeditIskontoOrani;
    TTimer *Timer1;
    TQuery *querySTOKKODU;
    TFloatField *querySTOKKODUStokKodu;
    TStringField *querySTOKKODUStokAdi;
    TStringField *querySTOKKODUCinsi;
    TFloatField *querySTOKKODUDevirMiktari;
    TStringField *querySTOKKODUBirimi;
    TStringField *querySTOKKODUBirim2;
    TFloatField *querySTOKKODUBirim2Katsayisi;
    TFloatField *querySTOKKODUKDVOrani;
    TFloatField *querySTOKKODUIskontoOrani;
    TStringField *querySTOKKODUBirimeGore;
    TFloatField *querySTOKKODUSonDurum;
    TQuery *queryGIRISLER;
    TDataSource *dsrcGIRISLER;
    TStringField *queryGIRISLERBELGE_TURU;
    TFloatField *queryGIRISLERFIRMA_KODU;
    TStringField *queryGIRISLERFIRMA_ADI;
    TDateField *queryGIRISLERTARIH;
    TStringField *queryGIRISLERBELGE;
    TStringField *queryGIRISLERIC_DAGITIM_NO;
    TFloatField *queryGIRISLERSTOK_KODU;
    TStringField *queryGIRISLERSTOK_ADI;
    TStringField *queryGIRISLERBIRIMI;
    TFloatField *queryGIRISLERMIKTAR;
    TStringField *queryGIRISLERBIRIM2;
    TFloatField *queryGIRISLERMIKTAR2;
    TFloatField *queryGIRISLERNET_FIYAT;
    TFloatField *queryGIRISLERKDV;
    TFloatField *queryGIRISLERISKONTO;
    TFloatField *queryGIRISLERALIS_FIYATI;
    TFloatField *queryGIRISLERALIS_TUTARI;
    TFloatField *queryGIRISLERSATIS_FIYATI;
    TFloatField *queryGIRISLERSATIS_TUTARI;
    TFloatField *queryGIRISLERKAR;
    TDataSource *dsrcCIKISLAR;
    TQuery *queryCIKISLAR;
    TStringField *StringField1;
    TFloatField *FloatField1;
    TStringField *StringField2;
    TDateField *DateField1;
    TStringField *StringField3;
    TStringField *StringField4;
    TFloatField *FloatField2;
    TStringField *StringField5;
    TStringField *StringField6;
    TFloatField *FloatField3;
    TStringField *StringField7;
    TFloatField *FloatField4;
    TFloatField *FloatField5;
    TFloatField *FloatField6;
    TFloatField *FloatField7;
    TFloatField *FloatField8;
    TFloatField *FloatField9;
    TFloatField *FloatField10;
    TFloatField *FloatField11;
    TFloatField *FloatField12;
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
    TStatusBar *StatusBar1;
    TDBGrid *DBGrid2;
    TPopupMenu *popupOZELLIKLER;
    TMenuItem *zellikler1;
    TFloatField *queryGIRISLERBIRIM_KATSAYISI;
    TIntegerField *queryGIRISLERHAREKET_NO;
    TFloatField *queryCIKISLARBIRIM_KATSAYISI;
    TIntegerField *queryCIKISLARHAREKET_NO;
    TSpeedButton *SpeedButton1;
    TSpeedButton *SpeedButton2;
    TMenuItem *Yardm1;
    TMenuItem *erik1;
    TTabSheet *TabSheet5;
    TDBGrid *DBGrid4;
    TQuery *querySTOKANADETAY;
    TStringField *querySTOKANADETAYbirimi;
    TFloatField *querySTOKANADETAYalis_fiyati;
    TFloatField *querySTOKANADETAYSUMOFmiktar;
    TDataSource *dsrcSTOKANADETAY;
    TPopupMenu *popupBARKOD;
    TMenuItem *BarkodSil1;
    TPopupMenu *popupFIYAT;
    TMenuItem *nitelereVerilenFiyat1;
    TMenuItem *TabldotaGreFiyat1;
    void __fastcall A1Click(TObject *Sender);
    void __fastcall Yeni1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall Kaydet1Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall dbeditStokKoduKeyPress(TObject *Sender, char &Key);
    void __fastcall dbcomboCinsiKeyPress(TObject *Sender, char &Key);
    void __fastcall dbcomboBirimiKeyPress(TObject *Sender, char &Key);
    void __fastcall dbcomboBirim2KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditBirimKatsayisiKeyPress(TObject *Sender,
          char &Key);
    void __fastcall dbeditDevirMiktariKeyPress(TObject *Sender, char &Key);
    void __fastcall dbcomboBirimeGoreKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditSonDurumKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditStokAdiKeyPress(TObject *Sender, char &Key);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall dbeditStokKoduChange(TObject *Sender);
    void __fastcall dbeditStokAdiChange(TObject *Sender);
    void __fastcall zellikler1Click(TObject *Sender);
    void __fastcall KartDkm1Click(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall erik1Click(TObject *Sender);
    void __fastcall DBGrid4KeyPress(TObject *Sender, char &Key);
    void __fastcall BarkodSil1Click(TObject *Sender);
    void __fastcall nitelereVerilenFiyat1Click(TObject *Sender);
    void __fastcall TabldotaGreFiyat1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmStokKarti(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmStokKarti *frmStokKarti;
extern bool bStokYeniKayit;
//---------------------------------------------------------------------------
#endif
