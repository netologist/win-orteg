//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "transfer.h"
#include "hareket.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmTransfer *frmTransfer;
//---------------------------------------------------------------------------
__fastcall TfrmTransfer::TfrmTransfer(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmTransfer::DosyayaKaydet(FILE *fpDosya, TRANSFER_FORMU *tfTransfer, long nKayitNo)
{
    long DosyaYeri;
    
    DosyaYeri = (sizeof(TRANSFER_FORMU) * (nKayitNo-1));
    fseek(fpDosya, DosyaYeri, SEEK_SET);
    fwrite(tfTransfer, 1, sizeof(TRANSFER_FORMU), fpDosya);
}

//---------------------------------------------------------------------------
int __fastcall TfrmTransfer::DosyadanYukle(FILE *fpDosya, TRANSFER_FORMU *tfTransfer, long nKayitNo)
{
    long DosyaYeri;

    DosyaYeri = (sizeof(TRANSFER_FORMU) * (nKayitNo));
    fseek(fpDosya, DosyaYeri, SEEK_SET);
    return fread(tfTransfer, 1, sizeof(TRANSFER_FORMU), fpDosya);
}

//---------------------------------------------------------------------------
AnsiString __fastcall TfrmTransfer::BelgeNoHazirla(TRANSFER_FORMU *tfTransfer)
{
    int nSayac, nBelgeNo;
    AnsiString szBelgeNo;
    char *chIslemTuru[6] = { "IC DAGITIM",
                             "IADE IC DAGITIM",
                             "FATURA",
                             "DEVIR",
                             "TEMIZLIK",
                             "FIRMAYA IADE" };

    // Belge No double degere cevrildi.
    nBelgeNo = atoi(tfTransfer->szBelgeNo);

    // Ýþlem Türü bulundur. Bu kod bir sürü if kodu kullanmamak için kullanýldý.
    for (nSayac = 0; nSayac < 6; ++nSayac) {
        if (AnsiString(tfTransfer->szIslemTuru) == AnsiString(chIslemTuru[nSayac]))
            break;
    }

    switch (nSayac)
    {
        case TEMIZLIK:
        case FIRMAYA_IADE:
        case IC_DAGITIM:
            szBelgeNo = szBelgeNo.sprintf("Ç: %04d", nBelgeNo);
        break;
        case IADE_IC_DAGITIM:
            szBelgeNo = szBelgeNo.sprintf("Ý: %04d", nBelgeNo);
        break;
        case FATURA:
            szBelgeNo = szBelgeNo.sprintf("G: %04d", nBelgeNo);
        break;
    }

    return szBelgeNo;
}

//---------------------------------------------------------------------------
void __fastcall TfrmTransfer::TexttenORTEGe(TRANSFER_FORMU *tfTransfer)
{
    AnsiString szIcDagitimBelgeTuru;

    if (AnsiString(tfTransfer->szIslemTuru) == "IADE IC DAGITIM"
        || AnsiString(tfTransfer->szIslemTuru) == "FATURA")
    {
        szBelgeTuru = "GIRDI";

        if (tfTransfer->nFirmaKodu >= 0)
            szIcDagitimBelgeTuru = "GIRDI BELGESÝ";
        else
            szIcDagitimBelgeTuru = "IADE BELGESÝ";
    }
    else if (AnsiString(tfTransfer->szIslemTuru) == "TEMIZLIK")
    {
        szBelgeTuru = "TEMIZLIK";
        szIcDagitimBelgeTuru = "TEMIZLIK TUTANAGI";
    }
    else
    {
        szBelgeTuru = "CIKTI";
        szIcDagitimBelgeTuru = "CIKTI BELGESÝ";
    }

    // ------------------------------------------------ STOKHAR KAYDEDÝLÝYOR...
    nFirmaKodu = tfTransfer->nFirmaKodu;
    szFirmaAdi = tfTransfer->szFirmaAdi;
    szBelgeNo = BelgeNoHazirla(tfTransfer);
    dtTarih = tfTransfer->dtTarih;

    datamoduleORTEG->tblSTOKHAR->Insert();
    datamoduleORTEG->tblSTOKHAR->Edit();
    datamoduleORTEG->tblSTOKHARIC_DAGITIM_NO->Value = szBelgeNo;
    bStokCagirma = false; // KODA GÖRE GÝRÝÞ...
    datamoduleORTEG->tblSTOKHAR->Edit();
    datamoduleORTEG->tblSTOKHARSTOK_KODU->Value = tfTransfer->nStokKodu;
    datamoduleORTEG->tblSTOKHAR->Edit();
    datamoduleORTEG->tblSTOKHARSTOK_ADI->Value = AnsiString(tfTransfer->szStokAdi);
    datamoduleORTEG->tblSTOKHAR->Edit();
    datamoduleORTEG->tblSTOKHARBIRIMI->Value = AnsiString(tfTransfer->szBirimi_1);
    datamoduleORTEG->tblSTOKHAR->Edit();
    datamoduleORTEG->tblSTOKHARBIRIM2->Value = AnsiString(tfTransfer->szBirimi_2);
    datamoduleORTEG->tblSTOKHAR->Edit();
    datamoduleORTEG->tblSTOKHARBIRIM_KATSAYISI->Value = tfTransfer->nBirimKatsayisi;
    datamoduleORTEG->tblSTOKHAR->Edit();
    datamoduleORTEG->tblSTOKHARMIKTAR->Value = tfTransfer->nMiktar_1;
    datamoduleORTEG->tblSTOKHAR->Edit();
    datamoduleORTEG->tblSTOKHARMIKTAR2->Value = tfTransfer->nMiktar_2;
    datamoduleORTEG->tblSTOKHAR->Edit();
    datamoduleORTEG->tblSTOKHARALIS_FIYATI->Value = tfTransfer->nAlisFiyati;
    datamoduleORTEG->tblSTOKHAR->Edit();
    datamoduleORTEG->tblSTOKHARALIS_TUTARI->Value = tfTransfer->nAlisTutari;
    datamoduleORTEG->tblSTOKHARSATIS_FIYATI->Value = tfTransfer->nSatisFiyati;
    datamoduleORTEG->tblSTOKHAR->Edit();
    datamoduleORTEG->tblSTOKHARSATIS_TUTARI->Value = tfTransfer->nSatisTutari;
    datamoduleORTEG->tblSTOKHARKAR->Value = tfTransfer->nKar;
    datamoduleORTEG->tblSTOKHAR->Edit();
    datamoduleORTEG->tblSTOKHAR->Post();
    // -------------------------------------------------- STOKHAR KAYDEDÝLDÝ...

    // ------------------------------------------------ ÝÇDAÐITIM KAYDEDÝLÝYOR...
    datamoduleORTEG->tblIC_DAGITIM->Insert();
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMBELGE_TURU->Value = szIcDagitimBelgeTuru;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMHAREKET_NO->Value = datamoduleORTEG->tblSTOKHARHAREKET_NO->Value;
    // dönem kodu giriliyor .......
    datamoduleORTEG->tblDONEM->First();
    while (!datamoduleORTEG->tblDONEM->Eof) {
        if (tfTransfer->dtTarih.Val >= datamoduleORTEG->tblDONEMBASLANGIC->Value && tfTransfer->dtTarih.Val <= datamoduleORTEG->tblDONEMBITIS->Value+1)
        {
            datamoduleORTEG->tblIC_DAGITIM->Edit();
            datamoduleORTEG->tblIC_DAGITIMDONEM->Value = datamoduleORTEG->tblDONEMDONEM_TANIMI->Value;
        }
        datamoduleORTEG->tblDONEM->Next();
    }
    // dönem kodu girildi...
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMTARIH->Value = tfTransfer->dtTarih.Val;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMFIRMA_KODU->Value = nFirmaKodu;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMFIRMA_ADI->Value = szFirmaAdi;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMBELGE_NO->Value = szBelgeNo;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMSTOK_KODU->Value = tfTransfer->nStokKodu;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMSTOK_ADI->Value = AnsiString(tfTransfer->szStokAdi);
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMBIRIMI->Value = AnsiString(tfTransfer->szBirimi_1);
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMMIKTAR->Value = tfTransfer->nMiktar_1;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMALIS_FIYATI->Value = tfTransfer->nAlisFiyati;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMALIS_TUTARI->Value = tfTransfer->nAlisTutari;
    datamoduleORTEG->tblIC_DAGITIMSATIS_FIYATI->Value = tfTransfer->nSatisFiyati;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIMSATIS_TUTARI->Value = tfTransfer->nSatisTutari;
    datamoduleORTEG->tblIC_DAGITIMKAR->Value = tfTransfer->nKar;
    datamoduleORTEG->tblIC_DAGITIM->Edit();
    datamoduleORTEG->tblIC_DAGITIM->Post();
    // -------------------------------------------------- ÝÇDAÐITIM KAYDEDÝLDÝ...
}

void __fastcall TfrmTransfer::ORTEGdenTexte(TRANSFER_FORMU *tfTransfer)
{
    // Ýþlem Türü ayarlanýyor...
    if (queryTRANSFERBELGE_TURU->Value == "GIRDI BELGESÝ")
        strcpy(tfTransfer->szIslemTuru, "FATURA");
    else if (queryTRANSFERBELGE_TURU->Value == "IADE BELGESÝ")
        strcpy(tfTransfer->szIslemTuru, "IADE IC DAGITIM");
    else if (queryTRANSFERBELGE_TURU->Value == "TEMIZLIK TUTANAGI")
        strcpy(tfTransfer->szIslemTuru, "TEMIZLIK");
    else if (queryTRANSFERBELGE_TURU->Value == "CIKTI BELGESÝ")
    {
        if (queryTRANSFERFIRMA_KODU->Value >= 0)
            strcpy(tfTransfer->szIslemTuru, "FIRMAYA IADE");
        else
            strcpy(tfTransfer->szIslemTuru, "IC DAGITIM");
    }
    // Ýþlem Türü ayarlandý...

    tfTransfer->dtTarih = queryTRANSFERTARIH->Value;

    if (queryTRANSFERBELGE_NO->Value.Length() > 0)
        strcpy(tfTransfer->szBelgeNo, strchr(queryTRANSFERBELGE_NO->Value.c_str(), ' '));
    tfTransfer->nStokKodu = queryTRANSFERSTOK_KODU->Value;

    if (queryTRANSFERSTOK_ADI->Value.Length() > 0)
        strcpy(tfTransfer->szStokAdi, queryTRANSFERSTOK_ADI->Value.c_str());

    tfTransfer->nMiktar_1 = queryTRANSFERMIKTAR->Value;

    if (queryTRANSFERBIRIMI->Value.Length() > 0)
        strcpy(tfTransfer->szBirimi_1, queryTRANSFERBIRIMI->Value.c_str());

    tfTransfer->nFirmaKodu = queryTRANSFERFIRMA_KODU->Value;

    if (queryTRANSFERFIRMA_ADI->Value.Length() > 0)
        strcpy(tfTransfer->szFirmaAdi, queryTRANSFERFIRMA_ADI->Value.c_str());

    tfTransfer->nAlisFiyati = queryTRANSFERALIS_FIYATI->Value;
    tfTransfer->nAlisTutari = queryTRANSFERALIS_TUTARI->Value;
    tfTransfer->nSatisFiyati = queryTRANSFERSATIS_FIYATI->Value;
    tfTransfer->nSatisTutari = queryTRANSFERSATIS_TUTARI->Value;
    tfTransfer->nKar = queryTRANSFERKAR->Value;

    // 2. Birim, Birim Katsayýsý ve 2. Miktar bilgileri stok kartýndan alýnýyor....
    strcpy(tfTransfer->szBirimi_2, querySTOKANABirim2->Value.c_str());
    tfTransfer->nBirimKatsayisi = querySTOKANABirim2Katsayisi->Value;
    if (tfTransfer->nBirimKatsayisi > 0)
        tfTransfer->nMiktar_2 = tfTransfer->nMiktar_1 / tfTransfer->nBirimKatsayisi;
    // Stok kartýndan alýnýdý....
}

void __fastcall TfrmTransfer::BitBtn1Click(TObject *Sender)
{
    FILE *fpTransferDosyasi;
    TRANSFER_FORMU tfTransfer;
    AnsiString szIslemTuruKontrolu;

    // TRANSFER_FORMU yapýsýnýn içi temizleniyor...
    memset(&tfTransfer, NULL, sizeof(TRANSFER_FORMU));

    // Yeni Dosya açýlýyor...
    if ((fpTransferDosyasi = fopen(DosyaKaydetIletisimKutusu().c_str(), "wb")) != NULL) {
        szIslemTuruKontrolu = "and (belge_turu =  'CIKTI BELGESÝ' or belge_turu =  'TEMIZLIK TUTANAGI' or belge_turu =  'IADE BELGESÝ' or belge_turu =  'GIRDI BELGESÝ')";

        if (checkboxICDAGITIM->Checked == true) { szIslemTuruKontrolu[19] = ' '; szIslemTuruKontrolu[20] = '\''; }
        else { szIslemTuruKontrolu[19] = '\''; szIslemTuruKontrolu[20] = ' '; }

        if (checkboxTEMIZLIK->Checked == true) { szIslemTuruKontrolu[52] = ' '; szIslemTuruKontrolu[53] = '\''; }
        else { szIslemTuruKontrolu[52] = '\''; szIslemTuruKontrolu[53] = ' '; }

        if (checkboxIADE->Checked == true) { szIslemTuruKontrolu[89] = ' '; szIslemTuruKontrolu[90] = '\''; }
        else { szIslemTuruKontrolu[89] = '\''; szIslemTuruKontrolu[90] = ' '; }

        if (checkboxFATURA->Checked == true) { szIslemTuruKontrolu[121] = ' '; szIslemTuruKontrolu[122] = '\''; }
        else { szIslemTuruKontrolu[121] = '\''; szIslemTuruKontrolu[122] = ' '; }

        // Sorgu HAZIRLANIYOR....
        queryTRANSFER->Close();
        queryTRANSFER->SQL->Clear();
        queryTRANSFER->SQL->Add("SELECT BELGE_TURU, BELGE_NO, FIRMA_KODU, FIRMA_ADI, DONEM, TARIH, STOK_KODU, STOK_ADI, SUM(MIKTAR)MIKTAR, BIRIMI, ALIS_FIYATI, SUM(ALIS_TUTARI)ALIS_TUTARI, SATIS_FIYATI, SUM(SATIS_TUTARI)SATIS_TUTARI, SUM(KAR)KAR FROM ICDAGITIM");
        queryTRANSFER->SQL->Add("where (tarih >= '"+datetimeBASLANGIC->DateTime.DateString()+"' and tarih <= '"+datetimeBITIS->DateTime.DateString()+"')");
        queryTRANSFER->SQL->Add(szIslemTuruKontrolu);
        queryTRANSFER->SQL->Add("GROUP BY BELGE_TURU, BELGE_NO, FIRMA_KODU, FIRMA_ADI, DONEM, TARIH, STOK_KODU, STOK_ADI, MIKTAR, BIRIMI, ALIS_FIYATI, ALIS_TUTARI, SATIS_FIYATI, SATIS_TUTARI, KAR");
        queryTRANSFER->Open();
        querySTOKANA->Open();
        // Sorgu HAZIRLANDI....

        queryTRANSFER->First();
        while (!queryTRANSFER->Eof)
        {
            ProgressBar1->Position = (queryTRANSFER->RecNo*100) / queryTRANSFER->RecordCount;
            Label1->Caption = "% "+AnsiString(ProgressBar1->Position)+" kaydedildi...";
            Label1->Refresh();
            memset(&tfTransfer, NULL, sizeof(TRANSFER_FORMU));
            ORTEGdenTexte(&tfTransfer);
            DosyayaKaydet(fpTransferDosyasi, &tfTransfer, queryTRANSFER->RecNo);

            queryTRANSFER->Next();
        }
        queryTRANSFER->Close();
        querySTOKANA->Close();

        ProgressBar1->Position = 0;
        Label1->Caption = "% "+AnsiString(ProgressBar1->Position)+" aktarýldý...";
        Label1->Refresh();

        // Dosya kapatýlýyor...
        fclose(fpTransferDosyasi);
    }
}
//---------------------------------------------------------------------------
AnsiString __fastcall TfrmTransfer::DosyaAcIletisimKutusu(void)
{
    OpenDialog1->Filter = "okossoft Metin Dosyasý (*.oxt)|*.OXT";
    OpenDialog1->Execute();

    if (OpenDialog1->FileName.Length() > 0)
    {
        if (strstr(OpenDialog1->FileName.c_str(), ".OXT") == NULL)
        {
            if (OpenDialog1->FileName[OpenDialog1->FileName.Length()] == '.')
                return OpenDialog1->FileName+"OXT";
            else
                return OpenDialog1->FileName+".OXT";
        }
        else
            return OpenDialog1->FileName;
    }
    return OpenDialog1->FileName;
}


AnsiString __fastcall TfrmTransfer::DosyaKaydetIletisimKutusu(void)
{
    SaveDialog1->Filter = "okossoft Metin Dosyasý (*.oxt)|*.OXT";
    SaveDialog1->Execute();

    if (SaveDialog1->FileName.Length() > 0) {
        if (strstr(SaveDialog1->FileName.c_str(), ".OXT") == NULL) {
            if (SaveDialog1->FileName[SaveDialog1->FileName.Length()] == '.')
                return SaveDialog1->FileName+"OXT";
            else
                return SaveDialog1->FileName+".OXT";
        }
        else
            return SaveDialog1->FileName;
    }
    return SaveDialog1->FileName;
}
//---------------------------------------------------------------------------

void __fastcall TfrmTransfer::FormShow(TObject *Sender)
{
    datetimeBASLANGIC->DateTime = datetimeBASLANGIC->DateTime.CurrentDate();
    datetimeBITIS->DateTime = datetimeBITIS->DateTime.CurrentDate();

    // Veri Tabaný açýlýyor...
    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblFIRMA->Open();
    datamoduleORTEG->tblFIRMA->Filtered = true;
    datamoduleORTEG->tblUNITE->Open();
    datamoduleORTEG->tblUNITE->Filtered = true;
    datamoduleORTEG->tblSTOKANA->Open();
    datamoduleORTEG->tblSTOKANA->Filtered = true;
    datamoduleORTEG->tblSTOKHAR->Open();
    datamoduleORTEG->tblIC_DAGITIM->Open();
    // Veri Tabaný açýldý...
}
//---------------------------------------------------------------------------
long __fastcall TfrmTransfer::DosyaBoyu(FILE *stream)
{
   long curpos, length;

   curpos = ftell(stream);
   fseek(stream, 0L, SEEK_END);
   length = ftell(stream);
   fseek(stream, curpos, SEEK_SET);

   return length;
}

bool __fastcall TfrmTransfer::KayitVarmi(TRANSFER_FORMU *tfTransfer)
{
    char *pVirgulDuzenle;
    AnsiString szSorguSatiri, szIslemTuru, szMiktar;
/*
    // Ýþlem Türü ayarlanýyor...
    if (AnsiString(tfTransfer->szIslemTuru) == "FATURA") szIslemTuru = "GIRDI BELGESÝ";
    else if (AnsiString(tfTransfer->szIslemTuru) == "IADE IC DAGITIM") szIslemTuru = "IADE BELGESÝ";
    else if (AnsiString(tfTransfer->szIslemTuru) == "TEMIZLIK") szIslemTuru = "TEMIZLIK TUTANAGI";
    else  szIslemTuru = "CIKTI BELGESÝ";
    // Ýþlem Türü ayarlandý...
*/
    // Ýþlem Türü ayarlanýyor...
    if (AnsiString(tfTransfer->szIslemTuru) == "FATURA") szIslemTuru = "GIRDI";
    else if (AnsiString(tfTransfer->szIslemTuru) == "IADE IC DAGITIM") szIslemTuru = "GIRDI";
    else if (AnsiString(tfTransfer->szIslemTuru) == "TEMIZLIK") szIslemTuru = "TEMIZLIK";
    else  szIslemTuru = "CIKTI";
    // Ýþlem Türü ayarlandý...

    szMiktar = AnsiString(tfTransfer->nMiktar_1);
    if ((pVirgulDuzenle = strchr(szMiktar.c_str(), ',')) != NULL)
        *pVirgulDuzenle = '.';

    querySTOKHAR->Close();
    querySTOKHAR->SQL->Clear();
    querySTOKHAR->SQL->Add("select * from stokhar");
    szSorguSatiri = "where BELGE_TURU='"+szIslemTuru+"' and IC_DAGITIM_NO LIKE '%"+BelgeNoHazirla(tfTransfer)+"%' and STOK_KODU="+AnsiString(tfTransfer->nStokKodu)+" and ALIS_FIYATI="+AnsiString(tfTransfer->nAlisFiyati)+" and MIKTAR="+szMiktar;
    querySTOKHAR->SQL->Add(szSorguSatiri);
    querySTOKHAR->Open();

    if (querySTOKHAR->RecordCount > 0) {
        querySTOKHAR->Close();
        return true; // Kayýt var.
    }

    querySTOKHAR->Close();
    return false; // Kayýt yok.
}

bool __fastcall TfrmTransfer::MetinDosyasiFiltresi(TRANSFER_FORMU *tfTransfer)
{
    int nSayac;
    char *chIslemTuru[6] = { NULL, NULL, NULL, NULL, NULL, NULL };

    if (checkboxICDAGITIM->Checked == true) {
         chIslemTuru[0] = "IC DAGITIM";
         chIslemTuru[5] = "FIRMAYA IADE";
    }
    if (checkboxIADE->Checked == true)
        chIslemTuru[1] = "IADE IC DAGITIM";

    if (checkboxFATURA->Checked == true)
        chIslemTuru[2] = "FATURA";

    if (checkboxTEMIZLIK->Checked == true)
        chIslemTuru[4] = "TEMIZLIK";

    if (tfTransfer->dtTarih < datetimeBASLANGIC->DateTime && tfTransfer->dtTarih > datetimeBITIS->DateTime)
        return false; // Bu tarihler arasýnda deðilse
    else {
        for (nSayac = 0; nSayac < 6; ++nSayac)
            if ( AnsiString(tfTransfer->szIslemTuru) == AnsiString(chIslemTuru[nSayac]) )
                return true; // Ýstenilen þartlara uygun...
    }

    return false; // Sonuç uygun deðil
}

void __fastcall TfrmTransfer::FirmaKartiKontrol(TRANSFER_FORMU *tfTransfer)
{
    datamoduleORTEG->tblFIRMA->Filter = "[FIRMA_KODU]="+AnsiString(tfTransfer->nFirmaKodu);

    if (datamoduleORTEG->tblFIRMA->RecordCount == 0) {
        datamoduleORTEG->tblFIRMA->Insert();
        datamoduleORTEG->tblFIRMA->Edit();
        datamoduleORTEG->tblFIRMAFIRMA_KODU->Value = tfTransfer->nFirmaKodu;
        datamoduleORTEG->tblFIRMA->Edit();
        datamoduleORTEG->tblFIRMAFIRMA_ADI->Value = AnsiString(tfTransfer->szFirmaAdi);
        datamoduleORTEG->tblFIRMA->Edit();
        datamoduleORTEG->tblFIRMA->Post();
    }
}

void __fastcall TfrmTransfer::UniteKartiKontrol(TRANSFER_FORMU *tfTransfer)
{
    datamoduleORTEG->tblUNITE->Filter = "[UNITE_ADI]='"+AnsiString(tfTransfer->szFirmaAdi)+"'";

    if (datamoduleORTEG->tblUNITE->RecordCount == 0) {
        datamoduleORTEG->tblUNITE->Insert();
        datamoduleORTEG->tblUNITE->Edit();
        datamoduleORTEG->tblUNITEUNITE_ADI->Value = AnsiString(tfTransfer->szFirmaAdi);
        datamoduleORTEG->tblUNITE->Edit();
        datamoduleORTEG->tblUNITEKISIM_AMIRI_ADI->Value = "~!~ OtoMaTiK YaRatILdI ~!~";
        datamoduleORTEG->tblUNITE->Edit();
        datamoduleORTEG->tblUNITEKISIM_AMIRI_RUTBESI->Value = "~!~ OtoMaTiK YaRatILdI ~!~";
        datamoduleORTEG->tblUNITE->Edit();
        datamoduleORTEG->tblUNITEKISIM_AMIRI_GOREVI->Value = "~!~ OtoMaTiK YaRatILdI ~!~";
        datamoduleORTEG->tblUNITE->Edit();
        datamoduleORTEG->tblUNITEUNITE_ADI->Value = AnsiString(tfTransfer->szFirmaAdi);
        datamoduleORTEG->tblUNITE->Edit();
        datamoduleORTEG->tblUNITE->Post();
    }
}

void __fastcall TfrmTransfer::StokKartiKontrol(TRANSFER_FORMU *tfTransfer)
{
    datamoduleORTEG->tblSTOKANA->Filter = "[StokKodu]='"+AnsiString(tfTransfer->nStokKodu)+"'";

    if (datamoduleORTEG->tblSTOKANA->RecordCount == 0) {
        datamoduleORTEG->tblSTOKANA->Insert();
        datamoduleORTEG->tblSTOKANA->Edit();
        datamoduleORTEG->tblSTOKANACinsi->Value = "~!~ OTOMATÝK YARATILDI ~!~";
        datamoduleORTEG->tblSTOKANA->Edit();
        datamoduleORTEG->tblSTOKANAStokKodu->Value = tfTransfer->nStokKodu;
        datamoduleORTEG->tblSTOKANA->Edit();
        datamoduleORTEG->tblSTOKANAStokAdi->Value = AnsiString(tfTransfer->szStokAdi);
        datamoduleORTEG->tblSTOKANA->Edit();
        datamoduleORTEG->tblSTOKANABirimi->Value = AnsiString(tfTransfer->szBirimi_1);
        datamoduleORTEG->tblSTOKANA->Edit();
        datamoduleORTEG->tblSTOKANABirim2->Value = AnsiString(tfTransfer->szBirimi_2);
        datamoduleORTEG->tblSTOKANA->Edit();
        datamoduleORTEG->tblSTOKANABirim2Katsayisi->Value = tfTransfer->nBirimKatsayisi;
        datamoduleORTEG->tblSTOKANA->Edit();
        datamoduleORTEG->tblSTOKANA->Post();
    }
    else {
        if (datamoduleORTEG->tblSTOKANAStokAdi->Value.Length() > 0) {
            memset(tfTransfer->szStokAdi, 0x0, strlen(tfTransfer->szStokAdi));
            strcpy(tfTransfer->szStokAdi, datamoduleORTEG->tblSTOKANAStokAdi->Value.c_str());
        }
        else {
            datamoduleORTEG->tblSTOKANA->Edit();
            datamoduleORTEG->tblSTOKANAStokAdi->Value = AnsiString(tfTransfer->szStokAdi);
            datamoduleORTEG->tblSTOKANA->Edit();
            datamoduleORTEG->tblSTOKANA->Post();
        }
    }
}

void __fastcall TfrmTransfer::BitBtn2Click(TObject *Sender)
{
    int nSayac;
    long nHareketAdedi;
    FILE *fpTransferDosyasi;
    TRANSFER_FORMU tfTransfer;

    // TRANSFER_FORMU yapýsýnýn içi temizleniyor...
    memset(&tfTransfer, NULL, sizeof(TRANSFER_FORMU));
    // Yeni Dosya açýlýyor...
    if((fpTransferDosyasi = fopen(DosyaKaydetIletisimKutusu().c_str(), "rb")) != NULL)
    {
        nHareketAdedi = (DosyaBoyu(fpTransferDosyasi) / sizeof(TRANSFER_FORMU));

        nSayac = 0;
        while (DosyadanYukle(fpTransferDosyasi, &tfTransfer, nSayac) != NULL)
        {
            ProgressBar1->Position = ((nSayac+1) * 100) / nHareketAdedi;
            Label1->Caption = "% "+AnsiString(ProgressBar1->Position)+" yüklendi...";
            Label1->Refresh();

            ++nSayac;

            // Filtrede istenilen deðerler yoksa baþa dön
            if ((MetinDosyasiFiltresi(&tfTransfer) == false) || (KayitVarmi(&tfTransfer) == true))
                continue;
            else {
                // Stok kartý yoksa stok kartý yarat
                StokKartiKontrol(&tfTransfer);
                // Stok Hareketi ekleniyor...
                TexttenORTEGe(&tfTransfer);

                if (tfTransfer.nFirmaKodu >= 0) {
                    // Firma Kartý yoksa firma kartýný yarat
                    FirmaKartiKontrol(&tfTransfer);
                }
                else {
                    // Ünite Kartý yoksa ünite kartý yarat
                    UniteKartiKontrol(&tfTransfer);
                }
            }
        }
        ProgressBar1->Position = 0;
        Label1->Caption = "% "+AnsiString(ProgressBar1->Position)+" aktarýldý...";
        Label1->Refresh();

        fclose(fpTransferDosyasi);
    }
}
//---------------------------------------------------------------------------


void __fastcall TfrmTransfer::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    datamoduleORTEG->tblIC_DAGITIM->Close();
    datamoduleORTEG->tblSTOKHAR->Close();
    datamoduleORTEG->tblSTOKANA->Filtered = false;
    datamoduleORTEG->tblSTOKANA->Close();
    datamoduleORTEG->tblUNITE->Filtered = false;
    datamoduleORTEG->tblUNITE->Close();
    datamoduleORTEG->tblFIRMA->Filtered = false;
    datamoduleORTEG->tblFIRMA->Close();
    datamoduleORTEG->tblDONEM->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmTransfer::checkboxICDAGITIMClick(TObject *Sender)
{
    if (checkboxICDAGITIM->Checked == true || checkboxTEMIZLIK->Checked == true ||
    checkboxIADE->Checked == true || checkboxFATURA->Checked == true)
    {
       BitBtn1->Enabled = true;
       BitBtn2->Enabled = true;
    }
    else
    {
        BitBtn1->Enabled = false;
        BitBtn2->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmTransfer::checkboxTEMIZLIKClick(TObject *Sender)
{
    if (checkboxICDAGITIM->Checked == true || checkboxTEMIZLIK->Checked == true ||
    checkboxIADE->Checked == true || checkboxFATURA->Checked == true)
    {
       BitBtn1->Enabled = true;
       BitBtn2->Enabled = true;
    }
    else
    {
        BitBtn1->Enabled = false;
        BitBtn2->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmTransfer::checkboxIADEClick(TObject *Sender)
{
    if (checkboxICDAGITIM->Checked == true || checkboxTEMIZLIK->Checked == true ||
    checkboxIADE->Checked == true || checkboxFATURA->Checked == true)
    {
       BitBtn1->Enabled = true;
       BitBtn2->Enabled = true;
    }
    else
    {
        BitBtn1->Enabled = false;
        BitBtn2->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmTransfer::checkboxFATURAClick(TObject *Sender)
{
    if (checkboxICDAGITIM->Checked == true || checkboxTEMIZLIK->Checked == true ||
    checkboxIADE->Checked == true || checkboxFATURA->Checked == true)
    {
       BitBtn1->Enabled = true;
       BitBtn2->Enabled = true;
    }
    else
    {
        BitBtn1->Enabled = false;
        BitBtn2->Enabled = false;
    }
}
//---------------------------------------------------------------------------

