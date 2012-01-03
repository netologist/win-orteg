//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "sayimrap.h"
#include "stoklist.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TrprSayimRaporu *rprSayimRaporu;
//---------------------------------------------------------------------------
__fastcall TrprSayimRaporu::TrprSayimRaporu(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TrprSayimRaporu::BitBtn1Click(TObject *Sender)
{
    float nGirisToplami, nCikisToplami, nMiktarSonDurum;
    int nDeger;

    // Ýmza yetkilis personel rapora iþleniyor....

    nDeger = Application->MessageBox("Sayýmý yeniden hesaplatmak istiyor musunuz?", "Mesaj Kutusu",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        querySTOKANA->Close();
        querySTOKANA->SQL->Clear();
        querySTOKANA->SQL->Add("select distinct * from stokana");
        switch (radiogrupSECIM->ItemIndex) {
            case 0:
                querySTOKANA->SQL->Add("where Cinsi='"+comboCinsi->Text+"'");
                break;
            case 1:
                querySTOKANA->SQL->Add("where StokKodu >= "+editBaslangicSK->Text+" and StokKodu <= "+editBitisSK->Text);
                break;
        }
        querySTOKANA->SQL->Add("order by StokKodu");
        querySTOKANA->Open();

        querySTOKHAR->Close();
        querySTOKHAR->Open();

        querySAYIMDETAYI->Close();
        datamoduleORTEG->tblDETAYLISAYIM->Close();
        datamoduleORTEG->tblDETAYLISAYIM->EmptyTable();
        datamoduleORTEG->tblDETAYLISAYIM->Open();

        querySTOKANA->First();
        // Stok Kartlarý döngüye giriyor...
        while (!querySTOKANA->Eof) {
            // Her bir Stok Kartýnýn Alýþ Fiyatý Kart Bilgisi Liteleniyor...
            queryALISFIYATLIST->Open();

            // Stok Kartýnýn Alýþ Fiyatý Kartýnýn,
            // Hareket Detayý Son Durum Miktarý Ýçin Harekete Sokuluyor...
            // ------------------------------------------------------------
            queryALISFIYATLIST->First();
            while (!queryALISFIYATLIST->Eof) {
                nGirisToplami = 0, nCikisToplami = 0;
                querySTOKHAR->First();
                while (!querySTOKHAR->Eof) {
                    if ( querySTOKHARBELGE_TURU->Value == "GIRDI" &&
                        querySTOKHARSTOK_KODU->Value == querySTOKANAStokKodu->Value &&
                        querySTOKHARTARIH->Value <= DateTimePicker1->Date.DateString() &&
                        querySTOKHARALIS_FIYATI->Value == queryALISFIYATLISTALIS_FIYATI->Value )
                    {
                        nGirisToplami += querySTOKHARMIKTAR->Value;
                    }
                    else if ( (querySTOKHARBELGE_TURU->Value == "CIKTI" || querySTOKHARBELGE_TURU->Value == "TEMIZLIK") &&
                            querySTOKHARSTOK_KODU->Value == querySTOKANAStokKodu->Value &&
                            querySTOKHARTARIH->Value <= DateTimePicker1->Date.DateString() &&
                            querySTOKHARALIS_FIYATI->Value == queryALISFIYATLISTALIS_FIYATI->Value )
                    {
                        nCikisToplami += querySTOKHARMIKTAR->Value;
                    }
                    querySTOKHAR->Next();
                }
                nMiktarSonDurum = nGirisToplami - nCikisToplami;

                if (nMiktarSonDurum != 0) {
                    datamoduleORTEG->tblDETAYLISAYIM->Insert(); // Yeni Kayýt...
                    datamoduleORTEG->tblDETAYLISAYIM->Edit();
                    datamoduleORTEG->tblDETAYLISAYIMKOD->Value = querySTOKANAStokKodu->Value; // Stok Kodu Giriliyor..
                    datamoduleORTEG->tblDETAYLISAYIMCINSI->Value = querySTOKANACinsi->Value;
                    datamoduleORTEG->tblDETAYLISAYIMAD->Value = querySTOKANAStokAdi->Value; // Stok Adý Giriliyor...
                    datamoduleORTEG->tblDETAYLISAYIMMIKTAR->Value = nMiktarSonDurum; // Miktar Hesaplanarak Giriliyor...
                    datamoduleORTEG->tblDETAYLISAYIMBIRIM->Value = querySTOKANABirimi->Value; // Birim Giriliyor...
                    datamoduleORTEG->tblDETAYLISAYIMMIKTAR2->Value = nMiktarSonDurum / querySTOKANABirim2Katsayisi->Value; // 2. Miktar Hesaplanarak Giriliyor...
                    datamoduleORTEG->tblDETAYLISAYIMBIRIM2->Value = querySTOKANABirim2->Value; // 2. Birim Giriliyor...
                    szFirmaAdi = "Firma Seçilmedi";
                    datamoduleORTEG->tblDETAYLISAYIM->Edit();
                    datamoduleORTEG->tblDETAYLISAYIM->Post(); // Kaydediliyor...
                }
                // Bir sonraki adým...
                queryALISFIYATLIST->Next();
            }
            querySTOKANA->Next();
            ProgressBar1->Position = (querySTOKANA->RecNo * 100) / querySTOKANA->RecordCount;
            labelYUZDE->Caption = "% " + IntToStr(ProgressBar1->Position);
            labelYUZDE->Refresh();
        }
        datamoduleORTEG->tblDETAYLISAYIM->Close();
    }
    querySAYIMDETAYI->Close();
    querySAYIMDETAYI->Open();
    QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TrprSayimRaporu::BitBtn2Click(TObject *Sender)
{
    rprSayimRaporu->Close();
}
//---------------------------------------------------------------------------

void __fastcall TrprSayimRaporu::FormShow(TObject *Sender)
{
    // Donem bilgisi dolduruluyor...
    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->First();
    comboDonem->Items->Clear();
    while (!datamoduleORTEG->tblDONEM->Eof) {
        comboDonem->Items->Add(datamoduleORTEG->tblDONEMDONEM_TANIMI->Value);
        datamoduleORTEG->tblDONEM->Next();
    }
    datamoduleORTEG->tblDONEM->Close();

    // Cinsi bilgisi dolduruluyor...
    datamoduleORTEG->tblCINSI->Open();
    datamoduleORTEG->tblCINSI->First();
    comboCinsi->Items->Clear();
    while (!datamoduleORTEG->tblCINSI->Eof) {
        comboCinsi->Items->Add(datamoduleORTEG->tblCINSICINSI_ADI->Value);
        datamoduleORTEG->tblCINSI->Next();
    }
    datamoduleORTEG->tblCINSI->Close();

    // Sistem tarihi timepicker'a atanýyor...
    DateTimePicker1->Date = DateTimePicker1->DateTime.CurrentDate();
}
//---------------------------------------------------------------------------

void __fastcall TrprSayimRaporu::comboDonemChange(TObject *Sender)
{
    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;    
    datamoduleORTEG->tblDONEM->Filter = "[DONEM_TANIMI]='"+comboDonem->Text+"'";
    datamoduleORTEG->tblDONEM->Filtered = true;

    DateTimePicker1->Date = datamoduleORTEG->tblDONEMBITIS->Value;
    datamoduleORTEG->tblDONEM->Close();
}
//---------------------------------------------------------------------------

void __fastcall TrprSayimRaporu::radiogrupSECIMClick(TObject *Sender)
{
    switch (radiogrupSECIM->ItemIndex) {
        case 0:
            StaticText1->Color = cl3DLight;
            StaticText2->Color = cl3DLight;
            editBaslangicSK->Color = cl3DLight;
            Edit3->Color = cl3DLight;
            editBitisSK->Color = cl3DLight;
            Edit4->Color = cl3DLight;
            comboCinsi->Color = clWindow;
            editBaslangicSK->Enabled = false;
            SpeedButton1->Enabled = false;
            SpeedButton2->Enabled = false;
            Edit3->Enabled = false;
            editBitisSK->Enabled = false;
            Edit4->Enabled = false;
            comboCinsi->Enabled = true;
            break;
        case 1:
            StaticText1->Color = clInfoBk;
            StaticText2->Color = clInfoBk;
            editBaslangicSK->Color = clWindow;
            Edit3->Color = clWindow;
            editBitisSK->Color = clWindow;
            Edit4->Color = clWindow;
            comboCinsi->Color = cl3DLight;
            editBaslangicSK->Enabled = true;
            Edit3->Enabled = true;
            editBitisSK->Enabled = true;
            SpeedButton1->Enabled = true;
            SpeedButton2->Enabled = true;
            Edit4->Enabled = true;
            comboCinsi->Enabled = false;
            break;
        case 2:
            StaticText1->Color = cl3DLight;
            StaticText2->Color = cl3DLight;
            editBaslangicSK->Color = cl3DLight;
            Edit3->Color = cl3DLight;
            editBitisSK->Color = cl3DLight;
            Edit4->Color = cl3DLight;
            comboCinsi->Color = cl3DLight;
            editBaslangicSK->Enabled = false;
            SpeedButton1->Enabled = false;
            SpeedButton2->Enabled = false;
            Edit3->Enabled = false;
            editBitisSK->Enabled = false;
            Edit4->Enabled = false;
            comboCinsi->Enabled = false;
            break;
    }
}
//---------------------------------------------------------------------------

void __fastcall TrprSayimRaporu::QuickRep1BeforePrint(
      TCustomQuickRep *Sender, bool &PrintReport)
{
    PageFooterBand1->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TrprSayimRaporu::SummaryBand1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    PageFooterBand1->Enabled = false;      
}
//---------------------------------------------------------------------------

void __fastcall TrprSayimRaporu::SpeedButton1Click(TObject *Sender)
{
    bKontrol = false;

    frmStokListesi->Caption = "Stok Listesi [baþlangýç]";
    frmStokListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TrprSayimRaporu::SpeedButton2Click(TObject *Sender)
{
    bKontrol = true;

    frmStokListesi->Caption = "Stok Listesi [bitiþ]";
    frmStokListesi->Show();
}
//---------------------------------------------------------------------------



