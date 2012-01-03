/****************************************************************************

                                 Modül Hakkýnda
                                ----------------
    Ýþlevi:
    -------
        Stok hareketinde girilen stok kayýtlarýný alýþ fiyatlarýna göre
        kaydýný baðlamayý saðlar. Depo çýkýþlarý depoya gelen faturalar göre
        ünitelerden gelen iadeler ise üniteye daha önce verilen fiyatlar
        baz alýnarak kayýtlarýný baðlar. Ve buna göre raporlarý oluþturur.

                                  S    O    N

****************************************************************************/

//---------------------------------------------------------------------------
#include <vcl.h>
#include <math.h>

#pragma hdrstop

#include "icdagitim.h"
#include "firmalist.h"
#include "hareket.h"
#include "harkopyala.h"
#include "icdagitimrap.h"
#include "gidertut.h"
#include "fatura.h"
#include "hareketozellikleri.h"
#include "icdagitimlist.h"
#include "gidertut.h"
#include "fiyattablosu.h"
#include "datamodule.h"
#include <stdio.h>
#include <stdlib.h>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmIcDagitim *frmIcDagitim;
StokAnaDetay *saDetay;
//---------------------------------------------------------------------------
__fastcall TfrmIcDagitim::TfrmIcDagitim(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::FormShow(TObject *Sender)
{
    NesneleriTemizle();
    datetimeTarihChange(Sender);
    Timer1->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::comboIsletmelerAmiriAdChange(
      TObject *Sender)
{
    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->Filtered = true;
    datamoduleORTEG->tblPERSONEL->Filter = "[ADI_SOYADI]='"+comboIsletmelerAmiriAd->Text+"'";
    editIsletmelerAmiriRut->Text = datamoduleORTEG->tblPERSONELRUTBESI->Value;
    editIsletmelerAmiriGor->Text = datamoduleORTEG->tblPERSONELGOREVI->Value;
    datamoduleORTEG->tblPERSONEL->Filtered = false;
    datamoduleORTEG->tblPERSONEL->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::comboMuhasebeKsAAdChange(TObject *Sender)
{
    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->Filtered = true;
    datamoduleORTEG->tblPERSONEL->Filter = "[ADI_SOYADI]='"+comboMuhasebeKsAAd->Text+"'";
    editMuhasebeKsARut->Text = datamoduleORTEG->tblPERSONELRUTBESI->Value;
    editMuhasebeKsAGor->Text = datamoduleORTEG->tblPERSONELGOREVI->Value;
    datamoduleORTEG->tblPERSONEL->Filtered = false;
    datamoduleORTEG->tblPERSONEL->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::comboAnakilerKsAAdChange(TObject *Sender)
{
    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->Filtered = true;
    datamoduleORTEG->tblPERSONEL->Filter = "[ADI_SOYADI]='"+comboAnakilerKsAAd->Text+"'";
    editAnakilerKsARut->Text = datamoduleORTEG->tblPERSONELRUTBESI->Value;
    editAnakilerKsAGor->Text = datamoduleORTEG->tblPERSONELGOREVI->Value;
    datamoduleORTEG->tblPERSONEL->Filtered = false;
    datamoduleORTEG->tblPERSONEL->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::comboUniteKsAAdChange(TObject *Sender)
{
    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->Filtered = true;
    datamoduleORTEG->tblPERSONEL->Filter = "[ADI_SOYADI]='"+comboUniteKsAAd->Text+"'";
    editUniteKsARut->Text = datamoduleORTEG->tblPERSONELRUTBESI->Value;
    editUniteKsAGor->Text = datamoduleORTEG->tblPERSONELGOREVI->Value;
    datamoduleORTEG->tblPERSONEL->Filtered = false;
    datamoduleORTEG->tblPERSONEL->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::comboFirmaAdiChange(TObject *Sender)
{
    if (radiogroupICDAGITIM->ItemIndex == 0) {
        if (comboBelgeTuru->Text.Length() != 0 && comboDonem->Text.Length() != 0 && comboFirmaAdi->Text.Length() != 0)
            YeniKayitNoGetir();
        else
            editBelgeNo->Text = "";
    }

    if (comboBelgeTuru->Text != "TEMIZLIK TUTANAGI") {
        datamoduleORTEG->tblUNITE->Open();
        datamoduleORTEG->tblUNITE->Filtered = true;
        datamoduleORTEG->tblUNITE->Filter = "[UNITE_ADI]='"+comboFirmaAdi->Text+"'";

        comboUniteKsAAd->Text = datamoduleORTEG->tblUNITEKISIM_AMIRI_ADI->Value;
        editUniteKsARut->Text = datamoduleORTEG->tblUNITEKISIM_AMIRI_RUTBESI->Value;
        editUniteKsAGor->Text = datamoduleORTEG->tblUNITEKISIM_AMIRI_GOREVI->Value;

        datamoduleORTEG->tblUNITE->Filtered = false;
        datamoduleORTEG->tblUNITE->Close();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::SpeedButton1Click(TObject *Sender)
{
    frmFirmaListesi->Show();
    frmFirmaListesi->Caption = "Firma Listesi [Ýç Daðýtým Hazýrlama]";
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::radiogroupICDAGITIMClick(TObject *Sender)
{
    NesneleriTemizle();
    datetimeTarihChange(Sender);

    if (radiogroupICDAGITIM->ItemIndex == 0) {
        SpeedButton2->Enabled = false;
        comboDonem->Enabled = true;
        datetimeTarih->Enabled = true;
        TabSheet2->TabVisible = true;
        radiogroupFIRMASECIM->Enabled = true;
        comboBelgeTuru->Enabled = true;
        comboBelgeTuru->ItemIndex = 1;

        if (radiogroupFIRMASECIM->ItemIndex == 0) {
            comboFirmaAdi->Style = csSimple;
            SpeedButton1->Enabled = true;
            comboFirmaAdi->Text = "";
            comboFirmaAdi->Enabled = false;
        }
        else {
            editFirmaKodu->Text = "";
            comboFirmaAdi->Enabled = true;
            comboFirmaAdi->Style = (TComboBoxStyle) 2;// csDropDownList neden bu enum sabitinde hata verdiðini çözemedim.
            SpeedButton1->Enabled = false;
        }
        comboBelgeTuru->ItemIndex = 1;
    }
    else {
        SpeedButton1->Enabled = false;
        SpeedButton2->Enabled = true;
        comboDonem->Enabled = false;
        datetimeTarih->Enabled = false;
        radiogroupFIRMASECIM->Enabled = false;
        TabSheet2->TabVisible = false;
        comboBelgeTuru->Enabled = false;
        comboFirmaAdi->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::radiogroupFIRMASECIMClick(TObject *Sender)
{
    if (radiogroupFIRMASECIM->ItemIndex == 0) {
        comboFirmaAdi->Style = csSimple;
        SpeedButton1->Enabled = true;
        comboFirmaAdi->Text = "";
        comboFirmaAdi->Enabled = false;
    }
    else {
        editFirmaKodu->Text = "";
        comboFirmaAdi->Enabled = true;
        comboFirmaAdi->Style = (TComboBoxStyle) 2;// csDropDownList neden bu enum sabitinde hata verdiðini çözemedim.
        SpeedButton1->Enabled = false;
        comboFirmaAdiChange(Sender);
    }
}
//---------------------------------------------------------------------------
float __fastcall TfrmIcDagitim::StokMalDurumuHazirla(float nStokKodu)
{
    float nStokSonDurumMiktari = 0;

    querySTOKANADETAY->Close();
    datamoduleORTEG->tblSTOKANADETAY->Close();
    datamoduleORTEG->tblSTOKANADETAY->EmptyTable();
    datamoduleORTEG->tblSTOKANADETAY->Open();

    if (comboBelgeTuru->Text == "IADE BELGESÝ") { // Eðer iade belgesi ise üniteye
        querySTOKANAHAR->Close();                 // göre stok karatýný filtrele
        querySTOKANAHAR->SQL->Clear();
        querySTOKANAHAR->SQL->Add("SELECT * FROM STOKHAR");
        querySTOKANAHAR->SQL->Add("WHERE STOK_KODU="+FloatToStr(nStokKodu)
            +"and FIRMA_ADI='"+comboFirmaAdi->Text+"'");
        querySTOKANAHAR->Open();
    }
    else {
        querySTOKANAHAR->Close();
        querySTOKANAHAR->SQL->Clear();
        querySTOKANAHAR->SQL->Add("SELECT * FROM STOKHAR");
        querySTOKANAHAR->SQL->Add("WHERE STOK_KODU="+FloatToStr(nStokKodu));
        querySTOKANAHAR->Open();
    }

    while (!querySTOKANAHAR->Eof) {
        datamoduleORTEG->tblSTOKANADETAY->Open();
        datamoduleORTEG->tblSTOKANADETAY->Insert();
        datamoduleORTEG->tblSTOKANADETAY->Edit();
        datamoduleORTEG->tblSTOKANADETAYSTOK_KODU->Value = querySTOKANAHARSTOK_KODU->Value;
        datamoduleORTEG->tblSTOKANADETAYBIRIMI->Value = querySTOKANAHARBIRIMI->Value;
        datamoduleORTEG->tblSTOKANADETAYALIS_FIYATI->Value = querySTOKANAHARALIS_FIYATI->Value;

        if (comboBelgeTuru->Text == "IADE BELGESÝ") {
            // eðer belge türü cýktý ise pozitif, deðilse negatif miktar olarak yükler.
            if (querySTOKANAHARBELGE_TURU->Value == "CIKTI")
                datamoduleORTEG->tblSTOKANADETAYMIKTAR->Value = querySTOKANAHARMIKTAR->Value;
            else if (querySTOKANAHARBELGE_TURU->Value == "GIRDI")
                datamoduleORTEG->tblSTOKANADETAYMIKTAR->Value = querySTOKANAHARMIKTAR->Value * (-1);
        }
        else {
            // eðer belge türü girdi ise pozitif, deðilse negatif miktar olarak yükler.
            datamoduleORTEG->tblSTOKANADETAYMIKTAR->Value =
                querySTOKANAHARBELGE_TURU->Value == "GIRDI" ? querySTOKANAHARMIKTAR->Value : querySTOKANAHARMIKTAR->Value * (-1);
        }

        // Stok Son Durum Miktarý hesalplanýyor..
        datamoduleORTEG->tblSTOKANADETAY->Edit();
        datamoduleORTEG->tblSTOKANADETAY->Post();
        nStokSonDurumMiktari += datamoduleORTEG->tblSTOKANADETAYMIKTAR->Value;
        querySTOKANAHAR->Next();
    }
    querySTOKANAHAR->Close();
    datamoduleORTEG->tblSTOKANADETAY->Close();

    querySTOKANADETAY->Close();
    querySTOKANADETAY->ParamByName("StokKodu")->AsFloat = nStokKodu;
    querySTOKANADETAY->Open();

    return nStokSonDurumMiktari;
}

void __fastcall TfrmIcDagitim::IcDagitimEkle(double nAlisFiyati, double nMiktar)
{
    int nHareketNo;

    datamoduleORTEG->tblSTOKHAR->Open();
    datamoduleORTEG->tblSTOKHAR->Filter = "[HAREKET_NO]="+FloatToStr(querySTOKHARHAREKET_NO->Value);
    datamoduleORTEG->tblSTOKHAR->Filtered = true;

    if (comboBelgeTuru->Text == "IADE BELGESÝ" || comboBelgeTuru->Text == "GIRDI BELGESÝ")
        szBelgeTuru = "GIRDI";
    else if (comboBelgeTuru->Text == "CIKTI BELGESÝ")
        szBelgeTuru = "CIKTI";
    else if (comboBelgeTuru->Text == "TEMIZLIK TUTANAGI")
        szBelgeTuru = "TEMIZLIK";

    szBelgeNo = editBelgeNo->Text;
    szFirmaAdi = comboFirmaAdi->Text;
    if (radiogroupFIRMASECIM->ItemIndex == 0)
        nFirmaKodu = StrToFloat(editFirmaKodu->Text);
    else
        nFirmaKodu = -1;

    dtTarih = querySTOKHARTARIH->Value;

    if (datamoduleORTEG->tblSTOKHARIC_DAGITIM_NO->Value == "-1")
    {
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARMIKTAR->Value = StrToFloat(FormatFloat("################.###", nMiktar));
        datamoduleORTEG->tblSTOKHARALIS_FIYATI->Value = nAlisFiyati;
        datamoduleORTEG->tblSTOKHARIC_DAGITIM_NO->Value = editBelgeNo->Text;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHAR->Post();
        nHareketNo = datamoduleORTEG->tblSTOKHARHAREKET_NO->Value;
    }
    else {
        datamoduleORTEG->tblSTOKHAR->Filtered = false;
        datamoduleORTEG->tblSTOKHAR->Open();
        datamoduleORTEG->tblSTOKHAR->Insert();
        bStokCagirma = false; // KODA GÖRE GÝRÝÞ...
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARSTOK_KODU->Value = querySTOKHARSTOK_KODU->Value;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARSTOK_ADI->Value = querySTOKHARSTOK_ADI->Value;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARIC_DAGITIM_NO->Value = editBelgeNo->Text;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARBIRIM_KATSAYISI->Value = querySTOKHARBIRIM_KATSAYISI->Value;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARBIRIMI->Value = querySTOKHARBIRIMI->Value;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARMIKTAR->Value = StrToFloat(FormatFloat("################.###", nMiktar));
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARBIRIM2->Value = querySTOKHARBIRIM2->Value;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARALIS_FIYATI->Value = nAlisFiyati;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHAR->Post();
        nHareketNo = datamoduleORTEG->tblSTOKHARHAREKET_NO->Value;
    }
    datamoduleORTEG->tblSTOKHAR->Filtered = false;

    datamoduleORTEG->tblIC_DAGITIM->Open();
    datamoduleORTEG->tblIC_DAGITIM->Insert();
    // ---------- ÝC DAGITIM BÝLGÝSÝ ------------
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMBELGE_TURU->Value = comboBelgeTuru->Text;
    datamoduleORTEG->tblIC_DAGITIMBELGE_NO->Value = editBelgeNo->Text;
    if (radiogroupFIRMASECIM->ItemIndex == 0)
        datamoduleORTEG->tblIC_DAGITIMFIRMA_KODU->Value = StrToFloat(editFirmaKodu->Text);
    else
        datamoduleORTEG->tblIC_DAGITIMFIRMA_KODU->Value = -1;

    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMFIRMA_ADI->Value = comboFirmaAdi->Text;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMDONEM->Value = comboDonem->Text;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMTARIH->Value = datetimeTarih->Date;
    // ------------- STOK BÝLGÝSÝ ---------------
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMSTOK_KODU->Value = querySTOKHARSTOK_KODU->Value;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMSTOK_ADI->Value = querySTOKHARSTOK_ADI->Value;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMMIKTAR->Value = nMiktar;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMBIRIMI->Value = querySTOKHARBIRIMI->Value;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMALIS_FIYATI->Value = nAlisFiyati;

    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMHAREKET_NO->Value = nHareketNo;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMALIS_TUTARI->Value = datamoduleORTEG->TamSayiyaCevir(nAlisFiyati * nMiktar);
    // Eðer seçilen ünite tabldot ise %5 diðerlerinde ise %10'a göre
    // satýþ fiyatý hesaplanýyor....
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMSATIS_FIYATI->Value = datamoduleORTEG->SatisFiyatiBul(nAlisFiyati, querySTOKHARSTOK_KODU->Value);
    // ------------------------------------- hesaplama sonu...
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMSATIS_TUTARI->Value =
        datamoduleORTEG->TamSayiyaCevir(datamoduleORTEG->tblIC_DAGITIMSATIS_FIYATI->Value * nMiktar);
    datamoduleORTEG->tblIC_DAGITIMKAR->Value =
        datamoduleORTEG->TamSayiyaCevir(datamoduleORTEG->tblIC_DAGITIMSATIS_TUTARI->Value - datamoduleORTEG->tblIC_DAGITIMALIS_TUTARI->Value);
    // *******************************************
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIM->Post();
}

void __fastcall TfrmIcDagitim::IcDagitimiOlustur(int nDurum)
{
    StokAnaDetay nGecici;
    double nGirisToplami = 0;

    if (nDurum == OLUSTUR) {
        // Sýralama Ýþlemi yapýlýyor...
        for (int i = 0; i < querySTOKANADETAY->RecordCount; i++)
        {
            for (int k = i; k < querySTOKANADETAY->RecordCount; k++)
            {
                if (comboBelgeTuru->Text == "CIKTI BELGESÝ" || comboBelgeTuru->Text == "TEMIZLIK TUTANAGI") {
                    if (saDetay[i].dtTarih > saDetay[k].dtTarih)
                    {
                        nGecici.dtTarih = saDetay[k].dtTarih;
                        nGecici.nAlisFiyati = saDetay[k].nAlisFiyati;
                        nGecici.nMiktar = saDetay[k].nMiktar;

                        saDetay[k].dtTarih = saDetay[i].dtTarih;
                        saDetay[k].nAlisFiyati = saDetay[i].nAlisFiyati;
                        saDetay[k].nMiktar = saDetay[i].nMiktar;

                        saDetay[i].dtTarih = nGecici.dtTarih;
                        saDetay[i].nAlisFiyati = nGecici.nAlisFiyati;
                        saDetay[i].nMiktar = nGecici.nMiktar;
                    }
                }
                else {
                    if (saDetay[i].dtTarih < saDetay[k].dtTarih)
                    {
                        nGecici.dtTarih = saDetay[k].dtTarih;
                        nGecici.nAlisFiyati = saDetay[k].nAlisFiyati;
                        nGecici.nMiktar = saDetay[k].nMiktar;

                        saDetay[k].dtTarih = saDetay[i].dtTarih;
                        saDetay[k].nAlisFiyati = saDetay[i].nAlisFiyati;
                        saDetay[k].nMiktar = saDetay[i].nMiktar;

                        saDetay[i].dtTarih = nGecici.dtTarih;
                        saDetay[i].nAlisFiyati = nGecici.nAlisFiyati;
                        saDetay[i].nMiktar = nGecici.nMiktar;
                    }
                }
            }
            nGirisToplami += saDetay[i].nMiktar;
        }

        if (nGirisToplami >= querySTOKHARMIKTAR->Value) {
            double HarekettekiMiktar = querySTOKHARMIKTAR->Value;

            for (int i = 0; i < querySTOKANADETAY->RecordCount; i++) {
                if (saDetay[i].nMiktar < HarekettekiMiktar && saDetay[i].nMiktar > 0) {
                    IcDagitimEkle(saDetay[i].nAlisFiyati, saDetay[i].nMiktar);
                    HarekettekiMiktar -= saDetay[i].nMiktar;
                }
                else if (saDetay[i].nMiktar >= HarekettekiMiktar) {
                    IcDagitimEkle(saDetay[i].nAlisFiyati, HarekettekiMiktar);
                    break;
                }
            }
        }
    }
    else {
        IcDagitimEkle(querySTOKHARALIS_FIYATI->Value, querySTOKHARMIKTAR->Value);
    }
}

//-----------------------------------------------------------------------------
void __fastcall TfrmIcDagitim::TabloyuSil(void)
{
    delete[] saDetay;
}

//-----------------------------------------------------------------------------
void __fastcall TfrmIcDagitim::TabloyuOlustur(void)
{
    // Burada stokkartdetayi tablosu hazýrlanýyor...
    saDetay = new StokAnaDetay [querySTOKANADETAY->RecordCount];

    querySTOKANADETAY->First();
    for (int nSayac = 0; nSayac < querySTOKANADETAY->RecordCount; ++nSayac) {
        saDetay[nSayac].nAlisFiyati = querySTOKANADETAYalis_fiyati->Value;
        saDetay[nSayac].nMiktar = (datamoduleORTEG->Sayimi(querySTOKANADETAYSUMOFmiktar->Value) != 0)
            ? StrToFloat(FormatFloat("############.###", datamoduleORTEG->Sayimi(querySTOKANADETAYSUMOFmiktar->Value)))
            : 0;

        // dtTarih deðiþkeni burada dolduruluyor...
        querySTOKANAHAR->Close();
        querySTOKANAHAR->SQL->Clear();
        querySTOKANAHAR->SQL->Add("SELECT * FROM STOKHAR");
        querySTOKANAHAR->SQL->Add("WHERE BELGE_TURU='GIRDI' AND STOK_KODU="+FloatToStr(querySTOKHARSTOK_KODU->Value)+" AND ALIS_FIYATI="+FloatToStr(querySTOKANADETAYalis_fiyati->Value));
        querySTOKANAHAR->SQL->Add("ORDER BY TARIH DESC");
        querySTOKANAHAR->Open();
        querySTOKANAHAR->First();

        saDetay[nSayac].dtTarih = querySTOKANAHARTARIH->Value.operator double();
        querySTOKANADETAY->Next();
    }
    querySTOKANAHAR->Close();
}

void __fastcall TfrmIcDagitim::NesneleriTemizle(void)
{
    TObject *Sender;

    editBelgeNo->Clear();
    comboDonem->Clear();
    comboFirmaAdi->Clear();
    editFirmaKodu->Clear();
    comboUniteKsAAd->Clear();
    editUniteKsARut->Clear();
    editUniteKsAGor->Clear();
    datetimeTarih->Date = datetimeTarih->Date.CurrentDate();

    // Ünite Adlarý comboBox'lara dolduruluyor
    comboFirmaAdi->Clear();

    datamoduleORTEG->tblUNITE->Open();
    datamoduleORTEG->tblUNITE->First();
    while (!datamoduleORTEG->tblUNITE->Eof) {
        comboFirmaAdi->Items->Add(datamoduleORTEG->tblUNITEUNITE_ADI->Value);
        datamoduleORTEG->tblUNITE->Next();
    }
    datamoduleORTEG->tblUNITE->Close();
    // Ünite Adlarý comboBox'lara dolduruldu...

    // Ýmza Yetkilileri comboBox'lara dolduruluyor
    comboIsletmelerAmiriAd->Clear();
    comboAnakilerKsAAd->Clear();
    comboMuhasebeKsAAd->Clear();
    comboUniteKsAAd->Clear();

    datamoduleORTEG->tblPERSONEL->Open();
    datamoduleORTEG->tblPERSONEL->First();
    while (!datamoduleORTEG->tblPERSONEL->Eof) {
        comboIsletmelerAmiriAd->Items->Add(datamoduleORTEG->tblPERSONELADI_SOYADI->Value);
        comboMuhasebeKsAAd->Items->Add(datamoduleORTEG->tblPERSONELADI_SOYADI->Value);
        comboAnakilerKsAAd->Items->Add(datamoduleORTEG->tblPERSONELADI_SOYADI->Value);
        comboUniteKsAAd->Items->Add(datamoduleORTEG->tblPERSONELADI_SOYADI->Value);
        datamoduleORTEG->tblPERSONEL->Next();
    }
    datamoduleORTEG->tblPERSONEL->Close();
    // Ýmza Yetkilileri comboBox'lara dolduruldu...

    // Donem Bilgisi comboBox'a dolduruluyor...
    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->First();
    while (!datamoduleORTEG->tblDONEM->Eof) {
        comboDonem->Items->Add(datamoduleORTEG->tblDONEMDONEM_TANIMI->Value);
        datamoduleORTEG->tblDONEM->Next();
    }
    datamoduleORTEG->tblDONEM->Close();
    // Donem Bilgisi comboBox'a dolduruldu...
    comboBelgeTuru->ItemIndex = -1;

    // Ýþletmeler, Muhasebe Kýsým ve Anakiler Ks. Amirlerine
    // Ait Bilgiler Yerleþtiriliyor.
    datamoduleORTEG->tblAYARLAR->Open();
    datamoduleORTEG->tblAYARLAR->First();

    comboIsletmelerAmiriAd->Text = datamoduleORTEG->tblAYARLARIsletmelerAmiriAdi->Value;
    comboIsletmelerAmiriAdChange(Sender);
    comboMuhasebeKsAAd->Text = datamoduleORTEG->tblAYARLARMuhasebeKsAmiriAdi->Value;
    comboMuhasebeKsAAdChange(Sender);
    comboAnakilerKsAAd->Text = datamoduleORTEG->tblAYARLARAnakilerKsAmiriAdi->Value;
    comboAnakilerKsAAdChange(Sender);

    if (radiogroupICDAGITIM->ItemIndex == 0) {
        if (comboBelgeTuru->Text.Length() != 0 && comboDonem->Text.Length() != 0 && comboFirmaAdi->Text.Length() != 0)
            YeniKayitNoGetir();
        else
            editBelgeNo->Text = "";
    }
}

void __fastcall TfrmIcDagitim::CikilacakIcDagitimlar(void)
{
//    AnsiString szBelgeTuru;

    if (comboBelgeTuru->Text == "IADE BELGESÝ" || comboBelgeTuru->Text == "GIRDI BELGESÝ")
        szBelgeTuru = "GIRDI";
    else if (comboBelgeTuru->Text == "CIKTI BELGESÝ")
        szBelgeTuru = "CIKTI";
    else if (comboBelgeTuru->Text == "TEMIZLIK TUTANAGI")
        szBelgeTuru = "TEMIZLIK";

    if (radiogroupFIRMASECIM->ItemIndex == 0) {
        querySTOKHAR->Close();
        querySTOKHAR->SQL->Clear();
        querySTOKHAR->SQL->Add("SELECT * FROM STOKHAR");
        querySTOKHAR->SQL->Add("where firma_kodu = '"+editFirmaKodu->Text+"' and "
            + "ic_dagitim_no = '-1' and belge_turu='"+szBelgeTuru+"'");
    }

    else {
        querySTOKHAR->Close();
        querySTOKHAR->SQL->Clear();
        querySTOKHAR->SQL->Add("SELECT * FROM STOKHAR");
        querySTOKHAR->SQL->Add("where firma_adi = '"+comboFirmaAdi->Text+"' and "
            + "ic_dagitim_no = '-1' and belge_turu='"+szBelgeTuru+"'");
    }

    querySTOKHAR->Open();
}

void __fastcall TfrmIcDagitim::YeniKayitNoGetir(void)
{
    char szString[80];
    double nKayitNo;

    memset(szString, 0x0, 80);
    if (comboBelgeTuru->Text == "IADE BELGESÝ") {
        queryBELGE_NO->Close();
        queryBELGE_NO->SQL->Clear();
        queryBELGE_NO->SQL->Add("select * from icdagitim");
        queryBELGE_NO->SQL->Add("where belge_no like 'Ý:%' and donem='"+comboDonem->Text+"'");
        queryBELGE_NO->SQL->Add("order by belge_no desc");
        queryBELGE_NO->Open();

        strcpy(szString, queryBELGE_NOBELGE_NO->Value.c_str());
        nKayitNo = atoi(&szString[3]) + 1;
        sprintf(szString, "Ý: %04d", (long) nKayitNo);
        editBelgeNo->Text = AnsiString(szString);
    }
    else if (comboBelgeTuru->Text == "GIRDI BELGESÝ") {
        queryBELGE_NO->Close();
        queryBELGE_NO->SQL->Clear();
        queryBELGE_NO->SQL->Add("select * from icdagitim");
        queryBELGE_NO->SQL->Add("where belge_no like 'G:%' and donem='"+comboDonem->Text+"'");
        queryBELGE_NO->SQL->Add("order by belge_no desc");
        queryBELGE_NO->Open();

        strcpy(szString, queryBELGE_NOBELGE_NO->Value.c_str());
        nKayitNo = atoi(&szString[3]) + 1;
        sprintf(szString, "G: %04d", (long) nKayitNo);
        editBelgeNo->Text = AnsiString(szString);
    }
    else {
        queryBELGE_NO->Close();
        queryBELGE_NO->SQL->Clear();
        queryBELGE_NO->SQL->Add("select * from icdagitim");
        queryBELGE_NO->SQL->Add("where belge_no like 'Ç:%' and donem='"+comboDonem->Text+"'");
        queryBELGE_NO->SQL->Add("order by belge_no desc");
        queryBELGE_NO->Open();

        strcpy(szString, queryBELGE_NOBELGE_NO->Value.c_str());
        nKayitNo = atoi(&szString[3]) + 1;
        sprintf(szString, "Ç: %04d", (long) nKayitNo);
        editBelgeNo->Text = AnsiString(szString);
    }

    editBelgeNo->Text = AnsiString(szString);
}

void __fastcall TfrmIcDagitim::comboBelgeTuruChange(TObject *Sender)
{
    if (comboBelgeTuru->Text == "TEMIZLIK TUTANAGI") {
        datamoduleORTEG->tblUNITE->Open();
        datamoduleORTEG->tblAYARLAR->Open();
        datamoduleORTEG->tblAYARLAR->First();
        datamoduleORTEG->tblUNITE->Filtered = true;
        datamoduleORTEG->tblUNITE->Filter = "[UNITE_ADI]='"+datamoduleORTEG->tblAYARLARTemizlikUnitesi->Value+"'";

        comboUniteKsAAd->Text = datamoduleORTEG->tblUNITEKISIM_AMIRI_ADI->Value;
        editUniteKsARut->Text = datamoduleORTEG->tblUNITEKISIM_AMIRI_RUTBESI->Value;
        editUniteKsAGor->Text = datamoduleORTEG->tblUNITEKISIM_AMIRI_GOREVI->Value;

        datamoduleORTEG->tblUNITE->Filtered = false;
        datamoduleORTEG->tblUNITE->Close();
        datamoduleORTEG->tblAYARLAR->Close();
    }

    if (radiogroupICDAGITIM->ItemIndex == 0) {
        if (comboBelgeTuru->Text.Length() != 0 && comboDonem->Text.Length() != 0 && comboFirmaAdi->Text.Length() != 0)
            YeniKayitNoGetir();
        else
            editBelgeNo->Text = "";
    }

    if (comboBelgeTuru->Text == "CIKTI BELGESÝ") {
        radiogroupFIRMASECIM->Enabled = true;
    }
    else if (comboBelgeTuru->Text == "GIRDI BELGESÝ") {
        radiogroupFIRMASECIM->ItemIndex = 0;
        radiogroupFIRMASECIM->Enabled = false;
    }
    else {
        radiogroupFIRMASECIM->ItemIndex = 1;
        radiogroupFIRMASECIM->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::comboDonemChange(TObject *Sender)
{
    // Donemin baþlangýç tarihi atanýyor....
    datamoduleORTEG->tblDONEM->Filter = "[DONEM_TANIMI]='"+comboDonem->Text+"'";
    datamoduleORTEG->tblDONEM->Filtered = true;
    datamoduleORTEG->tblDONEM->Open();
    datetimeTarih->Date = datamoduleORTEG->tblDONEMBASLANGIC->Value;
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->Close();

    if (radiogroupICDAGITIM->ItemIndex == 0) {
        if (comboBelgeTuru->Text.Length() != 0 && comboDonem->Text.Length() != 0 && comboFirmaAdi->Text.Length() != 0)
            YeniKayitNoGetir();
        else
            editBelgeNo->Text = "";
    }

    datamoduleORTEG->tblIC_DAGITIM->Active = true;
    datamoduleORTEG->tblIC_DAGITIM->Filter = "[BELGE_NO]='"+editBelgeNo->Text
        +"' and [DONEM]='"+comboDonem->Text+"'";
    datamoduleORTEG->tblIC_DAGITIM->Filtered = true;

    if (datamoduleORTEG->tblIC_DAGITIM->RecordCount > 0) {
        comboBelgeTuru->ItemIndex = comboBelgeTuru->Items->IndexOf(datamoduleORTEG->tblIC_DAGITIMBELGE_TURU->Value);
        comboFirmaAdi->ItemIndex = comboFirmaAdi->Items->IndexOf(datamoduleORTEG->tblIC_DAGITIMFIRMA_ADI->Value);
        datetimeTarih->Date = datamoduleORTEG->tblIC_DAGITIMTARIH->Value;

        if (datamoduleORTEG->tblIC_DAGITIMFIRMA_KODU->Value > 0)
            radiogroupFIRMASECIM->ItemIndex = 0;
        else
            radiogroupFIRMASECIM->ItemIndex = 1;

        comboBelgeTuruChange(Sender);
        comboFirmaAdi->Text = datamoduleORTEG->tblIC_DAGITIMFIRMA_ADI->Value;
        editFirmaKodu->Text = FloatToStr(datamoduleORTEG->tblIC_DAGITIMFIRMA_KODU->Value);
        comboFirmaAdiChange(Sender);
    }

    queryICDAGITIMTOPLAMI->Close();
    queryICDAGITIMTOPLAMI->ParamByName("belge_no")->AsString = editBelgeNo->Text;
    queryICDAGITIMTOPLAMI->ParamByName("donem")->AsString = comboDonem->Text;
    queryICDAGITIMTOPLAMI->Open();

    if (szBelgeTuru == "GIRDI BELGESÝ" && nFirmaKodu > 0) // EÐER FATURAYSA
        StatusBar1->Panels->Items[3]->Text = FormatFloat("###,###,###,###", (floor(queryICDAGITIMTOPLAMISUMOFALIS_TUTARI->Value/1000)*1000));
    else
        StatusBar1->Panels->Items[3]->Text = FormatFloat("###,###,###,###", (ceil(queryICDAGITIMTOPLAMISUMOFALIS_TUTARI->Value/1000)*1000));

    StatusBar1->Panels->Items[5]->Text = FormatFloat("###,###,###,###", (ceil(queryICDAGITIMTOPLAMISUMOFSATIS_TUTARI->Value/1000)*1000));
    StatusBar1->Panels->Items[7]->Text = FormatFloat("###,###,###,###", (ceil(queryICDAGITIMTOPLAMISUMOFKAR->Value/1000)*1000));
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::editBelgeNoChange(TObject *Sender)
{
    datamoduleORTEG->tblIC_DAGITIM->Active = true;
    datamoduleORTEG->tblIC_DAGITIM->Filter = "[BELGE_NO]='"+editBelgeNo->Text
        +"' and [DONEM]='"+comboDonem->Text+"'";
    datamoduleORTEG->tblIC_DAGITIM->Filtered = true;

    if (datamoduleORTEG->tblIC_DAGITIM->RecordCount > 0) {
        comboBelgeTuru->ItemIndex = comboBelgeTuru->Items->IndexOf(datamoduleORTEG->tblIC_DAGITIMBELGE_TURU->Value);
        comboFirmaAdi->ItemIndex = comboFirmaAdi->Items->IndexOf(datamoduleORTEG->tblIC_DAGITIMFIRMA_ADI->Value);
        datetimeTarih->Date = datamoduleORTEG->tblIC_DAGITIMTARIH->Value;

        if (datamoduleORTEG->tblIC_DAGITIMFIRMA_KODU->Value > 0)
            radiogroupFIRMASECIM->ItemIndex = 0;
        else
            radiogroupFIRMASECIM->ItemIndex = 1;

        comboBelgeTuruChange(Sender);
        comboFirmaAdi->Text = datamoduleORTEG->tblIC_DAGITIMFIRMA_ADI->Value;
        editFirmaKodu->Text = FloatToStr(datamoduleORTEG->tblIC_DAGITIMFIRMA_KODU->Value);
        comboFirmaAdiChange(Sender);
    }

    queryICDAGITIMTOPLAMI->Close();
    queryICDAGITIMTOPLAMI->ParamByName("belge_no")->AsString = editBelgeNo->Text;
    queryICDAGITIMTOPLAMI->ParamByName("donem")->AsString = comboDonem->Text;
    queryICDAGITIMTOPLAMI->Open();

    if (szBelgeTuru == "GIRDI BELGESÝ" && nFirmaKodu > 0) // EÐER FATURAYSA
        StatusBar1->Panels->Items[3]->Text = FormatFloat("###,###,###,###", (floor(queryICDAGITIMTOPLAMISUMOFALIS_TUTARI->Value/1000)*1000));
    else
        StatusBar1->Panels->Items[3]->Text = FormatFloat("###,###,###,###", (ceil(queryICDAGITIMTOPLAMISUMOFALIS_TUTARI->Value/1000)*1000));

    StatusBar1->Panels->Items[5]->Text = FormatFloat("###,###,###,###", (ceil(queryICDAGITIMTOPLAMISUMOFSATIS_TUTARI->Value/1000)*1000));
    StatusBar1->Panels->Items[7]->Text = FormatFloat("###,###,###,###", (ceil(queryICDAGITIMTOPLAMISUMOFKAR->Value/1000)*1000));
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::SpeedButton2Click(TObject *Sender)
{
    frmIcDagitimList->Show();    
}
//---------------------------------------------------------------------------



void __fastcall TfrmIcDagitim::kl1Click(TObject *Sender)
{
    frmIcDagitim->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::Timer1Timer(TObject *Sender)
{
    if (datamoduleORTEG->tblIC_DAGITIM->Active == true) {
        if (datamoduleORTEG->tblIC_DAGITIM->RecordCount > 0)
            DBGrid1->DataSource = datamoduleORTEG->dsrcIC_DAGITIM;
        else
            DBGrid1->DataSource = NULL;
    }
    // *****************************************************
    if (editBelgeNo->Text.Length() > 0) {
        tbtnYENI->Enabled = true;
        Yeni1->Enabled = true;
        if (datamoduleORTEG->tblIC_DAGITIM->RecordCount > 0) {
            HareketiKopyala1->Enabled = true;
            tbtnKOPYA->Enabled = true;
            tbtnFIYATTABLOSU->Enabled = true;
            zellikler1->Enabled = true;
            FirmaTablosu1->Enabled = true;
            tbtnKAYDET->Enabled = true;
            Kaydet1->Enabled = true;
            Kaydet2->Enabled = true;
            tbtnSIL->Enabled = true;
            tbtnBAGLANTI->Enabled = true;
            DatmnBalantsnSil1->Enabled = true;
            BalantsnKes1->Enabled = true;
            Sil2->Enabled = true;
            Sil1->Enabled = true;
            Fatura1->Enabled = true;
            Datm1->Enabled = true;
            TemizlikTutana1->Enabled = true;
        }
        else {
            HareketiKopyala1->Enabled = false;
            tbtnKOPYA->Enabled = false;
            Fatura1->Enabled = false;
            Datm1->Enabled = false;
            zellikler1->Enabled = false;
            TemizlikTutana1->Enabled = false;
            tbtnFIYATTABLOSU->Enabled = false;
            FirmaTablosu1->Enabled = false;
            tbtnSIL->Enabled = false;
            Sil1->Enabled = false;
            tbtnBAGLANTI->Enabled = false;
            DatmnBalantsnSil1->Enabled = false;
            BalantsnKes1->Enabled = false;
            Sil2->Enabled = false;
            tbtnKAYDET->Enabled = false;
            Kaydet1->Enabled = false;
            Kaydet2->Enabled = false;
        }
    // *****************************************************
        if (radiogroupICDAGITIM->ItemIndex == 1) {
            tbtnAC->Enabled = true;
            DatmA1->Enabled = true;
        }
        else {
            tbtnAC->Enabled = false;
            DatmA1->Enabled = false;
        }
        tbtnCALISTIR->Enabled = true;
        Olutur1->Enabled = true;
    }
    else {
        tbtnYENI->Enabled = true;
        Yeni1->Enabled = true;
        tbtnKAYDET->Enabled = false;
        Kaydet1->Enabled = false;
        Kaydet2->Enabled = false;
        tbtnSIL->Enabled = false;
        Sil1->Enabled = false;
        tbtnBAGLANTI->Enabled = false;
        DatmnBalantsnSil1->Enabled = false;
        BalantsnKes1->Enabled = false;
        Sil2->Enabled = false;

        if (radiogroupICDAGITIM->ItemIndex == 1) {
            tbtnAC->Enabled = true;
            DatmA1->Enabled = true;
        }
        else {
            tbtnAC->Enabled = false;
            DatmA1->Enabled = false;
        }
        HareketiKopyala1->Enabled = false;
        tbtnKOPYA->Enabled = false;
        tbtnCALISTIR->Enabled = false;
        Olutur1->Enabled = false;
        tbtnFIYATTABLOSU->Enabled = false;
        zellikler1->Enabled = false;
        FirmaTablosu1->Enabled = false;
        Fatura1->Enabled = false;
        Datm1->Enabled = false;
        TemizlikTutana1->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::DBGrid1KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;

        if (DBGrid1->SelectedIndex < DBGrid1->FieldCount-1)
            ++DBGrid1->SelectedIndex;
        else {
            DBGrid1->SelectedIndex = 0;
            // Kayýt ediliyor....
            Kaydet1Click(Sender);
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::Kaydet1Click(TObject *Sender)
{
    if (comboBelgeTuru->Text == "IADE BELGESÝ" || comboBelgeTuru->Text == "GIRDI BELGESÝ")
        szBelgeTuru = "GIRDI";
    else if (comboBelgeTuru->Text == "CIKTI BELGESÝ")
        szBelgeTuru = "CIKTI";
    else if (comboBelgeTuru->Text == "TEMIZLIK TUTANAGI")
        szBelgeTuru = "TEMIZLIK";

    szBelgeNo = editBelgeNo->Text;
    szFirmaAdi = comboFirmaAdi->Text;
    nFirmaKodu =
        radiogroupFIRMASECIM->ItemIndex == 0
            ? StrToFloat(editFirmaKodu->Text)
            : -1;
    dtTarih = datetimeTarih->DateTime;

    datamoduleORTEG->tblSTOKHAR->Open();
    datamoduleORTEG->tblSTOKHAR->Filtered = true;
    datamoduleORTEG->tblSTOKHAR->Filter = "[HAREKET_NO]="+FloatToStr(datamoduleORTEG->tblIC_DAGITIMHAREKET_NO->Value);

    if (datamoduleORTEG->tblSTOKHARHAREKET_NO->Value > 0)
    {
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARMIKTAR->Value
            = datamoduleORTEG->tblIC_DAGITIMMIKTAR->Value;
        datamoduleORTEG->tblSTOKHARMIKTARChange((TField *)Sender); // Miktar2 burada deðiþiyor...

        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARALIS_FIYATI->Value
            = datamoduleORTEG->tblIC_DAGITIMALIS_FIYATI->Value;

        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHAR->Post();
        datamoduleORTEG->tblSTOKHAR->Filtered = false;
    }

    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIM->Post();
}
//---------------------------------------------------------------------------


void __fastcall TfrmIcDagitim::Sil1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Ýç daðýtýmýn tamamý silinecektir?\nSon kararýnýz mý?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        // Zamanlayýcý durduruldu...
        Timer1->Enabled = false;
        // Bütün bilgileri ana hareketleriyle birlikte sil...
        datamoduleORTEG->tblIC_DAGITIM->First();
        while (!datamoduleORTEG->tblIC_DAGITIM->Eof) {
            datamoduleORTEG->tblSTOKHAR->Open();
            datamoduleORTEG->tblSTOKHAR->Filter = "[HAREKET_NO]='"+FloatToStr(datamoduleORTEG->tblIC_DAGITIMHAREKET_NO->Value)+"'";
            datamoduleORTEG->tblSTOKHAR->Filtered = true;
            if (datamoduleORTEG->tblSTOKHAR->RecordCount > 0)
                datamoduleORTEG->tblSTOKHAR->Delete();
            datamoduleORTEG->tblSTOKHAR->Filtered = false;
            datamoduleORTEG->tblIC_DAGITIM->Delete();
        }
        // Zamanlayýcý çalýþtýrýldý...
        Timer1->Enabled = true;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::Sil2Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        // Bütün bilgileri ana hareketleriyle birlikte sil...
        datamoduleORTEG->tblSTOKHAR->Open();
        datamoduleORTEG->tblSTOKHAR->Filter = "[HAREKET_NO]='"+FloatToStr(datamoduleORTEG->tblIC_DAGITIMHAREKET_NO->Value)+"'";
        datamoduleORTEG->tblSTOKHAR->Filtered = true;
        if (datamoduleORTEG->tblSTOKHAR->RecordCount > 0)
            datamoduleORTEG->tblSTOKHAR->Delete();
        datamoduleORTEG->tblSTOKHAR->Filtered = false;
        datamoduleORTEG->tblIC_DAGITIM->Delete();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::Kaydet2Click(TObject *Sender)
{
    Kaydet1Click(Sender);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::zellikler1Click(TObject *Sender)
{
    frmHareketOzellikleri->dsrscSTOKHAR->DataSet = frmHareketOzellikleri->querySTOKHAR;
    frmHareketOzellikleri->querySTOKHAR->ParamByName("hareket_no")->AsFloat = datamoduleORTEG->tblIC_DAGITIMHAREKET_NO->Value;
    frmHareketOzellikleri->querySTOKHAR->Open();
    frmHareketOzellikleri->queryICDAGITIM->Open();
    frmHareketOzellikleri->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    Timer1->Enabled = false;
    datamoduleORTEG->tblSTOKHAR->Close();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::DatmA1Click(TObject *Sender)
{
    frmIcDagitimList->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::Olutur1Click(TObject *Sender)
{
    AnsiString szBittiMesaji;
    int nHazirlananKalem, nKalanKalem;

    // Zamanlayýcý durduruldu...
    Timer1->Enabled = false;

    // ICDagitim Tablosu Açýlýyor...
    datamoduleORTEG->tblIC_DAGITIM->Open();

    CikilacakIcDagitimlar();
    ProgressBar1->Position = 0;
    querySTOKHAR->Open();
    querySTOKHAR->First();
    while (!querySTOKHAR->Eof) {
        // Ýþlem Ýlerleme Durumu...
        ProgressBar1->Position = querySTOKHAR->RecNo * 100 / querySTOKHAR->RecordCount;
        StatusBar1->Panels->Items[0]->Text = "% "+IntToStr(ProgressBar1->Position);
        StatusBar1->Refresh();

        StokMalDurumuHazirla(querySTOKHARSTOK_KODU->Value);
        TabloyuOlustur();

        if (querySTOKHARALIS_FIYATI->Value > 0)
            IcDagitimiOlustur(ILISKILENDIR);
        else
            IcDagitimiOlustur(OLUSTUR);

        TabloyuSil(); // oluþturulan tablo siliniyor...

        // Belge Toplamlarý hesaplanýyor...
        queryICDAGITIMTOPLAMI->Close();
        queryICDAGITIMTOPLAMI->ParamByName("belge_no")->AsString = editBelgeNo->Text;
        queryICDAGITIMTOPLAMI->ParamByName("donem")->AsString = comboDonem->Text;
        queryICDAGITIMTOPLAMI->Open();

        if (szBelgeTuru == "GIRDI BELGESÝ" && nFirmaKodu > 0) // EÐER FATURAYSA
            StatusBar1->Panels->Items[3]->Text = FormatFloat("###,###,###,###", (floor(queryICDAGITIMTOPLAMISUMOFALIS_TUTARI->Value/1000)*1000));
        else
            StatusBar1->Panels->Items[3]->Text = FormatFloat("###,###,###,###", (ceil(queryICDAGITIMTOPLAMISUMOFALIS_TUTARI->Value/1000)*1000));

        StatusBar1->Panels->Items[5]->Text = FormatFloat("###,###,###,###", (ceil(queryICDAGITIMTOPLAMISUMOFSATIS_TUTARI->Value/1000)*1000));
        StatusBar1->Panels->Items[7]->Text = FormatFloat("###,###,###,###", (ceil(queryICDAGITIMTOPLAMISUMOFKAR->Value/1000)*1000));

        // Bir sonraki kayýt....
        querySTOKHAR->Next();
    }
    // ICDagitim Tablosu Kapatýlýyor...
    datamoduleORTEG->tblIC_DAGITIM->Close();

    // Hazýrlanan Ýçdaðýtým listeleniyor...
    datamoduleORTEG->tblIC_DAGITIM->Active = true;
    datamoduleORTEG->tblIC_DAGITIM->Filter = "[BELGE_NO]='"+editBelgeNo->Text
        +"' and [DONEM]='"+comboDonem->Text+"'";
    datamoduleORTEG->tblIC_DAGITIM->Filtered = true;

    // Ýç Daðtýmý çýkmayan hareketler listeleniyor.
    CikilacakIcDagitimlar();
    ProgressBar1->Position = 0;
    StatusBar1->Panels->Items[0]->Text = "% "+IntToStr(ProgressBar1->Position);
    StatusBar1->Refresh();

    nHazirlananKalem = datamoduleORTEG->tblIC_DAGITIM->RecordCount;
    nKalanKalem = querySTOKHAR->RecordCount;
    szBittiMesaji = ("Ýç daðýtým belgesi toplam "+FloatToStr(nHazirlananKalem)+" kalem olarak hazýrlanmýþ");
    if (nKalanKalem > 0)
        szBittiMesaji = szBittiMesaji + ("\nve "+FloatToStr(nKalanKalem)+" kalemi hazýrlanamamýþtýr.");
    else
        szBittiMesaji = szBittiMesaji + ("týr.");

    Application->MessageBoxA(szBittiMesaji.c_str(), "Bilgi", MB_OK | MB_ICONINFORMATION);

    // Zamanlayýcý çalýþtýrýldý....
    Timer1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::Yeni1Click(TObject *Sender)
{
    radiogroupICDAGITIM->ItemIndex = 0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::FirmaTablosu1Click(TObject *Sender)
{
    StatusBar1->Panels->Items[1]->Text = "Son Durum Tablosu";
    frmFiyatTablosu->labelStokKodu->Caption = FloatToStr(datamoduleORTEG->tblIC_DAGITIMSTOK_KODU->Value);
    frmFiyatTablosu->Caption = "Fiyat Tablosu - [ Ýç Daðýtým Hazýrlama ]";
    frmFiyatTablosu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::Datm1Click(TObject *Sender)
{
    // Ýçdaðýtým bilgileri ayarlanýyor...
    if (comboBelgeTuru->Text == "TEMIZLIK TUTANAGI") {
        datamoduleORTEG->tblAYARLAR->Open();
        datamoduleORTEG->tblAYARLAR->First();
        rprIcDagitimRaporu->qrlabelFIRMA_ADI->Caption = datamoduleORTEG->tblAYARLARTemizlikUnitesi->Value;
        rprIcDagitimRaporu->qrlalbelNOT->Caption = "Tutanak Ýliþiktedir.";
        datamoduleORTEG->tblAYARLAR->Close();
    }
    else {
        rprIcDagitimRaporu->qrlabelFIRMA_ADI->Caption = comboFirmaAdi->Text;
        rprIcDagitimRaporu->qrlalbelNOT->Caption = " ";
    }
    rprIcDagitimRaporu->qrlabelBELGENO->Caption = editBelgeNo->Text;
    rprIcDagitimRaporu->qrlabelBELGETARIHI->Caption = datetimeTarih->Date.DateString();

    // Ýmza yetkileri ayarlanýyor....
    rprIcDagitimRaporu->qrlabelANAKILERADI->Caption = comboAnakilerKsAAd->Text;
    rprIcDagitimRaporu->qrlabelANAKILERRUTBESI->Caption = editAnakilerKsARut->Text;
    rprIcDagitimRaporu->qrlabelANAKILERGOREVI->Caption = editAnakilerKsAGor->Text;

    rprIcDagitimRaporu->qrlabelUNITEADI->Caption = comboUniteKsAAd->Text;
    rprIcDagitimRaporu->qrlabelUNITERUTBESI->Caption = editUniteKsARut->Text;
    rprIcDagitimRaporu->qrlabelUNITEGOREVI->Caption = editUniteKsAGor->Text;

    rprIcDagitimRaporu->qrlabelISLETMEADI->Caption = comboIsletmelerAmiriAd->Text;
    rprIcDagitimRaporu->qrlabelISLETMERUTBESI->Caption = editIsletmelerAmiriRut->Text;
    rprIcDagitimRaporu->qrlabelISLETMEGOREVI->Caption = editIsletmelerAmiriGor->Text;

    rprIcDagitimRaporu->qrlabelMUHASEBEADI->Caption = comboMuhasebeKsAAd->Text;
    rprIcDagitimRaporu->qrlabelMUHASEBERUTBESI->Caption = editMuhasebeKsARut->Text;
    rprIcDagitimRaporu->qrlabelMUHASEBEGOREVI->Caption = editMuhasebeKsAGor->Text;

    datamoduleORTEG->queryIC_DAGITIM->Close();
    datamoduleORTEG->queryIC_DAGITIM->ParamByName("DONEM")->AsString = comboDonem->Text;
    datamoduleORTEG->queryIC_DAGITIM->ParamByName("BELGE_NO")->AsString = editBelgeNo->Text;
    datamoduleORTEG->queryIC_DAGITIM->Open();

    Timer1->Enabled = false;
    rprIcDagitimRaporu->QuickRep1->Preview();
    Timer1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::TemizlikTutana1Click(TObject *Sender)
{
    rprGiderTutanagi->qrlabelUnite->Caption = comboFirmaAdi->Text;
    rprGiderTutanagi->qrlabelTarih->Caption = datetimeTarih->Date.DateString();

    rprGiderTutanagi->qrlabelAnakilerKsAAdi->Caption = comboAnakilerKsAAd->Text;
    rprGiderTutanagi->qrlabelAnakilerKsARutbesi->Caption = editAnakilerKsARut->Text;
    rprGiderTutanagi->qrlabelAnakilerKsAGorevi->Caption = editAnakilerKsAGor->Text;

    rprGiderTutanagi->qrIsletmelerAAdi->Caption = comboIsletmelerAmiriAd->Text;
    rprGiderTutanagi->qrIsletmelerARutbesi->Caption = editIsletmelerAmiriRut->Text;
    rprGiderTutanagi->qrIsletmelerAGorevi->Caption = editIsletmelerAmiriGor->Text;

    // Unitenin ks.amiri bilgisi alýnýyor....
    datamoduleORTEG->tblUNITE->Filter = "[UNITE_ADI]='"+rprGiderTutanagi->qrlabelUnite->Caption+"'";
    datamoduleORTEG->tblUNITE->Filtered = true;
    datamoduleORTEG->tblUNITE->Open();

    rprGiderTutanagi->qrlabelUniteKsAAdi->Caption = datamoduleORTEG->tblUNITEKISIM_AMIRI_ADI->Value;
    rprGiderTutanagi->qrlabelUniteKsARutbesi->Caption = datamoduleORTEG->tblUNITEKISIM_AMIRI_RUTBESI->Value;
    rprGiderTutanagi->qrlabelUniteKsAGorevi->Caption = datamoduleORTEG->tblUNITEKISIM_AMIRI_GOREVI->Value;

    datamoduleORTEG->tblUNITE->Filtered = false;
    datamoduleORTEG->tblUNITE->Close();
    //--------------------------------------------------------

    Timer1->Enabled = false;
    rprGiderTutanagi->QuickRep1->Preview();
    Timer1->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::datetimeTarihChange(TObject *Sender)
{
    // Donem bilgisi dolduruluyor....
    AnsiString szIndeksSayisi;

    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->First();

    while (!datamoduleORTEG->tblDONEM->Eof) {
        // Indeks bilgisini ata...
        if (datetimeTarih->Date >= datamoduleORTEG->tblDONEMBASLANGIC->Value && datetimeTarih->Date <= datamoduleORTEG->tblDONEMBITIS->Value+1)
            szIndeksSayisi = datamoduleORTEG->tblDONEMDONEM_TANIMI->Value;
        datamoduleORTEG->tblDONEM->Next();
    }
    comboDonem->ItemIndex = comboDonem->Items->IndexOf(szIndeksSayisi);

    if (comboDonem->ItemIndex != -1) {
        // Yeni No Getir...
        if (radiogroupICDAGITIM->ItemIndex == 0) {
            if (comboBelgeTuru->Text.Length() != 0 && comboDonem->Text.Length() != 0 && comboFirmaAdi->Text.Length() != 0)
                YeniKayitNoGetir();
            else
                editBelgeNo->Text = "";
        }
    }
    else {
        Application->MessageBox("Girilen tarih bu döneme ait deðil !", "Uyarý mesajý",
            MB_OK + MB_ICONEXCLAMATION);
        datetimeTarih->Date = datamoduleORTEG->tblDONEMBASLANGIC->Value;
        datetimeTarihChange(Sender);
    }
    datamoduleORTEG->tblDONEM->Close();
    dtTarih = datetimeTarih->Date;    
}
//---------------------------------------------------------------------------


void __fastcall TfrmIcDagitim::DatmnBalantsnSil1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Ýç daðýtýmýn tamamýnýn baðlantýsý kesilecektir?\nSon kararýnýz mý?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        // Zamanlayýcý durduruldu...
        Timer1->Enabled = false;
        // Bütün bilgileri ana hareketleriyle birlikte sil...
        datamoduleORTEG->tblIC_DAGITIM->First();
        while (!datamoduleORTEG->tblIC_DAGITIM->Eof) {
            datamoduleORTEG->tblSTOKHAR->Open();
            datamoduleORTEG->tblSTOKHAR->Filter = "[HAREKET_NO]='"+FloatToStr(datamoduleORTEG->tblIC_DAGITIMHAREKET_NO->Value)+"'";
            datamoduleORTEG->tblSTOKHAR->Filtered = true;
            if (datamoduleORTEG->tblSTOKHAR->RecordCount > 0) {
                datamoduleORTEG->tblSTOKHAR->Edit();
                szBelgeNo = "-1";
                datamoduleORTEG->tblSTOKHARIC_DAGITIM_NO->Value = "-1";
                datamoduleORTEG->tblSTOKHAR->Edit();
                datamoduleORTEG->tblSTOKHAR->Post();
            }
            datamoduleORTEG->tblSTOKHAR->Filtered = false;
            // Ýç Daðýtým Hareketi Siliniyor...
            datamoduleORTEG->tblIC_DAGITIM->Delete();
        }
        // Zamanlayýcý çalýþtýrýldý...
        Timer1->Enabled = true;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::BalantsnKes1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Bu iç daðýtýmýn baðlantýsýný kesmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        // Bütün bilgileri ana hareketleriyle birlikte sil...
        datamoduleORTEG->tblSTOKHAR->Open();
        datamoduleORTEG->tblSTOKHAR->Filter = "[HAREKET_NO]='"+FloatToStr(datamoduleORTEG->tblIC_DAGITIMHAREKET_NO->Value)+"'";
        datamoduleORTEG->tblSTOKHAR->Filtered = true;
        if (datamoduleORTEG->tblSTOKHAR->RecordCount > 0) {
            datamoduleORTEG->tblSTOKHAR->Edit();
            szBelgeNo = "-1";
            datamoduleORTEG->tblSTOKHARIC_DAGITIM_NO->Value = "-1";
            datamoduleORTEG->tblSTOKHAR->Edit();
            datamoduleORTEG->tblSTOKHAR->Post();
        }
        datamoduleORTEG->tblSTOKHAR->Filtered = false;
        // Ýç Daðýtým Hareketi Siliniyor...        
        datamoduleORTEG->tblIC_DAGITIM->Delete();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::erik1Click(TObject *Sender)
{
    Application->HelpContext(7);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::Fatura1Click(TObject *Sender)
{
    Timer1->Enabled = false;
    rprFatura->QuickRep1->Preview();
    Timer1->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitim::HareketiKopyala1Click(TObject *Sender)
{
    frmHareketKopyala->Show();
}
//---------------------------------------------------------------------------

