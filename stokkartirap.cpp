//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "stokkartirap.h"
#include "stoklist.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TrprStokKarti *rprStokKarti;
double nToplam, nDetaySayac;
//---------------------------------------------------------------------------
__fastcall TrprStokKarti::TrprStokKarti(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TrprStokKarti::BitBtn2Click(TObject *Sender)
{
    querySTOKANA->Close();
    querySTOKHAR->Close();
    rprStokKarti->Close();
}
//---------------------------------------------------------------------------

void __fastcall TrprStokKarti::BitBtn1Click(TObject *Sender)
{
    querySTOKANA->Close();
    querySTOKANA->ParamByName("baslangicSK")->AsFloat = StrToFloat(editBaslangicSK->Text);
    querySTOKANA->ParamByName("bitisSK")->AsFloat = StrToFloat(editBitisSK->Text);
    querySTOKANA->Open();

    rprStokKarti->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TrprStokKarti::FormShow(TObject *Sender)
{
    unsigned short nGun, nAy, nYil;

    DateTimePicker1->Date.DecodeDate(&nYil, &nAy, &nGun);

    DateTimePicker1->Date = StrToDate("01.01."+IntToStr(nYil));
    DateTimePicker2->Date = StrToDate("31.12."+IntToStr(nYil));
}
//---------------------------------------------------------------------------

void __fastcall TrprStokKarti::DetailBand1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    querySTOKHAR->Close();
    querySTOKHAR->ParamByName("StokKodu")->AsFloat = querySTOKANAStokKodu->Value;
    querySTOKHAR->ParamByName("baslangictarihi")->AsDate = DateTimePicker1->Date;
    querySTOKHAR->ParamByName("bitistarihi")->AsDate = DateTimePicker2->Date;
    querySTOKHAR->Open();

    if (querySTOKHAR->RecordCount == 0)
        querySTOKANA->Next();

    QuickRep1->NewPage();
    nToplam = 0; // Yeni bir stok kartý yazdýrýldýðýnda kalan sýfýrlanýr..
    nDetaySayac = 0;
}
//---------------------------------------------------------------------------

void __fastcall TrprStokKarti::QRSubDetail1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    // Kalan hanesi hesaplanýyor....
    if (querySTOKHARBELGE_TURU->Value == "GIRDI")
        nToplam += querySTOKHARMIKTAR->Value;
    else
        nToplam += querySTOKHARMIKTAR->Value*-1;
    QRLabel17->Caption = FloatToStr(nToplam);
    ++nDetaySayac;
    QRLabel18->Caption = nDetaySayac;
}
//---------------------------------------------------------------------------

void __fastcall TrprStokKarti::SpeedButton1Click(TObject *Sender)
{
    frmStokListesi->Caption = "Stok Listesi [baþlangýç]";
    frmStokListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TrprStokKarti::SpeedButton2Click(TObject *Sender)
{
    bKontrol = true;

    frmStokListesi->Caption = "Stok Listesi [bitiþ]";
    frmStokListesi->Show();
}
//---------------------------------------------------------------------------


