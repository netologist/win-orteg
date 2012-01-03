//---------------------------------------------------------------------------
//                            O R T E G   2 0 0 2
//                                v . 1 . 5 2
//
//  Programcý : Hasan ÖZGAN
//  Proje Adý : Orteg Depo Takip Sistemi
//  Baþlangýç Tarih : 15.10.2002
//  Bitiþ Tarihi : 04.05.2003 (AYNI ZAMANDA TESKERE TARÝHÝM)
//
//  Bu program askerde olduðum süre içinde hazýrlanmýþtýr.
//  Devletime bir faydam olduysa ne mutlu bana..... Þafak:29 / 04 Nisan 2003 
//
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "baslangic.h"
#include "anamenu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGAUGES"
#pragma resource "*.dfm"
USEFORM("unitekarti.cpp", frmUnite);
USEFORM("ayarlar.cpp", frmAyarlar);
USEFORM("birimkarti.cpp", frmBirimKarti);
USEFORM("cinsi.cpp", frmCinsi);
USEFORM("datamodule.cpp", datamoduleORTEG); /* TDataModule: File Type */
USEFORM("firmakarti.cpp", frmFirma);
USEFORM("hareket.cpp", frmHareket);
USEFORM("personel.cpp", frmImzaYetkilileri);
USEFORM("stokkarti.cpp", frmStokKarti);
USEFORM("stoklist.cpp", frmStokListesi);
USEFORM("anamenu.cpp", frmAnaMenu);
USEFORM("firmalist.cpp", frmFirmaListesi);
USEFORM("icdagitim.cpp", frmIcDagitim);
USEFORM("donem.cpp", frmDonem);
USEFORM("fiyattablosu.cpp", frmFiyatTablosu);
USEFORM("icdagitimlist.cpp", frmIcDagitimList);
USEFORM("hareketozellikleri.cpp", frmHareketOzellikleri);
USEFORM("icdagitimrap.cpp", rprIcDagitimRaporu);
USEFORM("stokkartirap.cpp", rprStokKarti);
USEFORM("sayimrap.cpp", rprSayimRaporu);
USEFORM("detsayrap.cpp", rprDetayliSayimRaporu);
USEFORM("gidertut.cpp", rprGiderTutanagi);
USEFORM("sezon.cpp", frmSezonSecimi);
USEFORM("sayimkontrol.cpp", frmSayimKontrol);
USEFORM("hakkinda.cpp", frmHakkinda);
USEFORM("rprgunlukhar.cpp", rprGunlukHareket);
USEFORM("fatura.cpp", rprFatura);

int nDurumSayaci;
TfrmBaslangicFormu *frmBaslangicFormu;
//---------------------------------------------------------------------------
__fastcall TfrmBaslangicFormu::TfrmBaslangicFormu(TComponent* Owner)
    : TForm(Owner)
{
}                
//---------------------------------------------------------------------------

void __fastcall TfrmBaslangicFormu::Timer1Timer(TObject *Sender)
{
    ++nDurumSayaci;

    switch (nDurumSayaci) {
        case 1:
            labelDurumBar->Caption = "VeriTabaný Yükleniyor...";
            labelDurumBar->Refresh();
            Application->CreateForm(__classid(TfrmUnite), &frmUnite);
            break;
        case 5:
            Application->CreateForm(__classid(TfrmAyarlar), &frmAyarlar);
            break;
        case 10:
            Application->CreateForm(__classid(TfrmBirimKarti), &frmBirimKarti);
            Application->CreateForm(__classid(TfrmCinsi), &frmCinsi);
            break;
        case 15:
            Application->CreateForm(__classid(TdatamoduleORTEG), &datamoduleORTEG);
            break;
        case 20:
            Application->CreateForm(__classid(TfrmFirma), &frmFirma);
            break;
        case 25:
            labelDurumBar->Caption = "Parametreler Yükleniyor...";
            labelDurumBar->Refresh();
            Application->CreateForm(__classid(TfrmHareket), &frmHareket);
            break;
        case 30:
            Application->CreateForm(__classid(TfrmImzaYetkilileri), &frmImzaYetkilileri);
            Application->CreateForm(__classid(TfrmStokKarti), &frmStokKarti);
            break;
        case 35:
            Application->CreateForm(__classid(TfrmStokListesi), &frmStokListesi);
            Application->CreateForm(__classid(TfrmAnaMenu), &frmAnaMenu);
            break;
        case 40:
            Application->CreateForm(__classid(TfrmFirmaListesi), &frmFirmaListesi);
            break;
        case 50:
            Application->CreateForm(__classid(TfrmIcDagitim), &frmIcDagitim);
            break;
        case 55:
            labelDurumBar->Caption = "Formlar Yükleniyor...";
            labelDurumBar->Refresh();
            Application->CreateForm(__classid(TfrmDonem), &frmDonem);
            Application->CreateForm(__classid(TfrmFiyatTablosu), &frmFiyatTablosu);
            break;
        case 60:
            Application->CreateForm(__classid(TfrmIcDagitimList), &frmIcDagitimList);
            Application->CreateForm(__classid(TfrmHareketOzellikleri), &frmHareketOzellikleri);
            break;
        case 65:
            Application->CreateForm(__classid(TrprIcDagitimRaporu), &rprIcDagitimRaporu);
            Application->CreateForm(__classid(TrprStokKarti), &rprStokKarti);
            break;
        case 70:
            Application->CreateForm(__classid(TrprSayimRaporu), &rprSayimRaporu);
            Application->CreateForm(__classid(TrprDetayliSayimRaporu), &rprDetayliSayimRaporu);
            break;
        case 75:
            Application->CreateForm(__classid(TrprGiderTutanagi), &rprGiderTutanagi);
            break;
        case 80:
            labelDurumBar->Caption = "Raporlar Yükleniyor...";
            labelDurumBar->Refresh();
            Application->CreateForm(__classid(TfrmSezonSecimi), &frmSezonSecimi);
            break;
        case 85:
            Application->CreateForm(__classid(TfrmSayimKontrol), &frmSayimKontrol);
            break;
        case 90:
            Application->CreateForm(__classid(TfrmHakkinda), &frmHakkinda);
            break;
        case 95:
            Application->CreateForm(__classid(TrprGunlukHareket), &rprGunlukHareket);
            break;
        case 100:
            Application->CreateForm(__classid(TrprFatura), &rprFatura);
            break;
        case 101:
            nDurumSayaci = 0;
            Timer1->Enabled = false; // zamanlayýcý pasif
            frmAnaMenu->Show();
            frmBaslangicFormu->Hide();
    }

    CGauge1->Progress = nDurumSayaci;
}
//---------------------------------------------------------------------------
