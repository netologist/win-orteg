//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fatura.h"
#include "icdagitim.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TrprFatura *rprFatura;
//---------------------------------------------------------------------------
__fastcall TrprFatura::TrprFatura(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TrprFatura::QuickRep1BeforePrint(TCustomQuickRep *Sender,
      bool &PrintReport)
{
    nFaturaToplami = 0;    
}
//---------------------------------------------------------------------------

void __fastcall TrprFatura::DetailBand1AfterPrint(TQRCustomBand *Sender,
      bool BandPrinted)
{
    nFaturaToplami += datamoduleORTEG->tblIC_DAGITIMALIS_TUTARI->Value;
}
//---------------------------------------------------------------------------

void __fastcall TrprFatura::PageFooterBand1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    QRLabel2->Caption = FormatFloat("###,###,###,###", nFaturaToplami);
    QRLabel3->Caption = FormatFloat("###,###,###,###", nFaturaToplami);

    qrdbtextYaziyla->Caption = "YALNIZ-"+datamoduleORTEG->Yaziyla(nFaturaToplami)+"-TL";
}
//---------------------------------------------------------------------------


