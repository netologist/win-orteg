//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "rprgunlukhar.h"
#include "detsayrap.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TrprGunlukHareket *rprGunlukHareket;
double nGirislerAlisToplami, nCikislarAlisToplami,
       nGirislerSatisToplami, nCikislarSatisToplami,
       nGirislerKarToplami, nCikislarKarToplami;

//---------------------------------------------------------------------------
__fastcall TrprGunlukHareket::TrprGunlukHareket(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TrprGunlukHareket::QuickRep1BeforePrint(
      TCustomQuickRep *Sender, bool &PrintReport)
{
    PageFooterBand1->Enabled = true;

    nGirislerAlisToplami = 0, nCikislarAlisToplami = 0,
    nGirislerSatisToplami = 0, nCikislarSatisToplami = 0,
    nGirislerKarToplami = 0, nCikislarKarToplami = 0;
}
//---------------------------------------------------------------------------
void __fastcall TrprGunlukHareket::SummaryBand1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    double nAlisToplami, nSatisToplami, nKarToplami;

    queryCIKTITOPLAMI->Close();
    queryCIKTITOPLAMI->ParamByName("tarih")->AsDateTime = DateTimePicker1->DateTime;
    queryCIKTITOPLAMI->Open();

    queryGIRDITOPLAMI->Close();
    queryGIRDITOPLAMI->ParamByName("tarih")->AsDateTime = DateTimePicker1->DateTime;
    queryGIRDITOPLAMI->Open();

    nAlisToplami = queryGIRDITOPLAMIGIRDI_ALIS_TOPLAMI->Value - queryCIKTITOPLAMICIKTI_ALIS_TOPLAMI->Value;
    nSatisToplami = queryGIRDITOPLAMIGIRDI_SATIS_TOPLAMI->Value - queryCIKTITOPLAMICIKTI_SATIS_TOPLAMI->Value;
    nKarToplami =  queryGIRDITOPLAMIGIRDI_KAR_TOPLAMI->Value - queryCIKTITOPLAMICIKTI_KAR_TOPLAMI->Value;

    // Depodaki Malýn Son Durumu ....
    QRLabel33->Caption = nAlisToplami > 0 ? FormatFloat("###,###,###,###", nAlisToplami) : FloatToStr(nAlisToplami);
    QRLabel34->Caption = nSatisToplami > 0 ? FormatFloat("###,###,###,###", nSatisToplami) : FloatToStr(nSatisToplami);
    QRLabel35->Caption = nKarToplami > 0 ? FormatFloat("###,###,###,###", nKarToplami) : FloatToStr(nKarToplami);

    // Giriþler Toplamý Hesaplanýyor..
    QRLabel6->Caption = nGirislerAlisToplami > 0 ? FormatFloat("###,###,###,###", nGirislerAlisToplami) : FloatToStr(nGirislerAlisToplami);
    QRLabel18->Caption = nGirislerSatisToplami > 0 ? FormatFloat("###,###,###,###", nGirislerSatisToplami) : FloatToStr(nGirislerSatisToplami);
    QRLabel19->Caption = nGirislerKarToplami > 0 ? FormatFloat("###,###,###,###", nGirislerKarToplami) : FloatToStr(nGirislerKarToplami);
    // Çýkýþlar Toplamý Hesaplanýyor..
    QRLabel21->Caption = nCikislarAlisToplami > 0 ? FormatFloat("###,###,###,###", nCikislarAlisToplami) : FloatToStr(nCikislarAlisToplami);
    QRLabel22->Caption = nCikislarSatisToplami > 0 ? FormatFloat("###,###,###,###", nCikislarSatisToplami) : FloatToStr(nCikislarSatisToplami);
    QRLabel23->Caption = nCikislarKarToplami > 0 ? FormatFloat("###,###,###,###", nCikislarKarToplami) : FloatToStr(nCikislarKarToplami);

    PageFooterBand1->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TrprGunlukHareket::BitBtn1Click(TObject *Sender)
{
    querySTOKHAR->Close();
    querySTOKHAR->ParamByName("TARIH")->AsDate = DateTimePicker1->Date;
    querySTOKHAR->Open();

    QRLabel2->Caption = DateTimePicker1->DateTime.DateString() + " TARÝHLÝ";
    QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TrprGunlukHareket::BitBtn2Click(TObject *Sender)
{
    querySTOKHAR->Close();
    rprGunlukHareket->Close();
}
//---------------------------------------------------------------------------

void __fastcall TrprGunlukHareket::FormShow(TObject *Sender)
{
    DateTimePicker1->DateTime = DateTimePicker1->DateTime.CurrentDate();
}
//---------------------------------------------------------------------------

void __fastcall TrprGunlukHareket::QRBand2AfterPrint(TQRCustomBand *Sender,
      bool BandPrinted)
{
    if (querySTOKHARBELGE_TURU->Value == "GIRDI") {
        nGirislerAlisToplami += querySTOKHARALIS_TUTARI->Value;
        nGirislerSatisToplami += querySTOKHARSATIS_TUTARI->Value;
        nGirislerKarToplami += querySTOKHARKAR->Value;
    }
    else {
        nCikislarAlisToplami += querySTOKHARALIS_TUTARI->Value;
        nCikislarSatisToplami += querySTOKHARSATIS_TUTARI->Value;
        nCikislarKarToplami += querySTOKHARKAR->Value;
    }
}
//---------------------------------------------------------------------------

void __fastcall TrprGunlukHareket::PageFooterBand1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    // Giriþler Toplamý Hesaplanýyor..
    QRLabel25->Caption = nGirislerAlisToplami > 0 ? FormatFloat("###,###,###,###", nGirislerAlisToplami) : FloatToStr(nGirislerAlisToplami);
    QRLabel26->Caption = nGirislerSatisToplami > 0 ? FormatFloat("###,###,###,###", nGirislerSatisToplami) : FloatToStr(nGirislerSatisToplami);
    QRLabel27->Caption = nGirislerKarToplami > 0 ? FormatFloat("###,###,###,###", nGirislerKarToplami) : FloatToStr(nGirislerKarToplami);
    // Çýkýþlar Toplamý Hesaplanýyor..
    QRLabel29->Caption = nCikislarAlisToplami > 0 ? FormatFloat("###,###,###,###", nCikislarAlisToplami) : FloatToStr(nCikislarAlisToplami);
    QRLabel30->Caption = nCikislarSatisToplami > 0 ? FormatFloat("###,###,###,###", nCikislarSatisToplami) : FloatToStr(nCikislarSatisToplami);
    QRLabel31->Caption = nCikislarKarToplami > 0 ? FormatFloat("###,###,###,###", nCikislarKarToplami) : FloatToStr(nCikislarKarToplami);
}
//---------------------------------------------------------------------------

