//---------------------------------------------------------------------------

#ifndef faturaH
#define faturaH
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
//---------------------------------------------------------------------------
class TrprFatura : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *DetailBand1;
    TQRBand *PageFooterBand1;
    TQRBand *PageHeaderBand1;
    TQRDBText *qrdbtextCinsi;
    TQRDBText *qrdbtextMiktar;
    TQRDBText *qrdbtextBirimi;
    TQRDBText *qrdbtextFiyati;
    TQRDBText *qrdbtextTutari;
    TQRSysData *QRSysData1;
    TQRLabel *qrdbtextYaziyla;
    TQRLabel *QRLabel1;
    TQRDBText *qrlabelFirmaAdi;
    TQRDBText *qrlabelFirmaAdresi;
    TQRDBText *qrlabelVergiDairesi;
    TQRDBText *qrlabelVergiNumarasi;
    TQuery *queryFIRMA;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRLabel *QRLabel2;
    TQRLabel *QRLabel3;
    void __fastcall QuickRep1BeforePrint(TCustomQuickRep *Sender,
          bool &PrintReport);
    void __fastcall DetailBand1AfterPrint(TQRCustomBand *Sender,
          bool BandPrinted);
    void __fastcall PageFooterBand1BeforePrint(TQRCustomBand *Sender,
          bool &PrintBand);
private:	// User declarations
public:		// User declarations
    double nFaturaToplami;
    __fastcall TrprFatura(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TrprFatura *rprFatura;
//---------------------------------------------------------------------------
#endif
