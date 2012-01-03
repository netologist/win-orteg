//---------------------------------------------------------------------------
#include <vcl.h>
#include <dstring.h>

#pragma hdrstop

#include "datamodule.h"
#include "icdagitim.h"
#include "stokkarti.h"
#include "icdagitim.h"
#include "hareket.h"
#include "stoklist.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TdatamoduleORTEG *datamoduleORTEG;
AnsiString szBelgeTuru, szBelgeNo, szFirmaAdi;
double nFirmaKodu;
TDateTime dtTarih;
bool bTekrarIsim = false;
bool bStokKartiYaratilsinmi = false;

//---------------------------------------------------------------------------
__fastcall TdatamoduleORTEG::TdatamoduleORTEG(TComponent* Owner)
    : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TdatamoduleORTEG::tblSTOKHARBeforePost(TDataSet *DataSet)
{
    TObject *Sender; 

    datamoduleORTEG->tblSTOKHAR->Edit();
    tblSTOKHARBELGE_TURU->Value = szBelgeTuru;
    datamoduleORTEG->tblSTOKHAR->Edit();
    tblSTOKHARFIRMA_ADI->Value = szFirmaAdi;
    datamoduleORTEG->tblSTOKHAR->Edit();
    tblSTOKHARFIRMA_KODU->Value = nFirmaKodu;
    datamoduleORTEG->tblSTOKHAR->Edit();
    tblSTOKHARTARIH->Value = dtTarih.Val;

    if (szBelgeNo != NULL) {
        datamoduleORTEG->tblSTOKHAR->Edit();
        tblSTOKHARBELGE->Value = szBelgeNo;
    }

    if (bStokKartiYaratilsinmi == true)
    {
        frmStokKarti->Yeni1Click(Sender);
        tblSTOKANA->Edit();
        tblSTOKANAStokAdi->Value = tblSTOKHARSTOK_ADI->Value;
        tblSTOKANA->Edit();
        tblSTOKANACinsi->Value = "HAREKETTEN YARATILDI";
        tblSTOKANA->Edit();
        tblSTOKANABirimi->Value = tblSTOKHARBIRIMI->Value;
        tblSTOKANA->Edit();
        tblSTOKANABirim2->Value = tblSTOKHARBIRIM2->Value;
        tblSTOKANA->Edit();
        if (tblSTOKHARBIRIM_KATSAYISI->Value != 0)
            tblSTOKANABirim2Katsayisi->Value = tblSTOKHARBIRIM_KATSAYISI->Value;
        else
            tblSTOKANABirim2Katsayisi->Value = 1;
        // Harekete Stok Kodu Ekleniyor....
        tblSTOKHAR->Edit();
        tblSTOKHARSTOK_KODU->Value = tblSTOKANAStokKodu->Value;
        // Harekete Stok Kodu Eklendi...
        tblSTOKANA->Edit();
        tblSTOKANA->Post();
        bStokKartiYaratilsinmi = false;
        tblSTOKANA->Close();
    }
}
//---------------------------------------------------------------------------
double __fastcall TdatamoduleORTEG::Sayimi(double nSayi)
{
    AnsiString szSayi;
    char *chKaynak, *RakamDizi = "-,0123456789";

    szSayi = AnsiString(nSayi);
    for (int nSayac = 0; nSayac <= szSayi.Length(); nSayac++) {

        if (strchr(RakamDizi, szSayi.c_str()[nSayac]) == NULL)
            return 0;
    }
    return nSayi;
}

int __fastcall TdatamoduleORTEG::Yuvarla(int nDeger)
{
    int nKalan, nSonuc;

    if (szFirmaAdi == "TABLDOT") {
        nKalan = nDeger % 1000;
        nSonuc = nDeger - nKalan;
    }
    else {
        if (nDeger < 1000000) {
            nKalan = nDeger % 25000;
            if (nKalan < 12500) {
                nSonuc = ((int) nDeger / 25000) * 25000;
                if ((nDeger/1.1) > nSonuc)           // Eðer yuvarlanan deðer
                    goto YUKARI_YUVARLA_25;    // asýl meblaðdan büyükse yukarý yuvarla
            }
            else {
YUKARI_YUVARLA_25:
                nSonuc = (((int) nDeger / 25000)+1) * 25000;
            }
        }
        else {
            nKalan = nDeger % 50000;
            if (nKalan < 25000) {
                nSonuc = ((int) nDeger / 50000) * 50000;
                if ((nDeger/1.1) > nSonuc)             // Eðer yuvarlanan deðer
                    goto YUKARI_YUVARLA_50;      // asýl meblaðdan büyükse yukarý yuvarla
            }
            else {
YUKARI_YUVARLA_50:
                nSonuc = (((int) nDeger / 50000)+1) * 50000;
            }
        }
    }
    return (nSonuc < 12500 && nDeger != 0) ? 25000 : nSonuc;
}

void __fastcall TdatamoduleORTEG::tblSTOKHARMIKTARChange(TField *Sender)
{
    if (bMiktarCevirme == true) {
        tblSTOKHAR->Edit();

        if (tblSTOKHARBIRIM_KATSAYISI->Value > 0)
        {
            tblSTOKHARMIKTAR2->Value =
                tblSTOKHARMIKTAR->Value / tblSTOKHARBIRIM_KATSAYISI->Value;
        }
        else
            tblSTOKHARMIKTAR2->Value = 0;        
    }

    tblSTOKHAR->Edit();
    tblSTOKHARALIS_TUTARI->Value = TamSayiyaCevir(tblSTOKHARALIS_FIYATI->Value * tblSTOKHARMIKTAR->Value);

    tblSTOKHAR->Edit();
    tblSTOKHARSATIS_FIYATI->Value = SatisFiyatiBul(tblSTOKHARALIS_FIYATI->Value, tblSTOKHARSTOK_KODU->Value);

    tblSTOKHAR->Edit();
    tblSTOKHARSATIS_TUTARI->Value = TamSayiyaCevir(tblSTOKHARSATIS_FIYATI->Value * tblSTOKHARMIKTAR->Value);
}
//---------------------------------------------------------------------------

void __fastcall TdatamoduleORTEG::tblSTOKHARALIS_FIYATIChange(
      TField *Sender)
{
    tblSTOKHAR->Edit();
    tblSTOKHARALIS_TUTARI->Value = TamSayiyaCevir(tblSTOKHARALIS_FIYATI->Value * tblSTOKHARMIKTAR->Value);

    tblSTOKHAR->Edit();
    tblSTOKHARSATIS_FIYATI->Value = SatisFiyatiBul(tblSTOKHARALIS_FIYATI->Value, tblSTOKHARSTOK_KODU->Value);

    tblSTOKHAR->Edit();
    tblSTOKHARSATIS_TUTARI->Value = TamSayiyaCevir(tblSTOKHARSATIS_FIYATI->Value * tblSTOKHARMIKTAR->Value);
}
//---------------------------------------------------------------------------
void __fastcall TdatamoduleORTEG::tblSTOKHARSATIS_FIYATIChange(
      TField *Sender)
{
    tblSTOKHAR->Edit();
    tblSTOKHARSATIS_TUTARI->Value = TamSayiyaCevir(tblSTOKHARSATIS_FIYATI->Value * tblSTOKHARMIKTAR->Value);
}
//---------------------------------------------------------------------------

void __fastcall TdatamoduleORTEG::tblSTOKHARALIS_TUTARIChange(
      TField *Sender)
{
    tblSTOKHAR->Edit();
    tblSTOKHARKAR->Value = TamSayiyaCevir(tblSTOKHARSATIS_TUTARI->Value - tblSTOKHARALIS_TUTARI->Value);
}
//---------------------------------------------------------------------------

void __fastcall TdatamoduleORTEG::tblSTOKHARSATIS_TUTARIChange(
      TField *Sender)
{
    tblSTOKHAR->Edit();
    tblSTOKHARKAR->Value = TamSayiyaCevir(tblSTOKHARSATIS_TUTARI->Value - tblSTOKHARALIS_TUTARI->Value);
}
//---------------------------------------------------------------------------

double  __fastcall TdatamoduleORTEG::SatisFiyatiBul(double nAlisFiyati, double nStokKodu)
{
    double nSatisFiyati;

    if (szFirmaAdi == "TABLDOT")
        nSatisFiyati = Yuvarla((nAlisFiyati * 1.05));
    else {
        nSatisFiyati = Yuvarla((nAlisFiyati * 1.1));

        tblSATISFIYATI->Open();
        tblSATISFIYATI->Filter = "[STOK_KODU]="+FloatToStr(nStokKodu)+" AND [BELGE_TURU]='GIRDI' AND [ALIS_FIYATI]="+FloatToStr(nAlisFiyati);
        tblSATISFIYATI->Filtered = true;
        tblSATISFIYATI->Last();

        if (tblSATISFIYATISATIS_FIYATI->Value != 0 && nSatisFiyati != tblSATISFIYATISATIS_FIYATI->Value)
            nSatisFiyati = tblSATISFIYATISATIS_FIYATI->Value;  // Satýþ Fiyatý alýnýyor...
    }

    tblSATISFIYATI->Close();
    return TamSayiyaCevir(nSatisFiyati);
}

void __fastcall TdatamoduleORTEG::tblSTOKHARMIKTAR2Change(TField *Sender)
{
    if (bMiktarCevirme == false) {
        tblSTOKHAR->Edit();
        tblSTOKHARMIKTAR->Value = tblSTOKHARMIKTAR2->Value * tblSTOKHARBIRIM_KATSAYISI->Value;
    }
}
//---------------------------------------------------------------------------
double __fastcall TdatamoduleORTEG::TamSayiyaCevir(double nCevrilecekSayi)
{
    // ------------------------------------------------------------------------
    // Bu fonksiyon ondalýk olan nCevrilecekSayi deðiþkenini tamsayiya cevirir.
    // ------------------------------------------------------------------------
    double nSayi;

    if (nCevrilecekSayi != 0)
        nSayi = StrToFloat(FormatFloat("################", nCevrilecekSayi));
    else
        nSayi = nCevrilecekSayi;

    return nSayi;
}

void __fastcall TdatamoduleORTEG::tblSTOKHARNET_FIYATChange(TField *Sender)
{
    float nIskontolaliFiyati;

    nIskontolaliFiyati = tblSTOKHARNET_FIYAT->Value - (tblSTOKHARNET_FIYAT->Value / 100) * tblSTOKHARISKONTO->Value;
    nIskontolaliFiyati = (nIskontolaliFiyati + ((nIskontolaliFiyati / 100) * tblSTOKHARKDV->Value));
    tblSTOKHAR->Edit();
    tblSTOKHARALIS_FIYATI->Value = TamSayiyaCevir(nIskontolaliFiyati);
}
//---------------------------------------------------------------------------

void __fastcall TdatamoduleORTEG::tblSTOKHARKDVChange(TField *Sender)
{
    float nIskontolaliFiyati;

    nIskontolaliFiyati = tblSTOKHARNET_FIYAT->Value - (tblSTOKHARNET_FIYAT->Value / 100) * tblSTOKHARISKONTO->Value;
    nIskontolaliFiyati = (nIskontolaliFiyati + ((nIskontolaliFiyati / 100) * tblSTOKHARKDV->Value));
    tblSTOKHAR->Edit();
    tblSTOKHARALIS_FIYATI->Value = TamSayiyaCevir(nIskontolaliFiyati);
}
//---------------------------------------------------------------------------

void __fastcall TdatamoduleORTEG::tblSTOKHARISKONTOChange(TField *Sender)
{
    float nIskontolaliFiyati;

    nIskontolaliFiyati = tblSTOKHARNET_FIYAT->Value - (tblSTOKHARNET_FIYAT->Value / 100) * tblSTOKHARISKONTO->Value;
    nIskontolaliFiyati = (nIskontolaliFiyati + ((nIskontolaliFiyati / 100) * tblSTOKHARKDV->Value));
    tblSTOKHAR->Edit();
    tblSTOKHARALIS_FIYATI->Value = TamSayiyaCevir(nIskontolaliFiyati);
}
//---------------------------------------------------------------------------
void __fastcall TdatamoduleORTEG::tblSTOKHARSTOK_ADIChange(TField *Sender)
{
    if (bStokCagirma == true)
    {
        frmStokListesi->querySTOKLIST->Close();
        frmStokListesi->querySTOKLIST->SQL->Clear();
        frmStokListesi->querySTOKLIST->SQL->Add("SELECT * FROM STOKANA");
        frmStokListesi->querySTOKLIST->SQL->Add("WHERE STOKADI LIKE '"+tblSTOKHARSTOK_ADI->Value+"'");
        frmStokListesi->querySTOKLIST->Open();

        if (frmStokListesi->querySTOKLIST->RecordCount > 1) {
            frmStokListesi->Caption = "Stok Listesi [Hareket Ekrani]";
            frmStokListesi->Show();
            frmStokListesi->RadioButton2->Checked = true;
            frmStokListesi->editSorgu->Text = tblSTOKHARSTOK_ADI->Value;
        }
        else if (frmStokListesi->querySTOKLIST->RecordCount == 1)
        {
            if (tblSTOKHARSTOK_ADI->Value != frmStokListesi->querySTOKLISTStokAdi->Value) {
                tblSTOKHAR->Edit();
                tblSTOKHARSTOK_ADI->Value = frmStokListesi->querySTOKLISTStokAdi->Value;
            }

            tblSTOKHAR->Edit();
            tblSTOKHARSTOK_KODU->Value = frmStokListesi->querySTOKLISTStokKodu->Value;
            tblSTOKHAR->Edit();
            tblSTOKHARBIRIMI->Value = frmStokListesi->querySTOKLISTBirimi->Value;
            tblSTOKHAR->Edit();
            tblSTOKHARBIRIM2->Value = frmStokListesi->querySTOKLISTBirim2->Value;
            tblSTOKHAR->Edit();
            tblSTOKHARBIRIM_KATSAYISI->Value = frmStokListesi->querySTOKLISTBirim2Katsayisi->Value;
            tblSTOKHAR->Edit();
            tblSTOKHAR->Post();
        }
        else {
            int nDeger;

            nDeger = Application->MessageBox("Böyle bir stok yok. Yeni kayýt girecek misiniz?", "Stok Kartý Yok",
                MB_YESNO + MB_ICONQUESTION);

            if (nDeger == IDYES) {
                bStokKartiYaratilsinmi = true;
                tblSTOKHAR->Edit();
                tblSTOKHARBIRIM_KATSAYISI->Value = 1;
                // ------------------ StokBilgisi Ekleniyor -----------------------
            }
            else
                tblSTOKHAR->Cancel();
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TdatamoduleORTEG::tblSTOKHARAfterInsert(TDataSet *DataSet)
{
    // ilk girdinin ic_dagitim numarasi olmadýðýný gösteriyor.
    tblSTOKHAR->Edit();
    tblSTOKHARIC_DAGITIM_NO->Value = "-1";
}
//---------------------------------------------------------------------------

void __fastcall TdatamoduleORTEG::tblIC_DAGITIMMIKTARChange(TField *Sender)
{
    if (tblIC_DAGITIMMIKTAR->Value > 0) {
        tblIC_DAGITIM->Edit();
        tblIC_DAGITIMALIS_TUTARI->Value
            = tblIC_DAGITIMALIS_FIYATI->Value * tblIC_DAGITIMMIKTAR->Value;
        // Eðer seçilen ünite tabldot ise %5 diðerlerinde ise %10'a göre
        // satýþ fiyatý hesaplanýyor....
        tblIC_DAGITIM->Edit();
        tblIC_DAGITIMSATIS_FIYATI->Value = SatisFiyatiBul(tblIC_DAGITIMALIS_FIYATI->Value, tblIC_DAGITIMSTOK_KODU->Value);
        // ------------------------------------- hesaplama sonu...
        tblIC_DAGITIMSATIS_TUTARI->Value =
            TamSayiyaCevir(tblIC_DAGITIMSATIS_FIYATI->Value * tblIC_DAGITIMMIKTAR->Value);
        tblIC_DAGITIMKAR->Value =
            TamSayiyaCevir(tblIC_DAGITIMSATIS_TUTARI->Value - tblIC_DAGITIMALIS_TUTARI->Value);
        // *******************************************
    }
    else
        tblIC_DAGITIM->Cancel();
}
//---------------------------------------------------------------------------

void __fastcall TdatamoduleORTEG::tblIC_DAGITIMALIS_FIYATIChange(
      TField *Sender)
{
    tblIC_DAGITIM->Edit();
    tblIC_DAGITIMALIS_TUTARI->Value
        = tblIC_DAGITIMALIS_FIYATI->Value * tblIC_DAGITIMMIKTAR->Value;
    // Eðer seçilen ünite tabldot ise %5 diðerlerinde ise %10'a göre
    // satýþ fiyatý hesaplanýyor....
    tblIC_DAGITIM->Edit();
    tblIC_DAGITIMSATIS_FIYATI->Value = SatisFiyatiBul(tblIC_DAGITIMALIS_FIYATI->Value, tblIC_DAGITIMSTOK_KODU->Value);
    // ------------------------------------- hesaplama sonu...
    tblIC_DAGITIMSATIS_TUTARI->Value =
        TamSayiyaCevir(tblIC_DAGITIMSATIS_FIYATI->Value * tblIC_DAGITIMMIKTAR->Value);
    tblIC_DAGITIMKAR->Value =
        TamSayiyaCevir(tblIC_DAGITIMSATIS_TUTARI->Value - tblIC_DAGITIMALIS_TUTARI->Value);
    // *******************************************
}
//---------------------------------------------------------------------------

void __fastcall TdatamoduleORTEG::tblIC_DAGITIMSATIS_TUTARIChange(
      TField *Sender)
{
    // Belge Toplamlarý hesaplanýyor...
    frmIcDagitim->queryICDAGITIMTOPLAMI->Close();
    frmIcDagitim->queryICDAGITIMTOPLAMI->ParamByName("belge_no")->AsString = frmIcDagitim->editBelgeNo->Text;
    frmIcDagitim->queryICDAGITIMTOPLAMI->ParamByName("donem")->AsString = frmIcDagitim->comboDonem->Text;
    frmIcDagitim->queryICDAGITIMTOPLAMI->Open();

    frmIcDagitim->StatusBar1->Panels->Items[3]->Text = FormatFloat("###,###,###,###", frmIcDagitim->queryICDAGITIMTOPLAMISUMOFALIS_TUTARI->Value);
    frmIcDagitim->StatusBar1->Panels->Items[5]->Text = FormatFloat("###,###,###,###", frmIcDagitim->queryICDAGITIMTOPLAMISUMOFSATIS_TUTARI->Value);
    frmIcDagitim->StatusBar1->Panels->Items[7]->Text = FormatFloat("###,###,###,###", frmIcDagitim->queryICDAGITIMTOPLAMISUMOFKAR->Value);
}
//---------------------------------------------------------------------------

void __fastcall TdatamoduleORTEG::tblIC_DAGITIMAfterPost(TDataSet *DataSet)
{
    if (frmIcDagitim->Visible == true)
    {
        frmIcDagitim->queryICDAGITIMTOPLAMI->Close();
        frmIcDagitim->queryICDAGITIMTOPLAMI->ParamByName("belge_no")->AsString = frmIcDagitim->editBelgeNo->Text;
        frmIcDagitim->queryICDAGITIMTOPLAMI->ParamByName("donem")->AsString = frmIcDagitim->comboDonem->Text;
        frmIcDagitim->queryICDAGITIMTOPLAMI->Open();

        frmIcDagitim->StatusBar1->Panels->Items[3]->Text = FormatFloat("###,###,###,###", frmIcDagitim->queryICDAGITIMTOPLAMISUMOFALIS_TUTARI->Value);
        frmIcDagitim->StatusBar1->Panels->Items[5]->Text = FormatFloat("###,###,###,###", frmIcDagitim->queryICDAGITIMTOPLAMISUMOFSATIS_TUTARI->Value);
        frmIcDagitim->StatusBar1->Panels->Items[7]->Text = FormatFloat("###,###,###,###", frmIcDagitim->queryICDAGITIMTOPLAMISUMOFKAR->Value);
    }
}
//---------------------------------------------------------------------------

AnsiString __fastcall TdatamoduleORTEG::Yaziyla(const double nGercekSayi)
{
    char *pDizi;
    char *Birler[10] = { "", "BÝR", "ÝKÝ", "ÜÇ", "DÖRT", "BEÞ", "ALTI", "YEDÝ", "SEKÝZ", "DOKUZ"};
    char *Onlar[10]  = { "", "ON", "YÝRMÝ", "OTUZ", "KIRK", "ELLÝ", "ALTMIÞ", "YETMÝÞ", "SEKSEN", "DOKSAN"};
    char *Diger[7]   = { "", "BÝN", "MÝLYON", "MÝLYAR", "TRÝLYON", "KATTRÝLYON", "YÜZ"};
    int nBasamak, nSayi, nHaneSayisi, nDiziUzunlugu;
    bool bUstBasamaktaSayiVarmi = false; // Bir üst hanenin sayisi varmi default deðeri
    AnsiString szYaziyla;    
    // -------------------------------------------------------------------------

    nDiziUzunlugu = FloatToStr(nGercekSayi).Length();

    pDizi = new char[nDiziUzunlugu+1];
    strcpy(pDizi, FloatToStr(nGercekSayi).c_str());

    for (int nSayac = 0; nSayac < nDiziUzunlugu; ++nSayac) {
        nBasamak = (int) strlen(&pDizi[nSayac]) % 3;
        nHaneSayisi = (int) strlen(&pDizi[nSayac]) / 3;
        nSayi = (pDizi[nSayac]) - '0';

        switch (nBasamak) {
            case 1: szYaziyla += AnsiString(Birler[nHaneSayisi == 1 && bUstBasamaktaSayiVarmi == false && nSayi == 1 ? 0 : nSayi])
                                 // Birler hanesi nSayiya göre diziden çaðrýlýr. Yalnýz bir üst basamaðýn durumuna göre
                                 // yazýlmasý veya yazýlmamasý gereken durumlar vardýr. 'bUstBasamaktaSayiVarmi' bool deðiþkeni bunu kontrol eder.
                                 // Mesela 1.000 = bir bin deðil; bin diye okunur. ama 51.000 = ellibirbin diye okunur. Ýþte yukarýda bunun kontrolü vardýr.
                              +  AnsiString(Diger[nSayi == 0 && bUstBasamaktaSayiVarmi == false ? 0 : nHaneSayisi]);
                                 // Bir üst kýsýmda hanenin birler, binler, milyonlar, milyarlar ve trilyon olup olmadýðýný gösterir.
                                 // Ayrýca burada 'bUstBasamaktaSayiVarmi' bool deðiþkeni 1.000.000 = bir milyon bin yazmasýný engeller ve sadece birmilyon yazar.
                    bUstBasamaktaSayiVarmi = false;
                    // Burada üst basamak sayýsý deðiþkeni default hale gelir.
                    break; // Birler ve Haneler

            case 2: szYaziyla += AnsiString(Onlar[nSayi]);
                    // Onlar hanesi yazdýrýlýr.
                    bUstBasamaktaSayiVarmi = (nSayi == 0 && bUstBasamaktaSayiVarmi == false) ? false : true;
                    // 'bUstBasamaktaSayiVarmi' bool deðiþkeni nSayi deðerinin 0 ve üst hanesinin oluð olmadýðýný kontrol eder.
                    break; // Onlar

            case 0: szYaziyla += AnsiString(Birler[nSayi == 1 ? 0: nSayi])+AnsiString(Diger[nSayi == 0 ? 0: 6]) ;
                    bUstBasamaktaSayiVarmi = (nSayi == 0) ? false : true;
                    // 'bUstBasamaktaSayiVarmi' bool deðiþkeni nSayi deðerinin 0 kontrol eder.
                    break; // Yüzler
        }
    }

    delete (pDizi);
    return szYaziyla;
}

void __fastcall TdatamoduleORTEG::tblBARKODBeforePost(TDataSet *DataSet)
{
    if (frmStokKarti->Visible == true)
    {
        tblBARKOD->Edit();
        tblBARKODSTOK_KODU->Value = datamoduleORTEG->tblSTOKANAStokKodu->Value;
        tblBARKOD->Edit();
        tblBARKODSTOK_ADI->Value = datamoduleORTEG->tblSTOKANAStokAdi->Value;
    }
    else if (frmHareket->Visible == true)
    {
        tblBARKOD->Edit();
        tblBARKODSTOK_KODU->Value = datamoduleORTEG->tblSTOKHARSTOK_KODU->Value;
        tblBARKOD->Edit();
        tblBARKODSTOK_ADI->Value = datamoduleORTEG->tblSTOKHARSTOK_ADI->Value;
    }
}
//---------------------------------------------------------------------------


void __fastcall TdatamoduleORTEG::tblSTOKHARSTOK_KODUChange(TField *Sender)
{
    if (bStokCagirma == false)
    {
        frmStokListesi->querySTOKLIST->Close();
        frmStokListesi->querySTOKLIST->SQL->Clear();
        frmStokListesi->querySTOKLIST->SQL->Add("SELECT * FROM STOKANA");
        frmStokListesi->querySTOKLIST->SQL->Add("WHERE STOKKODU="+FloatToStr(tblSTOKHARSTOK_KODU->Value));
        frmStokListesi->querySTOKLIST->Open();

        if (frmStokListesi->querySTOKLIST->RecordCount > 0) {
            tblSTOKHAR->Edit();
            tblSTOKHARSTOK_ADI->Value = frmStokListesi->querySTOKLISTStokAdi->Value;
            tblSTOKHAR->Edit();
            tblSTOKHARBIRIMI->Value = frmStokListesi->querySTOKLISTBirimi->Value;
            tblSTOKHAR->Edit();
            tblSTOKHARBIRIM2->Value = frmStokListesi->querySTOKLISTBirim2->Value;
            tblSTOKHAR->Edit();
            tblSTOKHARBIRIM_KATSAYISI->Value = frmStokListesi->querySTOKLISTBirim2Katsayisi->Value;
            tblSTOKHAR->Edit();
            tblSTOKHAR->Post();
        }

        if (frmHareket->Visible == true)
        {
            frmHareket->queryGIRISTOPLAMI->Close();
            frmHareket->queryGIRISTOPLAMI->Open();
            frmHareket->queryCIKISTOPLAMI->Close();
            frmHareket->queryCIKISTOPLAMI->Open();

            frmHareket->StatusBar1->Panels->Items[1]->Text = datamoduleORTEG->tblSTOKHARSTOK_ADI->Value;
            frmHareket->StatusBar1->Panels->Items[3]->Text =
                    FormatFloat("###,###,###,###.###", (frmHareket->queryGIRISTOPLAMISUMOFmiktar->Value - frmHareket->queryCIKISTOPLAMISUMOFmiktar->Value))+ " ";
        }
    }
}
//---------------------------------------------------------------------------


void __fastcall TdatamoduleORTEG::tblSTOKHARAfterDelete(TDataSet *DataSet)
{
    if (frmHareket->Visible == true)
    {
        frmHareket->HareketToplamiGetir();

        frmHareket->queryGIRISTOPLAMI->Close();
        frmHareket->queryGIRISTOPLAMI->Open();
        frmHareket->queryCIKISTOPLAMI->Close();
        frmHareket->queryCIKISTOPLAMI->Open();

        frmHareket->StatusBar1->Panels->Items[1]->Text = datamoduleORTEG->tblSTOKHARSTOK_ADI->Value;
        frmHareket->StatusBar1->Panels->Items[3]->Text =
            FormatFloat("###,###,###,###.###", (frmHareket->queryGIRISTOPLAMISUMOFmiktar->Value - frmHareket->queryCIKISTOPLAMISUMOFmiktar->Value))+ " ";
    }

    if (bStokKartiYaratilsinmi == true)
        bStokKartiYaratilsinmi = false;
}
//---------------------------------------------------------------------------


void __fastcall TdatamoduleORTEG::tblSTOKHARAfterPost(TDataSet *DataSet)
{
    if (frmHareket->Visible == true)
    {
        frmHareket->HareketToplamiGetir();

        frmHareket->queryGIRISTOPLAMI->Close();
        frmHareket->queryGIRISTOPLAMI->Open();
        frmHareket->queryCIKISTOPLAMI->Close();
        frmHareket->queryCIKISTOPLAMI->Open();

        frmHareket->StatusBar1->Panels->Items[1]->Text = datamoduleORTEG->tblSTOKHARSTOK_ADI->Value;
        frmHareket->StatusBar1->Panels->Items[3]->Text =
            FormatFloat("###,###,###,###.###", (frmHareket->queryGIRISTOPLAMISUMOFmiktar->Value - frmHareket->queryCIKISTOPLAMISUMOFmiktar->Value))+ " ";
    }
}
//---------------------------------------------------------------------------

void __fastcall TdatamoduleORTEG::tblSTOKHARAfterCancel(TDataSet *DataSet)
{
    if (bStokKartiYaratilsinmi == true)
        bStokKartiYaratilsinmi = false;
}
//---------------------------------------------------------------------------

