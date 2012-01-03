//---------------------------------------------------------------------------

#ifndef detsayrapH
#define detsayrapH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TrprDetayliSayimRaporu : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *DetailBand1;
    TQRBand *PageHeaderBand1;
    TQRLabel *QRLabel1;
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label4;
    TLabel *Label5;
    TSpeedButton *SpeedButton1;
    TSpeedButton *SpeedButton2;
    TBevel *Bevel1;
    TLabel *Label3;
    TBevel *Bevel3;
    TComboBox *comboDonem;
    TDateTimePicker *DateTimePicker1;
    TStaticText *StaticText1;
    TStaticText *StaticText2;
    TEdit *editBaslangicSK;
    TEdit *editBitisSK;
    TEdit *Edit3;
    TEdit *Edit4;
    TRadioGroup *radiogrupSECIM;
    TComboBox *comboCinsi;
    TQuery *querySTOKANA;
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
    TQuery *queryALISFIYATLIST;
    TFloatField *queryALISFIYATLISTALIS_FIYATI;
    TDataSource *dsrSTOKANA;
    TQRBand *PageFooterBand1;
    TGroupBox *GroupBox2;
    TComboBox *comboSayimGorevlisiAdi;
    TEdit *editSayimGorevlisiRutbesi;
    TEdit *editSayimGorevlisiGorevi;
    TLabel *Label7;
    TComboBox *comboAnakilerKsAAdi;
    TEdit *editAnakilerKsARutbesi;
    TEdit *editAnakilerKsAGorevi;
    TLabel *Label8;
    TComboBox *comboDepocuAdi;
    TEdit *editDepocuRutbesi;
    TEdit *editDepocuGorevi;
    TQRBand *SummaryBand1;
    TQRLabel *qrlabelAlisToplami;
    TQRLabel *qrlabelSatisToplami;
    TQRLabel *qrlabelKarToplami;
    TQRShape *QRShape1;
    TQRLabel *QRLabel10;
    TQRLabel *qrlabelSayimGorevlisiAdi;
    TQRLabel *qrlabelSayimGorevlisiRutbesi;
    TQRLabel *qrlabelSayimGorevlisiGorevi;
    TQRLabel *qrlabelAnakilerKsAAdi;
    TQRLabel *qrlabelAnakilerKsARutbesi;
    TQRLabel *qrlabelAnakilerKsAGorevi;
    TQRLabel *qrlabelDepocuAdi;
    TQRLabel *qrlabelDepocuRutbesi;
    TQRLabel *qrlabelDepocuGorevi;
    TQRShape *QRShape2;
    TQRShape *QRShape13;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel6;
    TQRShape *QRShape6;
    TQRLabel *QRLabel13;
    TQRLabel *QRLabel14;
    TQRLabel *QRLabel15;
    TQRLabel *QRLabel16;
    TQRShape *QRShape3;
    TQRShape *QRShape4;
    TQRShape *QRShape5;
    TQRShape *QRShape16;
    TQRShape *QRShape17;
    TQRShape *QRShape7;
    TQRLabel *QRLabel9;
    TQRLabel *QRLabel11;
    TQRLabel *QRLabel12;
    TQRShape *QRShape25;
    TQRShape *QRShape26;
    TQRShape *QRShape29;
    TQRShape *QRShape30;
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
    TGroupBox *GroupBox3;
    TBitBtn *BitBtn2;
    TBitBtn *BitBtn1;
    TProgressBar *ProgressBar1;
    TLabel *labelYUZDE;
    TLabel *Label6;
    TQuery *querySAYIMDETAYI;
    TQRShape *QRShape8;
    TQRShape *QRShape9;
    TQRShape *QRShape11;
    TQRShape *QRShape12;
    TQRShape *QRShape18;
    TQRShape *QRShape20;
    TQRShape *QRShape27;
    TQRShape *QRShape28;
    TQRDBText *qrdbtextStokKodu;
    TQRDBText *qrdbtextStokAdi;
    TQRDBText *QRDBText7;
    TQRDBText *QRDBText8;
    TQRDBText *QRDBText9;
    TQRDBText *QRDBText10;
    TQRDBText *QRDBText11;
    TFloatField *querySAYIMDETAYIKOD;
    TStringField *querySAYIMDETAYIAD;
    TStringField *querySAYIMDETAYICINSI;
    TFloatField *querySAYIMDETAYIMIKTAR;
    TStringField *querySAYIMDETAYIBIRIM;
    TFloatField *querySAYIMDETAYIMIKTAR2;
    TStringField *querySAYIMDETAYIBIRIM2;
    TFloatField *querySAYIMDETAYIALIS_FIYATI;
    TFloatField *querySAYIMDETAYIALIS_TUTARI;
    TFloatField *querySAYIMDETAYISATIS_FIYATI;
    TFloatField *querySAYIMDETAYISATIS_TUTARI;
    TFloatField *querySAYIMDETAYIKAR;
    TQRShape *QRShape31;
    TQRShape *QRShape32;
    TQRLabel *QRLabel2;
    TQRSysData *QRSysData1;
    TQRMemo *QRMemo1;
    TDateTimePicker *DateTimePicker2;
    TLabel *Label9;
    TBevel *Bevel2;
    TQRLabel *QRLabel3;
    TQRSysData *QRSysData2;
    TQRShape *QRShape21;
    TQRLabel *qrlabelAlisToplami2;
    TQRLabel *qrlabelSatisToplami2;
    TQRLabel *qrlabelKarToplami2;
    TQRLabel *QRLabel17;
    TQRLabel *qrlabelMIKTAR;
    TQRDBText *QRDBText1;
    TQRLabel *qrlabelDONEM;
    TLabel *Label10;
    TMaskEdit *MaskEdit1;
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall comboDonemChange(TObject *Sender);
    void __fastcall radiogrupSECIMClick(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall SummaryBand1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
    void __fastcall comboSayimGorevlisiAdiChange(TObject *Sender);
    void __fastcall comboAnakilerKsAAdiChange(TObject *Sender);
    void __fastcall comboDepocuAdiChange(TObject *Sender);
    void __fastcall QuickRep1BeforePrint(TCustomQuickRep *Sender,
          bool &PrintReport);
    void __fastcall PageFooterBand1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
    void __fastcall DetailBand1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall SpeedButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TrprDetayliSayimRaporu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TrprDetayliSayimRaporu *rprDetayliSayimRaporu;
extern double nAlisToplami, nSatisToplami, nKarToplami;
//---------------------------------------------------------------------------
#endif
