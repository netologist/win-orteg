//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "gidertut.h"
#include "datamodule.h"
#include "icdagitim.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TrprGiderTutanagi *rprGiderTutanagi;
//---------------------------------------------------------------------------
__fastcall TrprGiderTutanagi::TrprGiderTutanagi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TrprGiderTutanagi::DetailBand1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    if ((QuickRep1->Page->Length - QuickRep1->CurrentY) <= (SummaryBand1->Height + QuickRep1->Page->BottomMargin+100)) {
        QuickRep1->EndPage();
        QuickRep1->NewPage();
    }
}
//---------------------------------------------------------------------------



