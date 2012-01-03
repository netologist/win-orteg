//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "hakkinda.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmHakkinda *frmHakkinda;
//---------------------------------------------------------------------------
__fastcall TfrmHakkinda::TfrmHakkinda(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmHakkinda::BitBtn1Click(TObject *Sender)
{
    frmHakkinda->Close();    
}
//---------------------------------------------------------------------------


