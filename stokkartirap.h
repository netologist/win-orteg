//---------------------------------------------------------------------------

#ifndef stokkartirapH
#define stokkartirapH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TrprStokKarti : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *PageHeaderBand1;
    TQRLabel *QRLabel1;
    TQRLabel *QRLabel2;
    TQRSysData *QRSysData1;
    TQRBand *DetailBand1;
    TQuery *querySTOKHAR;
    TGroupBox *GroupBox1;
    TStaticText *StaticText1;
    TStaticText *StaticText2;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TDateTimePicker *DateTimePicker1;
    TDateTimePicker *DateTimePicker2;
    TEdit *editBaslangicSK;
    TEdit *editBitisSK;
    TEdit *Edit3;
    TEdit *Edit4;
    TSpeedButton *SpeedButton1;
    TSpeedButton *SpeedButton2;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
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
    TQRLabel *QRLabel3;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel8;
    TQRLabel *QRLabel9;
    TQRLabel *QRLabel10;
    TQRLabel *QRLabel11;
    TQRLabel *QRLabel12;
    TQRLabel *QRLabel13;
    TQRLabel *QRLabel14;
    TQuery *querySTOKANA;
    TDataSource *dsrcSTOKANA;
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
    TQRSubDetail *QRSubDetail1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *QRDBText8;
    TQRDBText *QRDBText9;
    TQRExpr *QRExpr1;
    TQRExpr *QRExpr2;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText6;
    TQRDBText *QRDBText7;
    TQRShape *QRShape2;
    TQRShape *QRShape3;
    TQRShape *QRShape4;
    TQRShape *QRShape5;
    TQRShape *QRShape6;
    TQRShape *QRShape7;
    TQRShape *QRShape8;
    TQRShape *QRShape9;
    TQRShape *QRShape10;
    TQRShape *QRShape11;
    TQRShape *QRShape12;
    TQRShape *QRShape13;
    TQRShape *QRShape14;
    TQRShape *QRShape15;
    TQRShape *QRShape16;
    TQRShape *QRShape17;
    TQRShape *QRShape18;
    TQRShape *QRShape19;
    TQRShape *QRShape20;
    TQRShape *QRShape21;
    TQRLabel *QRLabel17;
    TQRLabel *QRLabel15;
    TQRLabel *QRLabel16;
    TQRDBText *QRDBText5;
    TQRDBText *QRDBText10;
    TQRLabel *QRLabel6;
    TQRDBText *QRDBText4;
    TQRShape *QRShape1;
    TQRLabel *QRLabel18;
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DetailBand1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
    void __fastcall QRSubDetail1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall SpeedButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TrprStokKarti(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TrprStokKarti *rprStokKarti;
//---------------------------------------------------------------------------
#endif
