//---------------------------------------------------------------------------

#ifndef rprgunlukharH
#define rprgunlukharH
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
class TrprGunlukHareket : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *PageHeaderBand1;
    TQRBand *PageFooterBand1;
    TQRBand *SummaryBand1;
    TQRLabel *QRLabel1;
    TQRLabel *QRLabel2;
    TQuery *querySTOKHAR;
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
    TQRShape *QRShape1;
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
    TQRShape *QRShape2;
    TQRShape *QRShape13;
    TQRShape *QRShape14;
    TQRShape *QRShape15;
    TQRLabel *QRLabel15;
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
    TQRLabel *QRLabel16;
    TQRSysData *QRSysData2;
    TQRShape *QRShape17;
    TQRBand *QRBand2;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *QRDBText5;
    TQRDBText *QRDBText6;
    TQRDBText *QRDBText7;
    TQRDBText *QRDBText8;
    TQRDBText *QRDBText9;
    TQRDBText *QRDBText10;
    TQRDBText *QRDBText11;
    TQRDBText *QRDBText12;
    TQRSysData *QRSysData1;
    TQRShape *QRShape18;
    TQRShape *QRShape19;
    TQRShape *QRShape20;
    TQRShape *QRShape21;
    TQRShape *QRShape22;
    TQRShape *QRShape23;
    TQRShape *QRShape24;
    TQRShape *QRShape25;
    TQRShape *QRShape26;
    TQRShape *QRShape27;
    TQRShape *QRShape28;
    TQRShape *QRShape30;
    TQRShape *QRShape47;
    TQRShape *QRShape33;
    TQRShape *QRShape36;
    TQRLabel *QRLabel17;
    TQRShape *QRShape31;
    TQRShape *QRShape32;
    TPanel *Panel1;
    TDateTimePicker *DateTimePicker1;
    TLabel *Label1;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel18;
    TQRLabel *QRLabel19;
    TQRLabel *QRLabel20;
    TQRLabel *QRLabel21;
    TQRLabel *QRLabel22;
    TQRLabel *QRLabel23;
    TQRShape *QRShape16;
    TQRLabel *QRLabel24;
    TQRShape *QRShape29;
    TQRShape *QRShape34;
    TQRLabel *QRLabel25;
    TQRLabel *QRLabel26;
    TQRLabel *QRLabel27;
    TQRLabel *QRLabel28;
    TQRLabel *QRLabel29;
    TQRLabel *QRLabel30;
    TQRLabel *QRLabel31;
    TQRShape *QRShape35;
    TQRLabel *QRLabel32;
    TQRLabel *QRLabel33;
    TQRLabel *QRLabel34;
    TQRLabel *QRLabel35;
    TQuery *queryCIKTITOPLAMI;
    TQuery *queryGIRDITOPLAMI;
    TFloatField *queryCIKTITOPLAMICIKTI_ALIS_TOPLAMI;
    TFloatField *queryCIKTITOPLAMICIKTI_SATIS_TOPLAMI;
    TFloatField *queryCIKTITOPLAMICIKTI_KAR_TOPLAMI;
    TFloatField *queryGIRDITOPLAMIGIRDI_ALIS_TOPLAMI;
    TFloatField *queryGIRDITOPLAMIGIRDI_SATIS_TOPLAMI;
    TFloatField *queryGIRDITOPLAMIGIRDI_KAR_TOPLAMI;
    TQRShape *QRShape37;
    void __fastcall QuickRep1BeforePrint(TCustomQuickRep *Sender,
          bool &PrintReport);
    void __fastcall SummaryBand1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall QRBand2AfterPrint(TQRCustomBand *Sender,
          bool BandPrinted);
    void __fastcall PageFooterBand1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
private:	// User declarations
public:		// User declarations
    __fastcall TrprGunlukHareket(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TrprGunlukHareket *rprGunlukHareket;
extern double nGirislerAlisToplami, nCikislarAlisToplami,
              nGirislerSatisToplami, nCikislarSatisToplami,
              nGirislerKarToplami, nCikislarKarToplami;

//---------------------------------------------------------------------------
#endif
