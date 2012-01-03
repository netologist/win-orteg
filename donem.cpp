//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "donem.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmDonem *frmDonem;
//---------------------------------------------------------------------------
__fastcall TfrmDonem::TfrmDonem(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmDonem::FormShow(TObject *Sender)
{
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->Open();
}
//---------------------------------------------------------------------------
void __fastcall TfrmDonem::FormClose(TObject *Sender, TCloseAction &Action)
{
    datamoduleORTEG->tblDONEM->Close();    
}
//---------------------------------------------------------------------------
