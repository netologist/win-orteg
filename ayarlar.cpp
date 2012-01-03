//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ayarlar.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAyarlar *frmAyarlar;
//---------------------------------------------------------------------------
__fastcall TfrmAyarlar::TfrmAyarlar(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmAyarlar::FormShow(TObject *Sender)
{
    // Ýmza Yetkilileri comboBox'lara dolduruluyor
    dbcomboIsletmelerAmiriAdi->Clear();
    dbcomboAnakilerKsAAdi->Clear();
    dbcomboMuhasebeKsAAdi->Clear();

    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->First();
    while (!datamoduleORTEG->tblPERSONEL->Eof) {
        dbcomboIsletmelerAmiriAdi->Items->Add(datamoduleORTEG->tblPERSONELADI_SOYADI->Value);
        dbcomboMuhasebeKsAAdi->Items->Add(datamoduleORTEG->tblPERSONELADI_SOYADI->Value);
        dbcomboAnakilerKsAAdi->Items->Add(datamoduleORTEG->tblPERSONELADI_SOYADI->Value);
        datamoduleORTEG->tblPERSONEL->Next();
    }
    datamoduleORTEG->tblPERSONEL->Close();
// Ýmza Yetkilileri comboBox'lara dolduruldu...

// Ünite isimleri dolduruluyor...
    datamoduleORTEG->tblUNITE->Filtered = false;
    datamoduleORTEG->tblUNITE->Active = true;

    dbcomboTemizlikUnitesi->Items->Clear();
    datamoduleORTEG->tblUNITE->First();
    while (!datamoduleORTEG->tblUNITE->Eof) {
        dbcomboTemizlikUnitesi->Items->Add(datamoduleORTEG->tblUNITEUNITE_ADI->Value);
        datamoduleORTEG->tblUNITE->Next();
    }
// Ünite isimleri dolduruldu....


    datamoduleORTEG->tblAYARLAR->Active = true;

    if (datamoduleORTEG->tblAYARLAR->RecordCount > 0)
        datamoduleORTEG->tblAYARLAR->Insert();
    else
        datamoduleORTEG->tblAYARLAR->Edit();

    datamoduleORTEG->tblAYARLAR->First();
    dbcomboTemizlikUnitesi->ItemIndex
        = dbcomboTemizlikUnitesi->Items->IndexOf(datamoduleORTEG->tblAYARLARTemizlikUnitesi->Value);
}
//---------------------------------------------------------------------------

void __fastcall TfrmAyarlar::BitBtn1Click(TObject *Sender)
{
    datamoduleORTEG->tblAYARLAR->Edit();
    datamoduleORTEG->tblAYARLAR->Post();
    datamoduleORTEG->tblAYARLAR->Close();
    frmAyarlar->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAyarlar::BitBtn2Click(TObject *Sender)
{
    datamoduleORTEG->tblAYARLAR->Cancel();
    datamoduleORTEG->tblAYARLAR->Close();
    frmAyarlar->Close();
}
//---------------------------------------------------------------------------



void __fastcall TfrmAyarlar::dbcomboIsletmelerAmiriAdiChange(
      TObject *Sender)
{
    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->Filtered = true;
    datamoduleORTEG->tblPERSONEL->Filter = "[ADI_SOYADI]='"+dbcomboIsletmelerAmiriAdi->Text+"'";
    datamoduleORTEG->tblPERSONEL->Edit();
    dbeditIsletmelerAmiriRutbe->Text = datamoduleORTEG->tblPERSONELRUTBESI->Value;
    datamoduleORTEG->tblPERSONEL->Edit();
    dbeditIsletmelerAmiriGorev->Text = datamoduleORTEG->tblPERSONELGOREVI->Value;
    datamoduleORTEG->tblPERSONEL->Filtered = false;
    datamoduleORTEG->tblPERSONEL->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAyarlar::dbcomboMuhasebeKsAAdiChange(TObject *Sender)
{
    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->Filtered = true;
    datamoduleORTEG->tblPERSONEL->Filter = "[ADI_SOYADI]='"+dbcomboMuhasebeKsAAdi->Text+"'";
    datamoduleORTEG->tblPERSONEL->Edit();
    dbeditMuhasebeKsARutbe->Text = datamoduleORTEG->tblPERSONELRUTBESI->Value;
    datamoduleORTEG->tblPERSONEL->Edit();
    dbeditMuhasebeKsAGorev->Text = datamoduleORTEG->tblPERSONELGOREVI->Value;
    datamoduleORTEG->tblPERSONEL->Filtered = false;
    datamoduleORTEG->tblPERSONEL->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAyarlar::dbcomboAnakilerKsAAdiChange(TObject *Sender)
{
    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->Filtered = true;
    datamoduleORTEG->tblPERSONEL->Filter = "[ADI_SOYADI]='"+dbcomboAnakilerKsAAdi->Text+"'";
    datamoduleORTEG->tblPERSONEL->Edit();
    dbeditAnakilerKsARutbe->Text = datamoduleORTEG->tblPERSONELRUTBESI->Value;
    datamoduleORTEG->tblPERSONEL->Edit();
    dbeditAnakilerKsAGorev->Text = datamoduleORTEG->tblPERSONELGOREVI->Value;
    datamoduleORTEG->tblPERSONEL->Filtered = false;
    datamoduleORTEG->tblPERSONEL->Close();
}
//---------------------------------------------------------------------------

