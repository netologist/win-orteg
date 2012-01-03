//---------------------------------------------------------------------------

#ifndef gidertutH
#define gidertutH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TrprGiderTutanagi : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *PageHeaderBand1;
    TQRBand *DetailBand1;
    TQRLabel *qrlabelUnite;
    TQRLabel *QRLabel2;
    TQRLabel *QRLabel3;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *QRDBText4;
    TQRDBText *QRDBText5;
    TQRDBText *QRDBText6;
    TQRDBText *QRDBText7;
    TQRLabel *QRLabel12;
    TQRSysData *QRSysData1;
    TQRSysData *QRSysData2;
    TQRShape *QRShape8;
    TQRShape *QRShape9;
    TQRShape *QRShape10;
    TQRShape *QRShape11;
    TQRShape *QRShape12;
    TQRShape *QRShape13;
    TQRShape *QRShape14;
    TQRLabel *qrlabelTarih;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel8;
    TQRLabel *QRLabel9;
    TQRLabel *QRLabel10;
    TQRLabel *QRLabel11;
    TQRShape *QRShape1;
    TQRShape *QRShape2;
    TQRShape *QRShape3;
    TQRShape *QRShape4;
    TQRShape *QRShape5;
    TQRShape *QRShape6;
    TQRShape *QRShape7;
    TQRShape *QRShape16;
    TQRShape *QRShape18;
    TQRShape *QRShape19;
    TQRBand *SummaryBand1;
    TQRLabel *QRLabel15;
    TQRLabel *QRLabel16;
    TQRLabel *QRLabel17;
    TQRLabel *qrlabelAnakilerKsAAdi;
    TQRLabel *qrlabelAnakilerKsARutbesi;
    TQRLabel *qrlabelAnakilerKsAGorevi;
    TQRLabel *qrlabelUniteKsAAdi;
    TQRLabel *qrlabelUniteKsARutbesi;
    TQRLabel *qrlabelUniteKsAGorevi;
    TQRLabel *qrIsletmelerAAdi;
    TQRLabel *qrIsletmelerARutbesi;
    TQRLabel *qrIsletmelerAGorevi;
    TQRLabel *QRLabel14;
    TQRExpr *QRExpr1;
    TQRExpr *QRExpr2;
    TQRShape *QRShape17;
    TQRShape *QRShape20;
    TQRShape *QRShape21;
    TQRShape *QRShape22;
    TQRShape *QRShape15;
    TQRShape *QRShape23;
    void __fastcall DetailBand1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
private:	// User declarations
public:		// User declarations
    __fastcall TrprGiderTutanagi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TrprGiderTutanagi *rprGiderTutanagi;
//---------------------------------------------------------------------------
#endif
