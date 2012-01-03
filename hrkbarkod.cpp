//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "hrkbarkod.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmHarekettenBarkod *frmHarekettenBarkod;
//---------------------------------------------------------------------------
__fastcall TfrmHarekettenBarkod::TfrmHarekettenBarkod(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmHarekettenBarkod::FormShow(TObject *Sender)
{
    if (datamoduleORTEG->tblSTOKHAR->Active == true && datamoduleORTEG->tblSTOKHARSTOK_KODU->Value > 0)
    {
        datamoduleORTEG->tblBARKOD->Open();
        datamoduleORTEG->tblBARKOD->Filter = "[STOK_KODU]="+FloatToStr(datamoduleORTEG->tblSTOKHARSTOK_KODU->Value);
        datamoduleORTEG->tblBARKOD->Filtered = true;
    }
}
//---------------------------------------------------------------------------
