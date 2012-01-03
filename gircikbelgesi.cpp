//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "gircikbelgesi.h"
#include "hareket.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TrprHareketRaporu *rprHareketRaporu;
//---------------------------------------------------------------------------
__fastcall TrprHareketRaporu::TrprHareketRaporu(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TrprHareketRaporu::DetailBand1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    if (frmHareket->querySTOKHARMIKTAR->Value > 0 && frmHareket->querySTOKHARMIKTAR->Value < 1)
        qrlabelMIKTAR->Caption = frmHareket->querySTOKHARMIKTAR->Value;
    else
        qrlabelMIKTAR->Caption = FormatFloat("###,###,###,###.###", frmHareket->querySTOKHARMIKTAR->Value);
}
//---------------------------------------------------------------------------


