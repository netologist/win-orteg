//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "unitekarti.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmUnite *frmUnite;
bool bUniteYeniKayit;
//---------------------------------------------------------------------------
__fastcall TfrmUnite::TfrmUnite(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmUnite::FormShow(TObject *Sender)
{
    Timer1->Enabled = true;

    bUniteYeniKayit = false;
    datamoduleORTEG->tblUNITE->Filtered = false;
    datamoduleORTEG->tblUNITE->Active = true;

    comboUniteAdi->Items->Clear();
    datamoduleORTEG->tblUNITE->First();
    while (!datamoduleORTEG->tblUNITE->Eof) {
        comboUniteAdi->Items->Add(datamoduleORTEG->tblUNITEUNITE_ADI->Value);
        datamoduleORTEG->tblUNITE->Next();
    }
    comboUniteAdi->ItemIndex = 0;
    datamoduleORTEG->tblUNITE->Filtered = true;
    datamoduleORTEG->tblUNITE->Filter = "[UNITE_ADI]='"+comboUniteAdi->Text+"'";


    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->First();
    dbcomboKisimAmiri->Items->Clear();
    while (!datamoduleORTEG->tblPERSONEL->Eof) {
        dbcomboKisimAmiri->Items->Add(datamoduleORTEG->tblPERSONELADI_SOYADI->Value);
        datamoduleORTEG->tblPERSONEL->Next();
    }
    datamoduleORTEG->tblPERSONEL->Close();
}
//---------------------------------------------------------------------------


void __fastcall TfrmUnite::Kaydet1Click(TObject *Sender)
{
    bUniteYeniKayit = false;
    datamoduleORTEG->tblUNITE->Edit();
    datamoduleORTEG->tblUNITE->Post();

    datamoduleORTEG->tblUNITE->Filter = "[UNITE_ADI]='"+datamoduleORTEG->tblUNITEUNITE_ADI->Value+"'";
    datamoduleORTEG->tblUNITE->Filtered = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmUnite::Sil1Click(TObject *Sender)
{
    int nDeger, ComboIndexNo;

    nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        if (bUniteYeniKayit == true) {
            datamoduleORTEG->tblUNITE->Delete();
            datamoduleORTEG->tblUNITE->Close();
            datamoduleORTEG->tblUNITE->Filtered = false;
            datamoduleORTEG->tblUNITE->Open();
            bUniteYeniKayit = false;
        }
        else {
            ComboIndexNo = comboUniteAdi->Items->IndexOf(datamoduleORTEG->tblUNITEUNITE_ADI->Value);
            comboUniteAdi->Items->Delete(ComboIndexNo);
            datamoduleORTEG->tblUNITE->Delete();
            datamoduleORTEG->tblUNITE->Close();
            datamoduleORTEG->tblUNITE->Filtered = false;
            datamoduleORTEG->tblUNITE->Open();
            comboUniteAdi->Text = datamoduleORTEG->tblUNITEUNITE_ADI->Value;
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmUnite::dbcomboKisimAmiriClick(TObject *Sender)
{
    datamoduleORTEG->tblPERSONEL->Close();
    datamoduleORTEG->tblPERSONEL->Filter = "[ADI_SOYADI]='"+dbcomboKisimAmiri->Text+"'";
    datamoduleORTEG->tblPERSONEL->Filtered = true;
    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblUNITE->Edit();
    datamoduleORTEG->tblUNITEKISIM_AMIRI_RUTBESI->Value = datamoduleORTEG->tblPERSONELRUTBESI->Value;
    datamoduleORTEG->tblUNITE->Edit();
    datamoduleORTEG->tblUNITEKISIM_AMIRI_GOREVI->Value = datamoduleORTEG->tblPERSONELGOREVI->Value;
    datamoduleORTEG->tblPERSONEL->Filtered = false;
    datamoduleORTEG->tblPERSONEL->Close();
}
//---------------------------------------------------------------------------


void __fastcall TfrmUnite::comboUniteAdiClick(TObject *Sender)
{
/*    AnsiString UniteAdi;

    UniteAdi = comboUniteAdi->Text; */
    datamoduleORTEG->tblUNITE->Close();
    datamoduleORTEG->tblUNITE->Filter = "[UNITE_ADI]='"+comboUniteAdi->Text+"'";
    datamoduleORTEG->tblUNITE->Filtered = true;
    datamoduleORTEG->tblUNITE->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmUnite::dbeditKsAGoreviKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmUnite::comboUniteAdiKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN) || Key == Char(VK_TAB)) {
        Key = 0;

        if (bUniteYeniKayit == true) {
            datamoduleORTEG->tblUNITE->Edit();
            datamoduleORTEG->tblUNITEUNITE_ADI->Value = comboUniteAdi->Text;
            comboUniteAdi->Items->Add(comboUniteAdi->Text);
            datamoduleORTEG->tblUNITE->Filter = "[UNITE_ADI]='"+comboUniteAdi->Text+"'";
            datamoduleORTEG->tblUNITE->Filtered = true;
        }
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmUnite::Yeni1Click(TObject *Sender)
{
    bUniteYeniKayit = true;
    datamoduleORTEG->tblUNITE->Filtered = false;
    datamoduleORTEG->tblUNITE->Insert();
    comboUniteAdi->Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TfrmUnite::Timer1Timer(TObject *Sender)
{
    queryGIRISLER->Active = datamoduleORTEG->tblUNITE->Active;
    queryCIKISLAR->Active = datamoduleORTEG->tblUNITE->Active;

    if (datamoduleORTEG->tblUNITE->Active == true) {
        frmUnite->Caption = "Ünite Kartý - [ "+datamoduleORTEG->tblUNITEUNITE_ADI->Value+" ]";
        if (bUniteYeniKayit == true) {
            comboUniteAdi->Color = (TColor) 0x00E7E0D3;
            dbcomboKisimAmiri->Color = (TColor) 0x00E7E0D3;
            dbeditKsARutbesi->Color = (TColor) 0x00E7E0D3;
            dbeditKsAGorevi->Color = (TColor) 0x00E7E0D3;
            DBGrid2->Color = (TColor) 0x00E7E0D3;
            DBGrid3->Color = (TColor) 0x00E7E0D3;
        }
        else {
            comboUniteAdi->Color = (TColor) 0x00CEEBEC;
            dbcomboKisimAmiri->Color = (TColor) 0x00CEEBEC;
            dbeditKsARutbesi->Color = (TColor) 0x00CEEBEC;
            dbeditKsAGorevi->Color = (TColor) 0x00CEEBEC;
            DBGrid2->Color = (TColor) 0x00CEEBEC;
            DBGrid3->Color = (TColor) 0x00CEEBEC;
        }

        if (datamoduleORTEG->tblUNITE->RecordCount > 0 || bUniteYeniKayit == true) {
            Sil1->Enabled = true;
            tbtnSIL->Enabled = true;
            tbtnKAYDET->Enabled = true;
            Kaydet1->Enabled = true;
        }
        else
            goto IPTAL;

        comboUniteAdi->Enabled = true;
        dbcomboKisimAmiri->Enabled = true;
        dbeditKsARutbesi->Enabled = true;
        dbeditKsAGorevi->Enabled = true;
    }
    else {
IPTAL:
        frmUnite->Caption = "Ünite Kartý";
        Sil1->Enabled = false;
        tbtnSIL->Enabled = false;
        tbtnKAYDET->Enabled = false;
        Kaydet1->Enabled = false;

        comboUniteAdi->Color = clWindow;
        dbcomboKisimAmiri->Color = clWindow;
        dbeditKsARutbesi->Color = clWindow;
        dbeditKsAGorevi->Color = clWindow;
        DBGrid2->Color = clWindow;
        DBGrid3->Color = clWindow;
        comboUniteAdi->Enabled = false;
        dbcomboKisimAmiri->Enabled = false;
        dbeditKsARutbesi->Enabled = false;
        dbeditKsAGorevi->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmUnite::FormClose(TObject *Sender, TCloseAction &Action)
{
    Timer1->Enabled = false;
    
    datamoduleORTEG->tblUNITE->Filtered = false;
    datamoduleORTEG->tblUNITE->Active = false;
}
//---------------------------------------------------------------------------


void __fastcall TfrmUnite::erik1Click(TObject *Sender)
{
    Application->HelpContext(5);    
}
//---------------------------------------------------------------------------

