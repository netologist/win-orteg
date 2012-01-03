//---------------------------------------------------------------------------

#ifndef unitekartiH
#define unitekartiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <ImgList.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmUnite : public TForm
{
__published:	// IDE-managed Components
    TToolBar *ToolBar1;
    TMainMenu *MainMenu1;
    TMenuItem *Dosya1;
    TMenuItem *Rapor1;
    TMenuItem *Yeni1;
    TMenuItem *Kaydet1;
    TMenuItem *Sil1;
    TMenuItem *N1;
    TMenuItem *k1;
    TMenuItem *KartDkm1;
    TToolButton *tbtnYENI;
    TToolButton *tbtnKAYDET;
    TToolButton *tbtnSIL;
    TImageList *ImageList1;
    TTimer *Timer1;
    TPageControl *PageControl1;
    TTabSheet *TabSheet1;
    TTabSheet *TabSheet3;
    TDBGrid *DBGrid2;
    TTabSheet *TabSheet4;
    TGroupBox *GroupBox1;
    TLabel *Label3;
    TLabel *Label2;
    TBevel *Bevel1;
    TDBComboBox *dbcomboKisimAmiri;
    TDBEdit *dbeditKsARutbesi;
    TDBEdit *dbeditKsAGorevi;
    TComboBox *comboUniteAdi;
    TDataSource *dsrcGIRISLER;
    TDataSource *dsrcCIKISLAR;
    TQuery *queryGIRISLER;
    TStringField *queryGIRISLERBELGE_TURU;
    TFloatField *queryGIRISLERFIRMA_KODU;
    TStringField *queryGIRISLERFIRMA_ADI;
    TDateField *queryGIRISLERTARIH;
    TStringField *queryGIRISLERBELGE;
    TStringField *queryGIRISLERIC_DAGITIM_NO;
    TStringField *queryGIRISLERSTOK_ADI;
    TStringField *queryGIRISLERBIRIMI;
    TFloatField *queryGIRISLERMIKTAR;
    TStringField *queryGIRISLERBIRIM2;
    TFloatField *queryGIRISLERMIKTAR2;
    TFloatField *queryGIRISLERALIS_FIYATI;
    TFloatField *queryGIRISLERALIS_TUTARI;
    TFloatField *queryGIRISLERSATIS_FIYATI;
    TFloatField *queryGIRISLERSATIS_TUTARI;
    TFloatField *queryGIRISLERKAR;
    TFloatField *queryGIRISLERSTOK_KODU;
    TFloatField *queryGIRISLERNET_FIYAT;
    TFloatField *queryGIRISLERKDV;
    TFloatField *queryGIRISLERISKONTO;
    TFloatField *queryGIRISLERBIRIM_KATSAYISI;
    TIntegerField *queryGIRISLERHAREKET_NO;
    TQuery *queryCIKISLAR;
    TStringField *StringField1;
    TFloatField *FloatField1;
    TStringField *StringField2;
    TDateField *DateField1;
    TStringField *StringField3;
    TStringField *StringField4;
    TStringField *StringField5;
    TStringField *StringField6;
    TFloatField *FloatField2;
    TStringField *StringField7;
    TFloatField *FloatField3;
    TFloatField *FloatField4;
    TFloatField *FloatField5;
    TFloatField *FloatField6;
    TFloatField *FloatField7;
    TFloatField *FloatField8;
    TFloatField *FloatField9;
    TFloatField *FloatField10;
    TFloatField *FloatField11;
    TFloatField *FloatField12;
    TFloatField *FloatField13;
    TIntegerField *IntegerField1;
    TDBGrid *DBGrid3;
    TMenuItem *Yardm1;
    TMenuItem *erik1;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall Kaydet1Click(TObject *Sender);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall dbcomboKisimAmiriClick(TObject *Sender);
    void __fastcall comboUniteAdiClick(TObject *Sender);
    void __fastcall dbeditKsAGoreviKeyPress(TObject *Sender, char &Key);
    void __fastcall comboUniteAdiKeyPress(TObject *Sender, char &Key);
    void __fastcall Yeni1Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall erik1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmUnite(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmUnite *frmUnite;
extern bool bUniteYeniKayit;
//---------------------------------------------------------------------------
#endif
