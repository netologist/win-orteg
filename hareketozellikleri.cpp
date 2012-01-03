//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "hareketozellikleri.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmHareketOzellikleri *frmHareketOzellikleri;
//---------------------------------------------------------------------------
__fastcall TfrmHareketOzellikleri::TfrmHareketOzellikleri(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmHareketOzellikleri::BitBtn1Click(TObject *Sender)
{
    queryICDAGITIM->Close();
    querySTOKHAR->Close();    
    frmHareketOzellikleri->Close();
}
//---------------------------------------------------------------------------

