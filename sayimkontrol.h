//---------------------------------------------------------------------------

#ifndef sayimkontrolH
#define sayimkontrolH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <ImgList.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TfrmSayimKontrol : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TMainMenu *MainMenu1;
    TMenuItem *Rapot1;
    TPageControl *PageControl1;
    TTabSheet *TabSheet1;
    TGroupBox *GroupBox3;
    TLabel *Label7;
    TLabel *Label8;
    TLabel *Label9;
    TStaticText *StaticText2;
    TEdit *editIcDagitimlar;
    TEdit *editSayim;
    TEdit *editCikislarToplami;
    TGroupBox *GroupBox2;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TStaticText *StaticText1;
    TEdit *editDevir;
    TEdit *editFaturaToplami;
    TEdit *editIadeIcDagitimlar;
    TEdit *editGirisToplami;
    TGroupBox *GroupBox4;
    TStaticText *StaticText3;
    TTabSheet *TabSheet2;
    TDBGrid *DBGrid1;
    TTabSheet *TabSheet3;
    TTabSheet *TabSheet4;
    TImageList *ImageList1;
        TTabSheet *TabSheet5;
        TLabel *Label10;
    TEdit *editTemizlikTutanagi;
        TStatusBar *StatusBar1;
        TProgressBar *ProgressBar1;
    TDataSource *dsrcFATURA;
    TQuery *queryFATURA;
    TQuery *queryICDAGITIM;
    TDataSource *dsrcIC_DAGITIM;
    TQuery *queryIADE_ICDAGITIM;
    TDataSource *dsrcIADE_ICDAGITIM;
    TQuery *queryTEMIZLIK;
    TDataSource *dsrcTEMIZLIK;
    TDateField *queryFATURATARIH;
    TStringField *queryFATURABELGE_NO;
    TStringField *queryFATURAFIRMA_ADI;
    TFloatField *queryFATURAALIS_TOPLAMI;
    TFloatField *queryFATURASATIS_TOPLAMI;
    TDateField *queryICDAGITIMTARIH;
    TStringField *queryICDAGITIMBELGE_NO;
    TStringField *queryICDAGITIMFIRMA_ADI;
    TFloatField *queryICDAGITIMALIS_TOPLAMI;
    TFloatField *queryICDAGITIMSATIS_TOPLAMI;
    TDateField *queryIADE_ICDAGITIMTARIH;
    TStringField *queryIADE_ICDAGITIMBELGE_NO;
    TStringField *queryIADE_ICDAGITIMFIRMA_ADI;
    TFloatField *queryIADE_ICDAGITIMALIS_TOPLAMI;
    TFloatField *queryIADE_ICDAGITIMSATIS_TOPLAMI;
    TDateField *queryTEMIZLIKTARIH;
    TStringField *queryTEMIZLIKBELGE_NO;
    TStringField *queryTEMIZLIKFIRMA_ADI;
    TFloatField *queryTEMIZLIKALIS_TOPLAMI;
    TFloatField *queryTEMIZLIKSATIS_TOPLAMI;
    TDBGrid *DBGrid2;
    TDBGrid *DBGrid3;
    TDBGrid *DBGrid4;
    TQuery *queryGIRDITOPLAMI;
    TFloatField *queryGIRDITOPLAMIGIRDI_TOPLAMI;
    TStaticText *staticFark;
    TMenuItem *FaturaListesi1;
    TMenuItem *DatmListesi1;
    TMenuItem *adeDatmListesi1;
    TMenuItem *TemizlikTutana1;
    TMenuItem *KapakSayfas1;
    TComboBox *comboDonem;
    TQuery *queryCIKTITOPLAMI;
    TFloatField *queryCIKTITOPLAMICIKTI_TOPLAMI;
    TStaticText *StaticText4;
    TStaticText *StaticText5;
    TStaticText *StaticText6;
    TStaticText *StaticText7;
    TStaticText *StaticText8;
    TStaticText *StaticText9;
    TQuickRep *quickrepRAPOR;
    TQRBand *PageHeaderBand1;
    TQRBand *DetailBand1;
    TQRLabel *QRLabel1;
    TQRLabel *QRLabel2;
    TQRLabel *QRLabel3;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel8;
    TQRSysData *QRSysData1;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *QRDBText4;
    TQRDBText *QRDBText5;
    TQRBand *PageFooterBand1;
    TQRLabel *QRLabel9;
    TQRLabel *qrlabelAlisToplami;
    TQRLabel *qrlabelSatisToplami;
    TQuickRep *QuickRep1;
    TQRBand *DetailBand2;
    TQRShape *QRShape1;
    TQRLabel *QRLabel11;
    TQRShape *QRShape2;
    TQRLabel *QRLabel10;
    TQRLabel *QRLabel12;
    TQRShape *QRShape3;
    TQRShape *QRShape4;
    TQRLabel *QRLabel13;
    TQRLabel *QRLabel14;
    TQRLabel *QRLabel15;
    TQRLabel *QRLabel16;
    TQRLabel *QRLabel17;
    TQRLabel *QRLabel18;
    TQRLabel *QRLabel19;
    TQRLabel *QRLabel20;
    TQRShape *QRShape5;
    TQRLabel *qrlabelDevir;
    TQRLabel *qrlabelFaturaToplami;
    TQRLabel *qrlabelIadeIcDagitimlar;
    TQRLabel *qrlabelGirisToplami;
    TQRLabel *qrlabelSayim;
    TQRLabel *qrlabelIcDagitimlar;
    TQRLabel *qrlabelTemizlikTutanagi;
    TQRLabel *qrlabelCikisToplami;
    TQRShape *QRShape6;
    TQRLabel *QRLabel21;
    TQRLabel *qrlabelFark;
    TQRLabel *qrlabelDonem;
        void __fastcall FormShow(TObject *Sender);
    void __fastcall comboDonemChange(TObject *Sender);
    void __fastcall editDevirChange(TObject *Sender);
    void __fastcall editSayimChange(TObject *Sender);
    void __fastcall DetailBand1AfterPrint(TQRCustomBand *Sender,
          bool BandPrinted);
    void __fastcall PageFooterBand1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
    void __fastcall FaturaListesi1Click(TObject *Sender);
    void __fastcall DatmListesi1Click(TObject *Sender);
    void __fastcall adeDatmListesi1Click(TObject *Sender);
    void __fastcall TemizlikTutana1Click(TObject *Sender);
    void __fastcall KapakSayfas1Click(TObject *Sender);
    void __fastcall quickrepRAPORBeforePrint(TCustomQuickRep *Sender,
          bool &PrintReport);
    void __fastcall quickrepRAPORAfterPrint(TObject *Sender);
    void __fastcall queryFATURAALIS_TOPLAMIGetText(TField *Sender,
          AnsiString &Text, bool DisplayText);
    void __fastcall queryICDAGITIMALIS_TOPLAMIGetText(TField *Sender,
          AnsiString &Text, bool DisplayText);
    void __fastcall queryIADE_ICDAGITIMALIS_TOPLAMIGetText(TField *Sender,
          AnsiString &Text, bool DisplayText);
    void __fastcall queryTEMIZLIKALIS_TOPLAMIGetText(TField *Sender,
          AnsiString &Text, bool DisplayText);
private:	// User declarations
public:		// User declarations
    double nAlisFiyati, nSatisFiyati;
    __fastcall TfrmSayimKontrol(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSayimKontrol *frmSayimKontrol;
//---------------------------------------------------------------------------
#endif
