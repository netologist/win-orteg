//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "stoklist.h"
#include "detsayrap.h"
#include "sayimrap.h"
#include "stokkartirap.h"
#include "hareket.h"
#include "stokkarti.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmStokListesi *frmStokListesi;
bool bKontrol;
//---------------------------------------------------------------------------
__fastcall TfrmStokListesi::TfrmStokListesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmStokListesi::editSorguChange(TObject *Sender)
{
    if (RadioButton1->Checked == true && editSorgu->Text.Length() > 0) {
        querySTOKLIST->Close();
        querySTOKLIST->SQL->Clear();
        querySTOKLIST->SQL->Add("SELECT * FROM STOKANA");
        querySTOKLIST->SQL->Add("WHERE STOKKODU="+editSorgu->Text);
        if (comboCinsi->Text == "Tümü ...")
            querySTOKLIST->SQL->Add(" and CINSI LIKE '%'");
        else
            querySTOKLIST->SQL->Add(" and CINSI LIKE '%"+comboCinsi->Text+"%'");
        querySTOKLIST->Open();
    }
    else {
        querySTOKLIST->Close();
        querySTOKLIST->SQL->Clear();
        querySTOKLIST->SQL->Add("SELECT * FROM STOKANA");
        querySTOKLIST->SQL->Add("WHERE STOKADI LIKE '%"+editSorgu->Text+"%'");
        if (comboCinsi->Text == "Tümü ...")
            querySTOKLIST->SQL->Add(" and CINSI LIKE '%'");
        else
            querySTOKLIST->SQL->Add(" and CINSI LIKE '%"+comboCinsi->Text+"%'");
        querySTOKLIST->Open();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::FormShow(TObject *Sender)
{
    comboCinsi->Items->Clear();
    comboCinsi->Items->Add("Tümü ...");
    
    datamoduleORTEG->tblCINSI->Open();
    datamoduleORTEG->tblCINSI->First();
    while (!datamoduleORTEG->tblCINSI->Eof) {
        comboCinsi->Items->Add(datamoduleORTEG->tblCINSICINSI_ADI->Value);
        datamoduleORTEG->tblCINSI->Next();
    }
    datamoduleORTEG->tblCINSI->Close();

    comboCinsi->ItemIndex = 0;
    comboCinsi->Text = "Tümü ...";
    editSorguChange(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::RadioButton1Click(TObject *Sender)
{
    editSorgu->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::RadioButton2Click(TObject *Sender)
{
    editSorgu->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::DBGrid1CellClick(TColumn *Column)
{
    int nDeger;

    nDeger = Application->MessageBox("Seçtiðiniz kartý onaylýyor musunuz?", "Onay Kutusu",
            MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES)
    {
        if (frmStokListesi->Caption == "Stok Listesi [Stok Karti]" && querySTOKLISTStokKodu->Value >=0)
        {
            datamoduleORTEG->tblSTOKANA->Filtered = true;
            datamoduleORTEG->tblSTOKANA->Filter = "[STOKKODU]="+FloatToStr(querySTOKLISTStokKodu->Value);
            datamoduleORTEG->tblSTOKANA->Open();
            bStokYeniKayit = false;
            bKontrol = false;
        }
        else if (frmStokListesi->Caption == "Stok Listesi [Hareket Ekrani]" && querySTOKLISTStokKodu->Value >= 0)
        {
            bStokCagirma = false; // KODA GÖRE GÝRÝÞ...
            datamoduleORTEG->tblSTOKHAR->Edit();
            datamoduleORTEG->tblSTOKHARSTOK_KODU->Value = querySTOKLISTStokKodu->Value;
            bKontrol = false;
        }
        else if (frmStokListesi->Caption == "Stok Listesi [baþlangýç]" && querySTOKLISTStokKodu->Value >= 0)
        {
            rprStokKarti->editBaslangicSK->Text = querySTOKLISTStokKodu->Value;
            rprStokKarti->Edit3->Text = querySTOKLISTStokAdi->Value;
            rprDetayliSayimRaporu->editBaslangicSK->Text = querySTOKLISTStokKodu->Value;
            rprDetayliSayimRaporu->Edit3->Text = querySTOKLISTStokAdi->Value;
            rprSayimRaporu->editBaslangicSK->Text = querySTOKLISTStokKodu->Value;
            rprSayimRaporu->Edit3->Text = querySTOKLISTStokAdi->Value;
        }
        else if (frmStokListesi->Caption == "Stok Listesi [bitiþ]" && querySTOKLISTStokKodu->Value >= 0)
        {
            rprStokKarti->editBitisSK->Text = querySTOKLISTStokKodu->Value;
            rprStokKarti->Edit4->Text = querySTOKLISTStokAdi->Value;
            rprDetayliSayimRaporu->editBitisSK->Text = querySTOKLISTStokKodu->Value;
            rprDetayliSayimRaporu->Edit4->Text = querySTOKLISTStokAdi->Value;
            rprSayimRaporu->editBitisSK->Text = querySTOKLISTStokKodu->Value;
            rprSayimRaporu->Edit4->Text = querySTOKLISTStokAdi->Value;
        }
        frmStokListesi->Close();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    int nDeger;

    if (Key == Char(VK_RETURN)) {
        Key = 0;
        nDeger = Application->MessageBox("Seçtiðiniz kartý onaylýyor musunuz?", "Onay Kutusu",
                MB_YESNO + MB_ICONQUESTION);

        if (nDeger == IDYES)
        {
            if (frmStokListesi->Caption == "Stok Listesi [Stok Karti]" && querySTOKLISTStokAdi->Value.Length() > 0)
            {
                datamoduleORTEG->tblSTOKANA->Filtered = true;
                datamoduleORTEG->tblSTOKANA->Filter = "[STOKKODU]="+FloatToStr(querySTOKLISTStokKodu->Value);
                datamoduleORTEG->tblSTOKANA->Open();
                bStokYeniKayit = false;
                frmStokListesi->Close();
            }
            else if (frmStokListesi->Caption == "Stok Listesi [Hareket Ekrani]" && querySTOKLISTStokAdi->Value.Length() > 0)
            {
                bStokCagirma = false; // KODA GÖRE GÝRÝÞ...
                datamoduleORTEG->tblSTOKHAR->Edit();
                datamoduleORTEG->tblSTOKHARSTOK_KODU->Value = querySTOKLISTStokKodu->Value;
                bKontrol = false;
                frmStokListesi->Close();
            }
            else if (frmStokListesi->Caption == "Stok Listesi [baþlangýç]" && querySTOKLISTStokKodu->Value >= 0)
            {
                rprStokKarti->editBaslangicSK->Text = querySTOKLISTStokKodu->Value;
                rprStokKarti->Edit3->Text = querySTOKLISTStokAdi->Value;
            }
            else if (frmStokListesi->Caption == "Stok Listesi [bitiþ]" && querySTOKLISTStokKodu->Value >= 0)
            {
                rprStokKarti->editBitisSK->Text = querySTOKLISTStokKodu->Value;
                rprStokKarti->Edit4->Text = querySTOKLISTStokAdi->Value;
            }
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::comboCinsiChange(TObject *Sender)
{
    if (RadioButton1->Checked == true && editSorgu->Text.Length() > 0) {
        querySTOKLIST->Close();
        querySTOKLIST->SQL->Clear();
        querySTOKLIST->SQL->Add("SELECT * FROM STOKANA");
        querySTOKLIST->SQL->Add("WHERE STOKKODU="+editSorgu->Text);
        if (comboCinsi->Text == "Tümü ...")
            querySTOKLIST->SQL->Add(" and CINSI LIKE '%'");
        else
            querySTOKLIST->SQL->Add(" and CINSI LIKE '%"+comboCinsi->Text+"%'");
        querySTOKLIST->Open();
    }
    else {
        querySTOKLIST->Close();
        querySTOKLIST->SQL->Clear();
        querySTOKLIST->SQL->Add("SELECT * FROM STOKANA");
        querySTOKLIST->SQL->Add("WHERE STOKADI LIKE '%"+editSorgu->Text+"%'");
        if (comboCinsi->Text == "Tümü ...")
            querySTOKLIST->SQL->Add(" and CINSI LIKE '%'");
        else
            querySTOKLIST->SQL->Add(" and CINSI LIKE '%"+comboCinsi->Text+"%'");
        querySTOKLIST->Open();
    }
}
//---------------------------------------------------------------------------

