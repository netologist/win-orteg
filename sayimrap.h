//---------------------------------------------------------------------------

#ifndef sayimrapH
#define sayimrapH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <QuickRpt.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <Qrctrls.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TrprSayimRaporu : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label4;
    TLabel *Label5;
    TSpeedButton *SpeedButton1;
    TSpeedButton *SpeedButton2;
    TStaticText *StaticText1;
    TStaticText *StaticText2;
    TEdit *editBaslangicSK;
    TEdit *editBitisSK;
    TEdit *Edit3;
    TEdit *Edit4;
    TRadioGroup *radiogrupSECIM;
    TBevel *Bevel1;
    TLabel *Label3;
    TComboBox *comboCinsi;
    TBevel *Bevel3;
    TQuickRep *QuickRep1;
    TQRBand *DetailBand1;
    TQRShape *QRShape8;
    TQRShape *QRShape9;
    TQRShape *QRShape10;
    TQRShape *QRShape27;
    TQRShape *QRShape28;
    TQRDBText *qrdbtextStokKodu;
    TQRDBText *qrdbtextStokAdi;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText4;
    TQRDBText *QRDBText5;
    TQRShape *QRShape32;
    TQRSysData *QRSysData1;
    TQRBand *PageHeaderBand1;
    TQRLabel *QRLabel1;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel8;
    TQRShape *QRShape5;
    TQRShape *QRShape14;
    TQRShape *QRShape15;
    TQRShape *QRShape16;
    TQRShape *QRShape17;
    TQRLabel *QRLabel11;
    TQRLabel *QRLabel12;
    TQRShape *QRShape25;
    TQRShape *QRShape26;
    TQRShape *QRShape29;
    TQRShape *QRShape30;
    TQRShape *QRShape31;
    TQRLabel *QRLabel2;
    TQRLabel *QRLabel3;
    TQRSysData *QRSysData2;
    TGroupBox *GroupBox3;
    TLabel *labelYUZDE;
    TLabel *Label6;
    TBevel *Bevel2;
    TBitBtn *BitBtn3;
    TProgressBar *ProgressBar1;
    TBitBtn *BitBtn1;
    TComboBox *comboDonem;
    TLabel *Label1;
    TDateTimePicker *DateTimePicker1;
    TLabel *Label2;
    TBevel *Bevel4;
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
    TQuery *querySAYIMDETAYI;
    TQRShape *QRShape1;
    TQRBand *PageFooterBand1;
    TQRBand *SummaryBand1;
    TFloatField *querySAYIMDETAYIkod;
    TStringField *querySAYIMDETAYIad;
    TStringField *querySAYIMDETAYIcinsi;
    TFloatField *querySAYIMDETAYItopmiktar;
    TStringField *querySAYIMDETAYIbirim;
    TFloatField *querySAYIMDETAYItopmiktar2;
    TStringField *querySAYIMDETAYIbirim2;
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall comboDonemChange(TObject *Sender);
    void __fastcall radiogrupSECIMClick(TObject *Sender);
    void __fastcall QuickRep1BeforePrint(TCustomQuickRep *Sender,
          bool &PrintReport);
    void __fastcall SummaryBand1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall SpeedButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TrprSayimRaporu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TrprSayimRaporu *rprSayimRaporu;
//---------------------------------------------------------------------------
#endif
