//---------------------------------------------------------------------------

#ifndef icdagitimrapH
#define icdagitimrapH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TrprIcDagitimRaporu : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *PageHeaderBand1;
    TQRLabel *QRLabel1;
    TQRLabel *qrlabelFIRMA_ADI;
    TQRLabel *QRLabel3;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRSysData *QRSysData1;
    TQRLabel *qrlabelBELGENO;
    TQRLabel *qrlabelBELGETARIHI;
    TQRBand *DetailBand1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText4;
    TQRDBText *QRDBText5;
    TQRDBText *QRDBText6;
    TQRDBText *QRDBText7;
    TQRDBText *QRDBText8;
    TQRDBText *QRDBText9;
    TQRSysData *QRSysData2;
    TQRBand *PageFooterBand1;
    TQRLabel *qrlabelANAKILERADI;
    TQRLabel *qrlabelANAKILERRUTBESI;
    TQRLabel *qrlabelANAKILERGOREVI;
    TQRLabel *qrlabelUNITEGOREVI;
    TQRLabel *qrlabelUNITERUTBESI;
    TQRLabel *qrlabelUNITEADI;
    TQRLabel *qrlabelISLETMEGOREVI;
    TQRLabel *qrlabelISLETMERUTBESI;
    TQRLabel *qrlabelISLETMEADI;
    TQRLabel *qrlabelMUHASEBEGOREVI;
    TQRLabel *qrlabelMUHASEBERUTBESI;
    TQRLabel *qrlabelMUHASEBEADI;
    TQRLabel *QRLabel2;
    TQRLabel *qrlalbelNOT;
    TQRLabel *qrlabelMIKTAR;
    TQRLabel *qrlabelALIS_TOPLAMI;
    TQRLabel *qrlabelSATIS_TOPLAMI;
    void __fastcall DetailBand1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
    void __fastcall QuickRep1BeforePrint(TCustomQuickRep *Sender,
          bool &PrintReport);
    void __fastcall PageFooterBand1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
private:	// User declarations
public:		// User declarations
    __fastcall TrprIcDagitimRaporu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TrprIcDagitimRaporu *rprIcDagitimRaporu;
//---------------------------------------------------------------------------
#endif
