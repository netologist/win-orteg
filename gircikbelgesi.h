//---------------------------------------------------------------------------

#ifndef gircikbelgesiH
#define gircikbelgesiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TrprHareketRaporu : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *DetailBand1;
    TQRBand *PageHeaderBand1;
    TQRLabel *QRLabel1;
    TQRShape *QRShape1;
    TQRShape *QRShape2;
    TQRShape *QRShape3;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRLabel *QRLabel2;
    TQRShape *QRShape4;
    TQRShape *QRShape5;
    TQRLabel *QRLabel3;
    TQRDBText *QRDBText5;
    TQRSysData *QRSysData1;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRSysData *QRSysData2;
    TQRLabel *QRLabel6;
    TQRDBText *QRDBText8;
    TQRShape *QRShape6;
    TQRShape *QRShape7;
    TQRShape *QRShape8;
    TQRShape *QRShape14;
    TQRShape *QRShape15;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel8;
    TQRLabel *QRLabel9;
    TQRLabel *QRLabel11;
    TQRLabel *QRLabel12;
    TQRShape *QRShape17;
    TQRShape *QRShape18;
    TQRShape *QRShape20;
    TQRShape *QRShape21;
    TQRLabel *qrlabelMIKTAR;
    TQRLabel *QRLabel15;
    TQRShape *QRShape9;
    TQRShape *QRShape10;
    void __fastcall DetailBand1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
private:	// User declarations
public:		// User declarations
    __fastcall TrprHareketRaporu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TrprHareketRaporu *rprHareketRaporu;
//---------------------------------------------------------------------------
#endif
