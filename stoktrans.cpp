//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "stoktrans.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmStokKartiTransfer *frmStokKartiTransfer;
STOK_KARTI skTransfer;
//---------------------------------------------------------------------------
__fastcall TfrmStokKartiTransfer::TfrmStokKartiTransfer(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmStokKartiTransfer::DosyayaKaydet(FILE *fpDosya, STOK_KARTI *skTransfer, long nKayitNo)
{
    long DosyaYeri;
    DosyaYeri = (sizeof(STOK_KARTI) * (nKayitNo-1));

    fseek(fpDosya, DosyaYeri, SEEK_SET);
    fwrite(skTransfer, 1, sizeof(STOK_KARTI), fpDosya);
}

//---------------------------------------------------------------------------
int __fastcall TfrmStokKartiTransfer::DosyadanYukle(FILE *fpDosya, STOK_KARTI *skTransfer, long nKayitNo)
{
    long DosyaYeri;
    DosyaYeri = (sizeof(STOK_KARTI) * (nKayitNo));

    fseek(fpDosya, DosyaYeri, SEEK_SET);
    return fread(skTransfer, 1, sizeof(STOK_KARTI), fpDosya);
}

//---------------------------------------------------------------------------
AnsiString __fastcall TfrmStokKartiTransfer::DosyaAcIletisimKutusu(void)
{
    OpenDialog1->Filter = "okossoft Metin Dosyasý (*.oxa)|*.OXA";
    OpenDialog1->Execute();

    if (OpenDialog1->FileName.Length() > 0)
    {
        if (strstr(OpenDialog1->FileName.c_str(), ".OXA") == NULL)
        {
            if (OpenDialog1->FileName[OpenDialog1->FileName.Length()] == '.')
                return OpenDialog1->FileName+"OXA";
            else
                return OpenDialog1->FileName+".OXA";
        }
        else
            return OpenDialog1->FileName;
    }
    return OpenDialog1->FileName;
}

//---------------------------------------------------------------------------
AnsiString __fastcall TfrmStokKartiTransfer::DosyaKaydetIletisimKutusu(void)
{
    SaveDialog1->Filter = "okossoft Metin Dosyasý (*.oxa)|*.OXA";
    SaveDialog1->Execute();

    if (SaveDialog1->FileName.Length() > 0) {
        if (strstr(SaveDialog1->FileName.c_str(), ".OXA") == NULL) {
            if (SaveDialog1->FileName[SaveDialog1->FileName.Length()] == '.')
                return SaveDialog1->FileName+"OXA";
            else
                return SaveDialog1->FileName+".OXA";
        }
        else
            return SaveDialog1->FileName;
    }
    return SaveDialog1->FileName;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokKartiTransfer::BitBtn1Click(TObject *Sender)
{
    FILE *fpTransferDosyasi;
    STOK_KARTI skTransfer;
    AnsiString szIslemTuruKontrolu;

    // TRANSFER_FORMU yapýsýnýn içi temizleniyor...
    memset(&skTransfer, NULL, sizeof(STOK_KARTI));

    // Yeni Dosya açýlýyor...
    if ((fpTransferDosyasi = fopen(DosyaKaydetIletisimKutusu().c_str(), "wb")) != NULL) {

        querySTOKANA->Close();
        querySTOKANA->ParamByName("baslangic")->AsDateTime = DateTimePicker1->DateTime;
        querySTOKANA->ParamByName("bitis")->AsDateTime = DateTimePicker2->DateTime;
        querySTOKANA->Open();

        querySTOKANA->First();
        while (!querySTOKANA->Eof)
        {
            ProgressBar1->Position = (querySTOKANA->RecNo*100) / querySTOKANA->RecordCount;
            Label1->Caption = "% "+AnsiString(ProgressBar1->Position)+"% kaydedildi...";
            Label1->Refresh();
            memset(&skTransfer, NULL, sizeof(STOK_KARTI));

            skTransfer.nStokKodu = querySTOKANASTOK_KODU->Value;
            strcpy(skTransfer.szStokAdi, querySTOKANASTOK_ADI->Value.c_str());
            strcpy(skTransfer.szBirimi_1, querySTOKANABIRIMI->Value.c_str());
            strcpy(skTransfer.szBirimi_2, querySTOKANABIRIM2->Value.c_str());
            skTransfer.nBirimKatsayisi = querySTOKANABIRIM_KATSAYISI->Value;

            DosyayaKaydet(fpTransferDosyasi, &skTransfer, querySTOKANA->RecNo);

            querySTOKANA->Next();
        }
        querySTOKANA->Close();
    }
    ProgressBar1->Position = 0;
    Label1->Caption = "% "+AnsiString(ProgressBar1->Position)+"% kaydedildi...";
    Label1->Refresh();
}
//---------------------------------------------------------------------------


void __fastcall TfrmStokKartiTransfer::FormShow(TObject *Sender)
{
    DateTimePicker1->DateTime = DateTimePicker1->DateTime.CurrentDate();
    DateTimePicker2->DateTime = DateTimePicker2->DateTime.CurrentDate();        
}
//---------------------------------------------------------------------------

