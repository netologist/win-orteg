//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "firmakarti.h"
#include "firmalist.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmFirma *frmFirma;
bool bFirmaYeniKayit;
//---------------------------------------------------------------------------
__fastcall TfrmFirma::TfrmFirma(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::PageControl1Change(TObject *Sender)
{
    if (PageControl1->ActivePageIndex == 1 && datamoduleORTEG->tblFIRMA->Active == true) {
        tblYETKILI->Close();
        tblYETKILI->Filter = "[FIRMA_KODU]="+FloatToStr(datamoduleORTEG->tblFIRMAFIRMA_KODU->Value);
        tblYETKILI->Filtered = true;
        tblYETKILI->Open();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::dbeditFirmaKoduKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::Yeni1Click(TObject *Sender)
{
    datamoduleORTEG->tblFIRMA->Open();
    datamoduleORTEG->tblFIRMA->Filtered = false;
    datamoduleORTEG->tblFIRMA->Insert();
    bFirmaYeniKayit = true;

    queryFIRMAKODU->Open();
    datamoduleORTEG->tblFIRMA->Edit();
    datamoduleORTEG->tblFIRMAFIRMA_KODU->Value = queryFIRMAKODUFIRMA_KODU->Value + 1;
    queryFIRMAKODU->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::dbeditFirmaAdiKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::dbeditAdres1KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::dbeditAdres2KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::dbeditTelefonKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::dbeditFaksKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::Kaydet1Click(TObject *Sender)
{
    bFirmaYeniKayit = false;
    datamoduleORTEG->tblFIRMA->Edit();
    datamoduleORTEG->tblFIRMA->Post();

    datamoduleORTEG->tblFIRMA->Filter = "[FIRMA_KODU]="+FloatToStr(datamoduleORTEG->tblFIRMAFIRMA_KODU->Value);
    datamoduleORTEG->tblFIRMA->Filtered = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::Timer1Timer(TObject *Sender)
{
    tblYETKILI->Active = datamoduleORTEG->tblFIRMA->Active;
    queryIADELERI->Active = datamoduleORTEG->tblFIRMA->Active;
    queryGIRISLERI->Active = datamoduleORTEG->tblFIRMA->Active;

    if (datamoduleORTEG->tblFIRMA->Active == true) {
        frmFirma->Caption = "Firma Kartý - [ "+datamoduleORTEG->tblFIRMAFIRMA_ADI->Value+" ]";
        if (bFirmaYeniKayit == true) {
            dbeditFirmaKodu->Color = (TColor) 0x00E7E0D3;
            dbeditFirmaAdi->Color = (TColor) 0x00E7E0D3;
            dbeditAdres1->Color = (TColor) 0x00E7E0D3;
            dbeditAdres2->Color = (TColor) 0x00E7E0D3;
            dbeditTelefon->Color = (TColor) 0x00E7E0D3;
            dbeditVD->Color = (TColor) 0x00E7E0D3;
            dbeditVN->Color = (TColor) 0x00E7E0D3;
            dbeditFaks->Color = (TColor) 0x00E7E0D3;
            DBGrid1->Color = (TColor) 0x00E7E0D3;
            DBGrid2->Color = (TColor) 0x00E7E0D3;
            DBGrid3->Color = (TColor) 0x00E7E0D3;
            dbeditFirmaKodu->Enabled = true;
        }
        else {
            dbeditFirmaKodu->Color = (TColor) 0x00B2D0CF;
            dbeditFirmaAdi->Color = (TColor) 0x00CEEBEC;
            dbeditAdres1->Color = (TColor) 0x00CEEBEC;
            dbeditAdres2->Color = (TColor) 0x00CEEBEC;
            dbeditTelefon->Color = (TColor) 0x00CEEBEC;
            dbeditFaks->Color = (TColor) 0x00CEEBEC;
            dbeditVD->Color = (TColor) 0x00CEEBEC;
            dbeditVN->Color = (TColor) 0x00CEEBEC;
            DBGrid1->Color = (TColor) 0x00CEEBEC;
            DBGrid2->Color = (TColor) 0x00CEEBEC;
            DBGrid3->Color = (TColor) 0x00CEEBEC;
            dbeditFirmaKodu->Enabled = false;
        }

        dbeditFirmaAdi->Enabled = true;
        DBGrid1->Enabled = true;
        dbeditAdres1->Enabled = true;
        dbeditAdres2->Enabled = true;
        dbeditTelefon->Enabled = true;
        dbeditFaks->Enabled = true;
        dbeditVD->Enabled = true;
        dbeditVN->Enabled = true;

        if (datamoduleORTEG->tblFIRMA->RecordCount > 0 || bFirmaYeniKayit == true) {
            tbtnSIL->Enabled = true;
            tbtnKAYDET->Enabled = true;
            Kaydet1->Enabled = true;
            Sil1->Enabled = true;
        }
        else
            goto IPTAL;
    }
    else {
IPTAL:
        frmFirma->Caption = "Firma Kartý";
        dbeditFirmaKodu->Color = clWindow;
        dbeditFirmaAdi->Color = clWindow;
        dbeditAdres1->Color = clWindow;
        dbeditVD->Color = clWindow;
        dbeditVN->Color = clWindow;
        dbeditAdres2->Color = clWindow;
        dbeditTelefon->Color = clWindow;
        dbeditFaks->Color = clWindow;
        DBGrid1->Color = clWindow;
        DBGrid2->Color = clWindow;
        DBGrid3->Color = clWindow;

        DBGrid1->Enabled = false;
        dbeditFirmaKodu->Enabled = false;
        dbeditFirmaAdi->Enabled = false;
        dbeditAdres1->Enabled = false;
        dbeditVD->Enabled = false;
        dbeditVN->Enabled = false;
        dbeditAdres2->Enabled = false;
        dbeditTelefon->Enabled = false;
        dbeditFaks->Enabled = false;
        tbtnSIL->Enabled = false;
        tbtnKAYDET->Enabled = false;
        Kaydet1->Enabled = false;
        Sil1->Enabled = false;
        tblYETKILI->Active = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::DBGrid1KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;

        if (DBGrid1->SelectedIndex < DBGrid1->FieldCount-1)
            ++DBGrid1->SelectedIndex;
        else {
            DBGrid1->SelectedIndex = 0;
            // Kayýt ediliyor....
            tblYETKILI->Edit();
            tblYETKILI->Post();
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::tblYETKILIBeforePost(TDataSet *DataSet)
{
    tblYETKILI->Edit();
    tblYETKILIFIRMA_KODU->Value = datamoduleORTEG->tblFIRMAFIRMA_KODU->Value;
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::FormShow(TObject *Sender)
{
    bFirmaYeniKayit = false;
    datamoduleORTEG->tblFIRMA->Close();

    Timer1->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::Sil1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        tblYETKILI->Close();
        queryYETKILISIL->Close();
        queryYETKILISIL->SQL->Clear();
        queryYETKILISIL->SQL->Add("DELETE FROM YETKILI");
        queryYETKILISIL->SQL->Add("WHERE FIRMA_KODU="+FloatToStr(datamoduleORTEG->tblFIRMAFIRMA_KODU->Value));
        queryYETKILISIL->ExecSQL();

        datamoduleORTEG->tblFIRMA->Delete();
        datamoduleORTEG->tblFIRMA->Close();
        datamoduleORTEG->tblFIRMA->Filtered = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::A1Click(TObject *Sender)
{
    frmFirmaListesi->Caption = "Firma Listesi [Firma Karti]";
    frmFirmaListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::dbeditVDKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::dbeditVNKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::FormClose(TObject *Sender, TCloseAction &Action)
{
    Timer1->Enabled = false;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::Sil2Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES)
        tblYETKILI->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::Kaydet2Click(TObject *Sender)
{
    tblYETKILI->Edit();
    tblYETKILI->Post();
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::Yeni2Click(TObject *Sender)
{
    tblYETKILI->Insert();
}
//---------------------------------------------------------------------------

void __fastcall TfrmFirma::Btnyetkililerisil1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        tblYETKILI->First();

        while (!tblYETKILI->Eof)
            tblYETKILI->Delete();
    }
}
//---------------------------------------------------------------------------


void __fastcall TfrmFirma::erik1Click(TObject *Sender)
{
    Application->HelpContext(4);    
}
//---------------------------------------------------------------------------

