//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "sezon.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmSezonSecimi *frmSezonSecimi;
//---------------------------------------------------------------------------
__fastcall TfrmSezonSecimi::TfrmSezonSecimi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmSezonSecimi::BitBtn2Click(TObject *Sender)
{
    frmSezonSecimi->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmSezonSecimi::BitBtn1Click(TObject *Sender)
{
    frmSezonSecimi->Close();    
}
//---------------------------------------------------------------------------
