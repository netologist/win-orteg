//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "hazirlanmayan.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmHazirlanmayanlar *frmHazirlanmayanlar;
//---------------------------------------------------------------------------
__fastcall TfrmHazirlanmayanlar::TfrmHazirlanmayanlar(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmHazirlanmayanlar::comboDONEMChange(TObject *Sender)
{
    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filter = "[DONEM_TANIMI]='"+comboDONEM->Text+"'";
    datamoduleORTEG->tblDONEM->Filtered = true;

    queryHAZIRLANMAYANLAR->Close();
    queryHAZIRLANMAYANLAR->ParamByName("baslangic_tarihi")->AsDateTime = datamoduleORTEG->tblDONEMBASLANGIC->Value;
    queryHAZIRLANMAYANLAR->ParamByName("bitis_tarihi")->AsDateTime = datamoduleORTEG->tblDONEMBITIS->Value;    
    queryHAZIRLANMAYANLAR->Open();

    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHazirlanmayanlar::FormShow(TObject *Sender)
{
    comboDONEM->Clear();

    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->First();
    while (!datamoduleORTEG->tblDONEM->Eof)
    {
        comboDONEM->Items->Add(datamoduleORTEG->tblDONEMDONEM_TANIMI->Value);
        datamoduleORTEG->tblDONEM->Next();
    }

    datamoduleORTEG->tblDONEM->Close();
    comboDONEM->ItemIndex = 0;

    comboDONEMChange(Sender);
}
//---------------------------------------------------------------------------

