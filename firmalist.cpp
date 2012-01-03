//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "firmalist.h"
#include "firmakarti.h"
#include "harkopyala.h"
#include "datamodule.h"
#include "icdagitim.h"
#include "hareket.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmFirmaListesi *frmFirmaListesi;
//---------------------------------------------------------------------------
__fastcall TfrmFirmaListesi::TfrmFirmaListesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmFirmaListesi::Edit1Change(TObject *Sender)
{
    if (RadioButton1->Checked == true && Edit1->Text.Length() > 0) {
        queryFIRMALIST->Close();
        queryFIRMALIST->SQL->Clear();
        queryFIRMALIST->SQL->Add("SELECT * FROM FIRMA");
        queryFIRMALIST->SQL->Add("WHERE FIRMA_KODU="+Edit1->Text);
        queryFIRMALIST->Open();
    }
    else {
        queryFIRMALIST->Close();
        queryFIRMALIST->SQL->Clear();
        queryFIRMALIST->SQL->Add("SELECT * FROM FIRMA");
        queryFIRMALIST->SQL->Add("WHERE FIRMA_ADI LIKE '%"+Edit1->Text+"%'");
        queryFIRMALIST->Open();
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmFirmaListesi::DBGrid1CellClick(TColumn *Column)
{
    int nDeger;
    TObject *Sender;

    nDeger = Application->MessageBox("Seçtiðiniz kartý onaylýyor musunuz?", "Onay Kutusu",
            MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES)
    {
        if (frmFirmaListesi->Caption == "Firma Listesi [Firma Karti]" && queryFIRMALISTFIRMA_ADI->Value.Length() > 0)
        {
            datamoduleORTEG->tblFIRMA->Filtered = true;
            datamoduleORTEG->tblFIRMA->Filter = "[FIRMA_KODU]="+FloatToStr(queryFIRMALISTFIRMA_KODU->Value);
            datamoduleORTEG->tblFIRMA->Open();
            bFirmaYeniKayit = false;
            frmFirmaListesi->Close();
        }
        else if (frmFirmaListesi->Caption == "Firma Listesi [Hareket Ekrani]" && queryFIRMALISTFIRMA_ADI->Value.Length() > 0)
        {
            frmHareket->editFirmaKodu->Text = queryFIRMALISTFIRMA_KODU->Value;
            frmHareket->comboUniteAdi->Text = queryFIRMALISTFIRMA_ADI->Value;
            frmHareket->comboUniteAdiChange(Sender);

            frmFirmaListesi->Close();
        }
        else if (frmFirmaListesi->Caption == "Firma Listesi [Ýç Daðýtým Hazýrlama]" && queryFIRMALISTFIRMA_ADI->Value.Length() > 0)
        {
            frmIcDagitim->editFirmaKodu->Text = queryFIRMALISTFIRMA_KODU->Value;
            nFirmaKodu = queryFIRMALISTFIRMA_KODU->Value;
            frmIcDagitim->comboFirmaAdi->Text = queryFIRMALISTFIRMA_ADI->Value;
            frmIcDagitim->comboFirmaAdiChange(Sender);
            frmIcDagitim->comboUniteKsAAd->Text = "";
            frmIcDagitim->editUniteKsARut->Text = "";
            frmIcDagitim->editUniteKsAGor->Text = "";
            frmFirmaListesi->Close();
        }
        else if (frmFirmaListesi->Caption == "Firma Listesi [Hareket Kopyala]" && queryFIRMALISTFIRMA_ADI->Value.Length() > 0)
        {
            frmHareketKopyala->editKOD->Text = queryFIRMALISTFIRMA_KODU->Value;
            frmHareketKopyala->comboADI->Text = queryFIRMALISTFIRMA_ADI->Value;
            frmFirmaListesi->Close();
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmFirmaListesi::FormShow(TObject *Sender)
{
    if (RadioButton1->Checked == true && Edit1->Text.Length() > 0) {
        queryFIRMALIST->Close();
        queryFIRMALIST->SQL->Clear();
        queryFIRMALIST->SQL->Add("SELECT * FROM FIRMA");
        queryFIRMALIST->SQL->Add("WHERE FIRMA_KODU="+Edit1->Text);
        queryFIRMALIST->Open();
    }
    else {
        queryFIRMALIST->Close();
        queryFIRMALIST->SQL->Clear();
        queryFIRMALIST->SQL->Add("SELECT * FROM FIRMA");
        queryFIRMALIST->SQL->Add("WHERE FIRMA_ADI LIKE '%"+Edit1->Text+"%'");
        queryFIRMALIST->Open();
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmFirmaListesi::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    int nDeger;

    if (Key == Char(VK_RETURN)) {
        Key = 0;
        nDeger = Application->MessageBox("Seçtiðiniz kartý onaylýyor musunuz?", "Onay Kutusu",
                MB_YESNO + MB_ICONQUESTION);

        if (nDeger == IDYES)
        {
            if (frmFirmaListesi->Caption == "Firma Listesi [Firma Karti]" && queryFIRMALISTFIRMA_ADI->Value.Length() > 0)
            {
                datamoduleORTEG->tblFIRMA->Filtered = true;
                datamoduleORTEG->tblFIRMA->Filter = "[FIRMA_KODU]="+FloatToStr(queryFIRMALISTFIRMA_KODU->Value);
                datamoduleORTEG->tblFIRMA->Open();
                bFirmaYeniKayit = false;
                frmFirmaListesi->Close();
            }
            else if (frmFirmaListesi->Caption == "Firma Listesi [Hareket Ekrani]" && queryFIRMALISTFIRMA_ADI->Value.Length() > 0)
            {
                frmHareket->editFirmaKodu->Text = queryFIRMALISTFIRMA_KODU->Value;
                frmHareket->comboUniteAdi->Text = queryFIRMALISTFIRMA_ADI->Value;
                szFirmaAdi = queryFIRMALISTFIRMA_ADI->Value;
                nFirmaKodu = queryFIRMALISTFIRMA_KODU->Value;

                datamoduleORTEG->tblSTOKHAR->Filter = "[BELGE_TURU]='"+szBelgeTuru
                    +"' AND [TARIH]='"+dtTarih.DateString()
                    +"' AND [FIRMA_KODU]='"+FloatToStr(nFirmaKodu)+"'";
                datamoduleORTEG->tblSTOKHAR->Filtered = true;

                frmFirmaListesi->Close();
            }
            else if (frmFirmaListesi->Caption == "Firma Listesi [Ýç Daðýtým Hazýrlama]" && queryFIRMALISTFIRMA_ADI->Value.Length() > 0)
            {
                frmIcDagitim->editFirmaKodu->Text = queryFIRMALISTFIRMA_KODU->Value;
                nFirmaKodu = queryFIRMALISTFIRMA_KODU->Value;
                frmIcDagitim->comboFirmaAdi->Text = queryFIRMALISTFIRMA_ADI->Value;
                frmIcDagitim->comboFirmaAdiChange(Sender);
                frmIcDagitim->comboUniteKsAAd->Text = "";
                frmIcDagitim->editUniteKsARut->Text = "";
                frmIcDagitim->editUniteKsAGor->Text = "";
                frmFirmaListesi->Close();
            }
            else if (frmFirmaListesi->Caption == "Firma Listesi [Hareket Kopyala]" && queryFIRMALISTFIRMA_ADI->Value.Length() > 0)
            {
                frmHareketKopyala->editKOD->Text = queryFIRMALISTFIRMA_KODU->Value;
                frmHareketKopyala->comboADI->Text = queryFIRMALISTFIRMA_ADI->Value;
                frmFirmaListesi->Close();
            }
            frmFirmaListesi->Close();
        }
    }
}
//---------------------------------------------------------------------------
