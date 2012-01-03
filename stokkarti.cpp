/****************************************************************************

                                Modül Hakkýnda
                               ----------------
    Ýþlevi:
    -------
        Stok kartýný bu modul alýþ fiyatlarýna göre ayrý ayrý tutar.
        Giriþleri ve Çýkýþlarýný rahatlýkla görebilirsiniz. Ve ayrý fiyatlarda
        olan hareketlerin son durum tablosu içinde mevcuttur.

                                 S    O    N

****************************************************************************/



//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "stokkarti.h"
#include "birimkarti.h"
#include "cinsi.h"
#include "stokkartirap.h"
#include "datamodule.h"
#include "hareketozellikleri.h"
#include "stoklist.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmStokKarti *frmStokKarti;
bool bStokYeniKayit;
//---------------------------------------------------------------------------
__fastcall TfrmStokKarti::TfrmStokKarti(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::A1Click(TObject *Sender)
{
    frmStokListesi->Caption = "Stok Listesi [Stok Karti]";
    frmStokListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::Yeni1Click(TObject *Sender)
{
    datamoduleORTEG->tblSTOKANA->Filtered = false;
    datamoduleORTEG->tblSTOKANA->Open();
    bStokYeniKayit = true;
    datamoduleORTEG->tblSTOKANA->Insert(); // Yeni Kayýt Giriþi

    dbcomboCinsi->ItemIndex = 0;
    datamoduleORTEG->tblSTOKANA->Edit();
    datamoduleORTEG->tblSTOKANACinsi->Value = dbcomboCinsi->Text;
    // Stok kodu en son numarayý ver.
    querySTOKKODU->Close();
    querySTOKKODU->Open();
    datamoduleORTEG->tblSTOKANA->Edit();
    datamoduleORTEG->tblSTOKANAStokKodu->Value = querySTOKKODUStokKodu->Value + 1;
    // ----------------------------------- Kod Sonu
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::FormShow(TObject *Sender)
{
    Timer1->Enabled = true;
    
    dbcomboBirimi->Clear();
    dbcomboBirim2->Clear();
    dbcomboBirimeGore->Clear();
    dbcomboCinsi->Items->Clear();

    datamoduleORTEG->tblBIRIMI->Open();
    datamoduleORTEG->tblBIRIMI->First();
    while (!datamoduleORTEG->tblBIRIMI->Eof) {
        dbcomboBirimi->Items->Add(datamoduleORTEG->tblBIRIMIBIRIMADI->Value);
        dbcomboBirim2->Items->Add(datamoduleORTEG->tblBIRIMIBIRIMADI->Value);
        dbcomboBirimeGore->Items->Add(datamoduleORTEG->tblBIRIMIBIRIMADI->Value);
        datamoduleORTEG->tblBIRIMI->Next();
    }
    datamoduleORTEG->tblBIRIMI->Close();

    // -----------------------------------------------
    datamoduleORTEG->tblCINSI->Open();
    datamoduleORTEG->tblCINSI->First();
    while (!datamoduleORTEG->tblCINSI->Eof) {
        dbcomboCinsi->Items->Add(datamoduleORTEG->tblCINSICINSI_ADI->Value);
        datamoduleORTEG->tblCINSI->Next();
    }
    datamoduleORTEG->tblCINSI->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::Kaydet1Click(TObject *Sender)
{
    bStokYeniKayit = false;
    datamoduleORTEG->tblSTOKANA->Edit();
    if (datamoduleORTEG->tblSTOKANABirim2Katsayisi->Value <= 0)
        datamoduleORTEG->tblSTOKANABirim2Katsayisi->Value = 1;

    if (datamoduleORTEG->tblBARKOD->Active == true) {
        datamoduleORTEG->tblBARKOD->Edit();
        datamoduleORTEG->tblBARKOD->Post();
    }
    
    datamoduleORTEG->tblSTOKANA->Post();
    datamoduleORTEG->tblSTOKANA->Filter = "[STOKKODU]='"+dbeditStokKodu->Text+"'";
    datamoduleORTEG->tblSTOKANA->Filtered = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::Timer1Timer(TObject *Sender)
{
    if (datamoduleORTEG->tblSTOKANA->Active == true) {
        if (bStokYeniKayit == true) {
            dbeditStokKodu->Enabled = true;
            dbeditStokKodu->Color = (TColor) 0x00E7E0D3;
            dbeditStokAdi->Color = (TColor) 0x00E7E0D3;
            dbcomboCinsi->Color = (TColor) 0x00E7E0D3;
            dbeditSonDurum->Color = (TColor) 0x00E7E0D3;
            dbcomboBirimeGore->Color = (TColor) 0x00E7E0D3;
            dbcomboBirimi->Color = (TColor) 0x00E7E0D3;
            dbcomboBirim2->Color = (TColor) 0x00E7E0D3;
            dbeditBirimKatsayisi->Color = (TColor) 0x00E7E0D3;
        }
        else {
            dbeditStokKodu->Enabled = false;
            dbeditStokKodu->Color = (TColor) 0x00B2D0CF;
            dbeditStokAdi->Color = (TColor) 0x00CEEBEC;
            dbcomboCinsi->Color = (TColor) 0x00CEEBEC;
            dbeditSonDurum->Color = (TColor) 0x00CEEBEC;
            dbcomboBirimeGore->Color = (TColor) 0x00CEEBEC;
            dbcomboBirimi->Color = (TColor) 0x00CEEBEC;
            dbcomboBirim2->Color = (TColor) 0x00CEEBEC;
            dbeditBirimKatsayisi->Color = (TColor) 0x00CEEBEC;
        }
        dbcomboCinsi->Enabled = true;
        dbeditStokAdi->Enabled = true;
//        dbcomboBirimeGore->Enabled = true; // Bu kod geçici olarak servis dýþý
        dbcomboBirimi->Enabled = true;
        dbcomboBirim2->Enabled = true;
        dbeditBirimKatsayisi->Enabled = true;

        tbtnKAYDET->Enabled = true;
        Kaydet1->Enabled = true;
        if (datamoduleORTEG->tblSTOKANA->RecordCount <= 0) {
            tbtnSIL->Enabled = false;
            Sil1->Enabled = false;
        }
        else {
            tbtnSIL->Enabled = true;
            Sil1->Enabled = true;
        }

        // Eðer barkod tanýmlamasý varsa.... popup menüyü aktif et, yada pasif et....
        if (datamoduleORTEG->tblBARKOD->Active == true) {
            BarkodSil1->Enabled =
                datamoduleORTEG->tblBARKOD->RecordCount > 0 ? true : false;
        }
    }
    else {
        dbeditStokKodu->Color = clWindow;
        dbeditStokAdi->Color = clWindow;
        dbcomboCinsi->Color = clWindow;
        dbeditSonDurum->Color = clWindow;
        dbcomboBirimeGore->Color = clWindow;
        dbcomboBirimi->Color = clWindow;
        dbcomboBirim2->Color = clWindow;
        dbeditBirimKatsayisi->Color = clWindow;

        tbtnSIL->Enabled = false;
        Sil1->Enabled = false;
        Kaydet1->Enabled = false;
        tbtnKAYDET->Enabled = false;
        dbeditStokKodu->Enabled = false;
        dbcomboCinsi->Enabled = false;
        dbeditStokAdi->Enabled = false;
        dbcomboBirimeGore->Enabled = false;
        dbcomboBirimi->Enabled = false;
        dbcomboBirim2->Enabled = false;
        dbeditBirimKatsayisi->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::Sil1Click(TObject *Sender)
{
    int nDeger;

    if (queryGIRISLER->RecordCount > 0 || queryCIKISLAR->RecordCount > 0) {
        Application->MessageBox("Bu stok kartýna ait hareketler var...", "Uyarý Kutusu",
                MB_OK + MB_ICONSTOP);
    }
    else {
        nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
            MB_YESNO + MB_ICONQUESTION);

        if (nDeger == IDYES) {
            if (datamoduleORTEG->tblBARKOD->Active == true) {
                datamoduleORTEG->tblBARKOD->First();
                while (!datamoduleORTEG->tblBARKOD->Eof)
                    datamoduleORTEG->tblBARKOD->Delete();
            }

            datamoduleORTEG->tblSTOKANA->Delete();
            datamoduleORTEG->tblSTOKANA->Close();
            datamoduleORTEG->tblSTOKANA->Filtered = false;
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::dbeditStokKoduKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::dbcomboCinsiKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::dbcomboBirimiKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::dbcomboBirim2KeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::dbeditBirimKatsayisiKeyPress(
      TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::dbeditDevirMiktariKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::dbcomboBirimeGoreKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::dbeditSonDurumKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::dbeditStokAdiKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------
                     
void __fastcall TfrmStokKarti::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    Timer1->Enabled = false;

    datamoduleORTEG->tblSTOKANA->Cancel();
    datamoduleORTEG->tblSTOKANA->Close();

    querySTOKANADETAY->Close();
    queryGIRISLER->Close();
    queryCIKISLAR->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::dbeditStokKoduChange(TObject *Sender)
{
    float nStokSonDurumMiktari = 0, nGirisler = 0, nCikislar = 0;

    querySTOKANADETAY->Close();
    datamoduleORTEG->tblSTOKANADETAY->Close();
    datamoduleORTEG->tblSTOKANADETAY->EmptyTable();
    datamoduleORTEG->tblSTOKANADETAY->Open();

    queryGIRISLER->Close();
    queryGIRISLER->Open();
    queryCIKISLAR->Close();
    queryCIKISLAR->Open();
    querySTOKHAR->Close();
    querySTOKHAR->Open();
    querySTOKHAR->First();

    while (!querySTOKHAR->Eof) {
        datamoduleORTEG->tblSTOKANADETAY->Insert();
        datamoduleORTEG->tblSTOKANADETAY->Edit();
        datamoduleORTEG->tblSTOKANADETAYSTOK_KODU->Value = querySTOKHARSTOK_KODU->Value;
        datamoduleORTEG->tblSTOKANADETAYBIRIMI->Value = querySTOKHARBIRIMI->Value;
        datamoduleORTEG->tblSTOKANADETAYALIS_FIYATI->Value = querySTOKHARALIS_FIYATI->Value;
        // eðer belge türü girdi ise pozitif, deðilse negatif miktar olarak yükler.
        if (querySTOKHARBELGE_TURU->Value == "GIRDI") {
            datamoduleORTEG->tblSTOKANADETAYMIKTAR->Value = querySTOKHARMIKTAR->Value;
            nGirisler += querySTOKHARMIKTAR->Value;
        }
        else {
            nCikislar += querySTOKHARMIKTAR->Value;
            datamoduleORTEG->tblSTOKANADETAYMIKTAR->Value = querySTOKHARMIKTAR->Value * (-1);
        }

        // Stok Son Durum Miktarý hesalplanýyor..
        nStokSonDurumMiktari += datamoduleORTEG->tblSTOKANADETAYMIKTAR->Value;
        datamoduleORTEG->tblSTOKANADETAY->Post();
        querySTOKHAR->Next();
    }
    querySTOKHAR->Close();
    datamoduleORTEG->tblSTOKANADETAY->Close();
    querySTOKANADETAY->Close();
    querySTOKANADETAY->Open();
    dbeditSonDurum->Text =  FormatFloat("###,###,###,###.###", nStokSonDurumMiktari);

    // Durum Çubuðu Giriþler, Çýkýþlar ve Kalan Bilgileri hesaplanýyor.
    StatusBar1->Panels->Items[1]->Text = FormatFloat("###,###,###,###.###", nGirisler);
    StatusBar1->Panels->Items[3]->Text = FormatFloat("###,###,###,###.###", nCikislar);
    StatusBar1->Panels->Items[5]->Text = FormatFloat("###,###,###,###.###", nStokSonDurumMiktari);

    // BARKOD KODU FÝLTRELENÝYOR... tblBARKOD diye bir table olmasýnýn sebebi
    // ayný stok koduna birçok barkod eklenebilmesidir...
    if (dbeditStokKodu->Text.Length() > 0) {
        datamoduleORTEG->tblBARKOD->Close();
        datamoduleORTEG->tblBARKOD->Filtered = false;
        datamoduleORTEG->tblBARKOD->Filter = "[STOK_KODU]="+dbeditStokKodu->Text;
        datamoduleORTEG->tblBARKOD->Filtered = true;
        datamoduleORTEG->tblBARKOD->Open();
    }
    // BARKOD KODU FÝLTRELENDÝ...     
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::dbeditStokAdiChange(TObject *Sender)
{
    frmStokKarti->Caption = "Stok Kartý - [ " + dbeditStokAdi->Text+" ]";
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::zellikler1Click(TObject *Sender)
{
    switch (PageControl1->ActivePageIndex) {
        case 1:
            frmHareketOzellikleri->dsrscSTOKHAR->DataSet = queryGIRISLER;
            break;
        case 2:
            frmHareketOzellikleri->dsrscSTOKHAR->DataSet = queryCIKISLAR;
            break;
    }
    frmHareketOzellikleri->queryICDAGITIM->Open();
    frmHareketOzellikleri->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::KartDkm1Click(TObject *Sender)
{
    rprStokKarti->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::SpeedButton1Click(TObject *Sender)
{
    frmCinsi->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::SpeedButton2Click(TObject *Sender)
{
    frmBirimKarti->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::erik1Click(TObject *Sender)
{
    Application->HelpContext(3);    
}
//---------------------------------------------------------------------------


void __fastcall TfrmStokKarti::DBGrid4KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        datamoduleORTEG->tblBARKOD->Edit();
        datamoduleORTEG->tblBARKOD->Post();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::BarkodSil1Click(TObject *Sender)
{
    datamoduleORTEG->tblBARKOD->Delete();    
}
//---------------------------------------------------------------------------


void __fastcall TfrmStokKarti::nitelereVerilenFiyat1Click(TObject *Sender)
{
    AnsiString szAlisFiyati, szSatisFiyati;

    if (querySTOKANADETAY->Active == true)
    {
        szFirmaAdi = "TABLDOT1";

        szAlisFiyati = FormatFloat("###,###,###,###,### TL", querySTOKANADETAYalis_fiyati->Value);
        szSatisFiyati = FormatFloat("###,###,###,###,### TL", datamoduleORTEG->SatisFiyatiBul(querySTOKANADETAYalis_fiyati->Value, datamoduleORTEG->tblSTOKANAStokKodu->Value));

        Application->MessageBoxA(("ALIÞ FÝYATI  "+szAlisFiyati+"\nSATIÞ FÝYATI "+szSatisFiyati).c_str(), datamoduleORTEG->tblSTOKANAStokAdi->Value.c_str(), MB_OK | MB_ICONINFORMATION);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKarti::TabldotaGreFiyat1Click(TObject *Sender)
{
    AnsiString szAlisFiyati, szSatisFiyati;

    if (querySTOKANADETAY->Active == true)
    {
        szFirmaAdi = "TABLDOT";    
        szAlisFiyati = FormatFloat("###,###,###,###,### TL", querySTOKANADETAYalis_fiyati->Value);
        szSatisFiyati = FormatFloat("###,###,###,###,### TL", datamoduleORTEG->SatisFiyatiBul(querySTOKANADETAYalis_fiyati->Value, datamoduleORTEG->tblSTOKANAStokKodu->Value));
        Application->MessageBoxA(("ALIÞ FÝYATI  "+szAlisFiyati+"\nSATIÞ FÝYATI "+szSatisFiyati).c_str(), datamoduleORTEG->tblSTOKANAStokAdi->Value.c_str(), MB_OK | MB_ICONINFORMATION);
    }
}
//---------------------------------------------------------------------------

