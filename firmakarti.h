//---------------------------------------------------------------------------

#ifndef firmakartiH
#define firmakartiH
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
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmFirma : public TForm
{
__published:	// IDE-managed Components
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
    TToolBar *ToolBar1;
    TToolButton *tbtnYENI;
    TToolButton *tbtnKAYDET;
    TToolButton *tbtnSIL;
    TToolButton *ToolButton4;
    TToolButton *tbtnAC;
    TPageControl *PageControl1;
    TTabSheet *TabSheet1;
    TTabSheet *TabSheet2;
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TDBEdit *dbeditFirmaKodu;
    TDBEdit *dbeditFirmaAdi;
    TDBEdit *dbeditAdres1;
    TDBEdit *dbeditAdres2;
    TDBGrid *DBGrid1;
    TDataSource *dsrcYETKILI;
    TTable *tblYETKILI;
    TTimer *Timer1;
    TFloatField *tblYETKILIFIRMA_KODU;
    TStringField *tblYETKILIADI;
    TStringField *tblYETKILIGOREVI;
    TStringField *tblYETKILIDAHILI;
    TQuery *queryFIRMAKODU;
    TFloatField *queryFIRMAKODUFIRMA_KODU;
    TStringField *queryFIRMAKODUFIRMA_ADI;
    TStringField *queryFIRMAKODUADRES_1;
    TStringField *queryFIRMAKODUADRES_2;
    TStringField *queryFIRMAKODUTELEFON;
    TStringField *queryFIRMAKODUFAKS;
    TQuery *queryYETKILISIL;
    TPopupMenu *popupYETKILI;
    TMenuItem *Sil2;
    TMenuItem *Yeni2;
    TMenuItem *Kaydet2;
    TMenuItem *N3;
    TMenuItem *Btnyetkililerisil1;
    TLabel *Label6;
    TLabel *Label7;
    TDBEdit *dbeditVD;
    TDBEdit *dbeditVN;
    TLabel *Label4;
    TDBEdit *dbeditTelefon;
    TDBEdit *dbeditFaks;
    TLabel *Label5;
    TTabSheet *TabSheet3;
    TTabSheet *TabSheet4;
    TBevel *Bevel1;
    TStringField *tblYETKILITELEFON;
    TDataSource *dsrcGIRISLERI;
    TDataSource *dsrcIADELERI;
    TQuery *queryIADELERI;
    TQuery *queryGIRISLERI;
    TStringField *queryIADELERIBELGE_TURU;
    TFloatField *queryIADELERIFIRMA_KODU;
    TStringField *queryIADELERIFIRMA_ADI;
    TDateField *queryIADELERITARIH;
    TStringField *queryIADELERIBELGE;
    TStringField *queryIADELERIIC_DAGITIM_NO;
    TStringField *queryIADELERISTOK_ADI;
    TStringField *queryIADELERIBIRIMI;
    TFloatField *queryIADELERIMIKTAR;
    TStringField *queryIADELERIBIRIM2;
    TFloatField *queryIADELERIMIKTAR2;
    TFloatField *queryIADELERIALIS_FIYATI;
    TFloatField *queryIADELERIALIS_TUTARI;
    TFloatField *queryIADELERISATIS_FIYATI;
    TFloatField *queryIADELERISATIS_TUTARI;
    TFloatField *queryIADELERIKAR;
    TFloatField *queryIADELERISTOK_KODU;
    TFloatField *queryIADELERINET_FIYAT;
    TFloatField *queryIADELERIKDV;
    TFloatField *queryIADELERIISKONTO;
    TFloatField *queryIADELERIBIRIM_KATSAYISI;
    TIntegerField *queryIADELERIHAREKET_NO;
    TStringField *queryGIRISLERIBELGE_TURU;
    TFloatField *queryGIRISLERIFIRMA_KODU;
    TStringField *queryGIRISLERIFIRMA_ADI;
    TDateField *queryGIRISLERITARIH;
    TStringField *queryGIRISLERIBELGE;
    TStringField *queryGIRISLERIIC_DAGITIM_NO;
    TStringField *queryGIRISLERISTOK_ADI;
    TStringField *queryGIRISLERIBIRIMI;
    TFloatField *queryGIRISLERIMIKTAR;
    TStringField *queryGIRISLERIBIRIM2;
    TFloatField *queryGIRISLERIMIKTAR2;
    TFloatField *queryGIRISLERIALIS_FIYATI;
    TFloatField *queryGIRISLERIALIS_TUTARI;
    TFloatField *queryGIRISLERISATIS_FIYATI;
    TFloatField *queryGIRISLERISATIS_TUTARI;
    TFloatField *queryGIRISLERIKAR;
    TFloatField *queryGIRISLERISTOK_KODU;
    TFloatField *queryGIRISLERINET_FIYAT;
    TFloatField *queryGIRISLERIKDV;
    TFloatField *queryGIRISLERIISKONTO;
    TFloatField *queryGIRISLERIBIRIM_KATSAYISI;
    TIntegerField *queryGIRISLERIHAREKET_NO;
    TDBGrid *DBGrid2;
    TDBGrid *DBGrid3;
    TMenuItem *Yardm1;
    TMenuItem *erik1;
    void __fastcall PageControl1Change(TObject *Sender);
    void __fastcall dbeditFirmaKoduKeyPress(TObject *Sender, char &Key);
    void __fastcall Yeni1Click(TObject *Sender);
    void __fastcall dbeditFirmaAdiKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditAdres1KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditAdres2KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditTelefonKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditFaksKeyPress(TObject *Sender, char &Key);
    void __fastcall Kaydet1Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall tblYETKILIBeforePost(TDataSet *DataSet);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall A1Click(TObject *Sender);
    void __fastcall dbeditVDKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditVNKeyPress(TObject *Sender, char &Key);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall Sil2Click(TObject *Sender);
    void __fastcall Kaydet2Click(TObject *Sender);
    void __fastcall Yeni2Click(TObject *Sender);
    void __fastcall Btnyetkililerisil1Click(TObject *Sender);
    void __fastcall erik1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmFirma(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmFirma *frmFirma;
extern bool bFirmaYeniKayit;
//---------------------------------------------------------------------------
#endif
