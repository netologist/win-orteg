//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "icdagitimrap.h"
#include "datamodule.h"
#include "detsayrap.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TrprIcDagitimRaporu *rprIcDagitimRaporu;
//---------------------------------------------------------------------------
__fastcall TrprIcDagitimRaporu::TrprIcDagitimRaporu(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TrprIcDagitimRaporu::DetailBand1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    if (datamoduleORTEG->queryIC_DAGITIMMIKTAR->Value < 1)
        qrlabelMIKTAR->Caption = "0" + FormatFloat("###,###,###,###.###", datamoduleORTEG->queryIC_DAGITIMMIKTAR->Value);
    else
        qrlabelMIKTAR->Caption = FormatFloat("###,###,###,###.###", datamoduleORTEG->queryIC_DAGITIMMIKTAR->Value);

    nAlisToplami += datamoduleORTEG->queryIC_DAGITIMALIS_TUTARI->Value;
    nSatisToplami += datamoduleORTEG->queryIC_DAGITIMSATIS_TUTARI->Value;

}
//---------------------------------------------------------------------------

void __fastcall TrprIcDagitimRaporu::QuickRep1BeforePrint(
      TCustomQuickRep *Sender, bool &PrintReport)
{
    nAlisToplami = 0;
    nSatisToplami = 0;
}
//---------------------------------------------------------------------------

void __fastcall TrprIcDagitimRaporu::PageFooterBand1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    qrlabelALIS_TOPLAMI->Caption = FormatFloat("###,###,###,###", (ceil(nAlisToplami/1000)*1000));
    qrlabelSATIS_TOPLAMI->Caption = FormatFloat("###,###,###,###", (ceil(nSatisToplami/1000)*1000));
}
//---------------------------------------------------------------------------

