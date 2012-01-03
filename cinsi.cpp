//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "cinsi.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmCinsi *frmCinsi;
//---------------------------------------------------------------------------
__fastcall TfrmCinsi::TfrmCinsi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmCinsi::FormClose(TObject *Sender, TCloseAction &Action)
{
    datamoduleORTEG->tblCINSI->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmCinsi::FormShow(TObject *Sender)
{
    datamoduleORTEG->tblCINSI->Open();    
}
//---------------------------------------------------------------------------

