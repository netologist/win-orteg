//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "detsayrap.h"
#include "stoklist.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TrprDetayliSayimRaporu *rprDetayliSayimRaporu;
double nAlisToplami, nSatisToplami, nKarToplami;
//---------------------------------------------------------------------------
__fastcall TrprDetayliSayimRaporu::TrprDetayliSayimRaporu(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TrprDetayliSayimRaporu::BitBtn1Click(TObject *Sender)
{
    double nGirisToplami, nCikisToplami, nMiktarSonDurum;
    int nDeger;
    bool bGecersizSonuc;

    // Ýmza yetkilis personel rapora iþleniyor....
    qrlabelSayimGorevlisiAdi->Caption = comboSayimGorevlisiAdi->Text;
    qrlabelSayimGorevlisiRutbesi->Caption = editSayimGorevlisiRutbesi->Text;
    qrlabelSayimGorevlisiGorevi->Caption = editSayimGorevlisiGorevi->Text;
    qrlabelAnakilerKsAAdi->Caption = comboAnakilerKsAAdi->Text;
    qrlabelAnakilerKsARutbesi->Caption = editAnakilerKsARutbesi->Text;
    qrlabelAnakilerKsAGorevi->Caption = editAnakilerKsAGorevi->Text;
    qrlabelDepocuAdi->Caption = comboDepocuAdi->Text;
    qrlabelDepocuRutbesi->Caption = editDepocuRutbesi->Text;
    qrlabelDepocuGorevi->Caption = editDepocuGorevi->Text;

    QRMemo1->Lines->Clear();
    QRMemo1->Lines->Add("Yukarýda dökümü yapýlan mallar sayým heyetince tam ve saðlam sayýlmýþ, satýþ sorumlusu erlere teslim edilmiþ olup; iþ bu tutanak imza altýna alýnmýþtýr. "+DateToStr(DateTimePicker2->DateTime)+" / "+MaskEdit1->Text);

    // Dönem Bilgisi Dolduruluyor...
    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->Filter = "[BASLANGIC]>='"+DateTimePicker1->DateTime.DateString()+"' OR [BITIS]>='"+DateTimePicker1->DateTime.DateString()+"'";
    datamoduleORTEG->tblDONEM->Filtered = true;

    qrlabelDONEM->Caption = datamoduleORTEG->tblDONEMDONEM_TANIMI->Value;
    datamoduleORTEG->tblDONEM->Close();
    datamoduleORTEG->tblDONEM->Filtered = false;
    // Dönem Bilgisi Dolduruldu...

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

                // MiktarSonDurum deðeri sýfýr mý? küsüratlý ve eksi ise
                bGecersizSonuc =
                    strchr(UpperCase(AnsiString(nMiktarSonDurum)).c_str(), 'E') != NULL ? true : false;

                if (nMiktarSonDurum != 0 && bGecersizSonuc == false) {
                    datamoduleORTEG->tblDETAYLISAYIM->Insert(); // Yeni Kayýt...
                    datamoduleORTEG->tblDETAYLISAYIM->Edit();
                    datamoduleORTEG->tblDETAYLISAYIMKOD->Value = querySTOKANAStokKodu->Value; // Stok Kodu Giriliyor..
                    datamoduleORTEG->tblDETAYLISAYIMCINSI->Value = querySTOKANACinsi->Value;
                    datamoduleORTEG->tblDETAYLISAYIMAD->Value = querySTOKANAStokAdi->Value; // Stok Adý Giriliyor...
                    // Aþaðýdaki satýrda miktar hesaplanýyor ve noktadan sonra sayýlardan sadece ilk iki basamak alýnýyor.
                    datamoduleORTEG->tblDETAYLISAYIMMIKTAR->Value = StrToFloat(FormatFloat("##########.##", nMiktarSonDurum));
                    datamoduleORTEG->tblDETAYLISAYIMBIRIM->Value = querySTOKANABirimi->Value; // Birim Giriliyor...
                    datamoduleORTEG->tblDETAYLISAYIMMIKTAR2->Value = datamoduleORTEG->tblDETAYLISAYIMMIKTAR->Value / querySTOKANABirim2Katsayisi->Value; // 2. Miktar Hesaplanarak Giriliyor...
                    datamoduleORTEG->tblDETAYLISAYIMBIRIM2->Value = querySTOKANABirim2->Value; // 2. Birim Giriliyor...
                    datamoduleORTEG->tblDETAYLISAYIMALIS_FIYATI->Value = queryALISFIYATLISTALIS_FIYATI->Value; // Alýþ Fiyatý Giriliyor...
                    datamoduleORTEG->tblDETAYLISAYIMALIS_TUTARI->Value = queryALISFIYATLISTALIS_FIYATI->Value * datamoduleORTEG->tblDETAYLISAYIMMIKTAR->Value; // Alýþ Tutarý Giliyor...
                    szFirmaAdi = "Firma Seçilmedi";
                    datamoduleORTEG->tblDETAYLISAYIMSATIS_FIYATI->Value = datamoduleORTEG->SatisFiyatiBul(queryALISFIYATLISTALIS_FIYATI->Value, querySTOKANAStokKodu->Value); // Satýþ Fiyatý Giriliyor...
                    datamoduleORTEG->tblDETAYLISAYIMSATIS_TUTARI->Value = datamoduleORTEG->tblDETAYLISAYIMSATIS_FIYATI->Value * datamoduleORTEG->tblDETAYLISAYIMMIKTAR->Value; // Satýþ Tutarý Giliyor...
                    datamoduleORTEG->tblDETAYLISAYIMKAR->Value = datamoduleORTEG->tblDETAYLISAYIMSATIS_TUTARI->Value - datamoduleORTEG->tblDETAYLISAYIMALIS_TUTARI->Value;
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

    querySAYIMDETAYI->Open();
    QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TrprDetayliSayimRaporu::FormShow(TObject *Sender)
{
    comboSayimGorevlisiAdi->Items->Clear();
    comboAnakilerKsAAdi->Items->Clear();
    comboDepocuAdi->Items->Clear();

    // Personel bilgisi doldudruluyor....
    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->First();
    while (!datamoduleORTEG->tblPERSONEL->Eof) {
        comboSayimGorevlisiAdi->Items->Add(datamoduleORTEG->tblPERSONELADI_SOYADI->Value);
        comboAnakilerKsAAdi->Items->Add(datamoduleORTEG->tblPERSONELADI_SOYADI->Value);
        comboDepocuAdi->Items->Add(datamoduleORTEG->tblPERSONELADI_SOYADI->Value);
        datamoduleORTEG->tblPERSONEL->Next();
    }
    datamoduleORTEG->tblPERSONEL->Close();

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
    DateTimePicker2->Date = DateTimePicker2->DateTime.CurrentDate();
    MaskEdit1->Text = DateTimePicker2->DateTime.TimeString();
}
//---------------------------------------------------------------------------

void __fastcall TrprDetayliSayimRaporu::comboDonemChange(TObject *Sender)
{
    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->Filter = "[DONEM_TANIMI]='"+comboDonem->Text+"'";
    datamoduleORTEG->tblDONEM->Filtered = true;

    DateTimePicker1->Date = datamoduleORTEG->tblDONEMBITIS->Value;
    datamoduleORTEG->tblDONEM->Close();
    datamoduleORTEG->tblDONEM->Filtered = false;
}
//---------------------------------------------------------------------------

void __fastcall TrprDetayliSayimRaporu::radiogrupSECIMClick(
      TObject *Sender)
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

void __fastcall TrprDetayliSayimRaporu::BitBtn2Click(TObject *Sender)
{
    queryALISFIYATLIST->Close();
    querySTOKANA->Close();
    querySTOKHAR->Close();

    rprDetayliSayimRaporu->Close();
}
//---------------------------------------------------------------------------

void __fastcall TrprDetayliSayimRaporu::SummaryBand1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    PageFooterBand1->Enabled = false;

    qrlabelAlisToplami->Caption = FormatFloat("###,###,###,###", nAlisToplami);
    qrlabelSatisToplami->Caption = FormatFloat("###,###,###,###", nSatisToplami);
    qrlabelKarToplami->Caption = FormatFloat("###,###,###,###", nKarToplami);
}
//---------------------------------------------------------------------------

void __fastcall TrprDetayliSayimRaporu::comboSayimGorevlisiAdiChange(
      TObject *Sender)
{
    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->Filtered = true;
    datamoduleORTEG->tblPERSONEL->Filter = "[ADI_SOYADI]='"+comboSayimGorevlisiAdi->Text+"'";
    datamoduleORTEG->tblPERSONEL->Edit();
    editSayimGorevlisiRutbesi->Text = datamoduleORTEG->tblPERSONELRUTBESI->Value;
    datamoduleORTEG->tblPERSONEL->Edit();
    editSayimGorevlisiGorevi->Text = datamoduleORTEG->tblPERSONELGOREVI->Value;
    datamoduleORTEG->tblPERSONEL->Filtered = false;
    datamoduleORTEG->tblPERSONEL->Close();
}
//---------------------------------------------------------------------------

void __fastcall TrprDetayliSayimRaporu::comboAnakilerKsAAdiChange(
      TObject *Sender)
{
    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->Filtered = true;
    datamoduleORTEG->tblPERSONEL->Filter = "[ADI_SOYADI]='"+comboAnakilerKsAAdi->Text+"'";
    datamoduleORTEG->tblPERSONEL->Edit();
    editAnakilerKsARutbesi->Text = datamoduleORTEG->tblPERSONELRUTBESI->Value;
    datamoduleORTEG->tblPERSONEL->Edit();
    editAnakilerKsAGorevi->Text = datamoduleORTEG->tblPERSONELGOREVI->Value;
    datamoduleORTEG->tblPERSONEL->Filtered = false;
    datamoduleORTEG->tblPERSONEL->Close();
}
//---------------------------------------------------------------------------

void __fastcall TrprDetayliSayimRaporu::comboDepocuAdiChange(
      TObject *Sender)
{
    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->Filtered = true;
    datamoduleORTEG->tblPERSONEL->Filter = "[ADI_SOYADI]='"+comboDepocuAdi->Text+"'";
    datamoduleORTEG->tblPERSONEL->Edit();
    editDepocuRutbesi->Text = datamoduleORTEG->tblPERSONELRUTBESI->Value;
    datamoduleORTEG->tblPERSONEL->Edit();
    editDepocuGorevi->Text = datamoduleORTEG->tblPERSONELGOREVI->Value;
    datamoduleORTEG->tblPERSONEL->Filtered = false;
    datamoduleORTEG->tblPERSONEL->Close();
}
//---------------------------------------------------------------------------

void __fastcall TrprDetayliSayimRaporu::QuickRep1BeforePrint(
      TCustomQuickRep *Sender, bool &PrintReport)
{
    PageFooterBand1->Enabled = true;

    nAlisToplami = 0, nSatisToplami = 0, nKarToplami = 0;
}
//---------------------------------------------------------------------------

void __fastcall TrprDetayliSayimRaporu::PageFooterBand1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    qrlabelAlisToplami2->Caption = FormatFloat("###,###,###,###", nAlisToplami);
    qrlabelSatisToplami2->Caption = FormatFloat("###,###,###,###", nSatisToplami);
    qrlabelKarToplami2->Caption = FormatFloat("###,###,###,###", nKarToplami);
}
//---------------------------------------------------------------------------

void __fastcall TrprDetayliSayimRaporu::DetailBand1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    // Formatlý girilen database tanýmlamalarýnda -1 > x < 1 arasý
    // olan küsüratlý x sayýsýnda ,5 þeklinde çýkar. Bunun engellemke için
    // bu deðeri string yapmak gerekir.
    if (querySAYIMDETAYIMIKTAR->Value > -1 && querySAYIMDETAYIMIKTAR->Value < 1)
        qrlabelMIKTAR->Caption = "0" + FormatFloat("###,###,###,###.###", querySAYIMDETAYIMIKTAR->Value);
    else
        qrlabelMIKTAR->Caption = FormatFloat("###,###,###,###.###", querySAYIMDETAYIMIKTAR->Value);

    nAlisToplami +=  querySAYIMDETAYIALIS_TUTARI->Value;
    nSatisToplami += querySAYIMDETAYISATIS_TUTARI->Value;
    nKarToplami += querySAYIMDETAYIKAR->Value;
}
//---------------------------------------------------------------------------

void __fastcall TrprDetayliSayimRaporu::SpeedButton1Click(TObject *Sender)
{
    frmStokListesi->Caption = "Stok Listesi [baþlangýç]";
    frmStokListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TrprDetayliSayimRaporu::SpeedButton2Click(TObject *Sender)
{
    frmStokListesi->Caption = "Stok Listesi [bitiþ]";
    frmStokListesi->Show();
}
//---------------------------------------------------------------------------




