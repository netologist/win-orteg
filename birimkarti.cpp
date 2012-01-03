//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "birimkarti.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmBirimKarti *frmBirimKarti;
//---------------------------------------------------------------------------
__fastcall TfrmBirimKarti::TfrmBirimKarti(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmBirimKarti::FormShow(TObject *Sender)
{
    datamoduleORTEG->tblBIRIMI->Open();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmBirimKarti::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    datamoduleORTEG->tblBIRIMI->Close();    
}
//---------------------------------------------------------------------------

