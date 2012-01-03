//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("Orteg5.res");
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
USEFORM("baslangic.cpp", frmBaslangicFormu);
USEFORM("barkodgiris.cpp", frmBarkodGiris);
USEFORM("kartdegistir.cpp", frmKartDegistir);
USEFORM("gircikbelgesi.cpp", rprHareketRaporu);
USEFORM("hazirlanmayan.cpp", frmHazirlanmayanlar);
USEFORM("transfer.cpp", frmTransfer);
USEFORM("harkopyala.cpp", frmHareketKopyala);
USEFORM("stoktrans.cpp", frmStokKartiTransfer);
USEFORM("icdagharctrl.cpp", frmIcdagitimHareketKontrol);
USEFORM("hrkbarkod.cpp", frmHarekettenBarkod);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
         Application->Initialize();
         Application->Title = "OrtEg [depo takibi] v.1.0";
         Application->HelpFile = "D:\\OKos Projects\\ORTEG5\\ORTEG5.HLP";
         Application->CreateForm(__classid(TfrmBaslangicFormu), &frmBaslangicFormu);
         Application->CreateForm(__classid(TfrmBarkodGiris), &frmBarkodGiris);
         Application->CreateForm(__classid(TfrmKartDegistir), &frmKartDegistir);
         Application->CreateForm(__classid(TrprHareketRaporu), &rprHareketRaporu);
         Application->CreateForm(__classid(TfrmHazirlanmayanlar), &frmHazirlanmayanlar);
         Application->CreateForm(__classid(TfrmTransfer), &frmTransfer);
         Application->CreateForm(__classid(TfrmHareketKopyala), &frmHareketKopyala);
         Application->CreateForm(__classid(TfrmStokKartiTransfer), &frmStokKartiTransfer);
         Application->CreateForm(__classid(TfrmIcdagitimHareketKontrol), &frmIcdagitimHareketKontrol);
         Application->CreateForm(__classid(TfrmHarekettenBarkod), &frmHarekettenBarkod);
         Application->Run();
    }
    catch (Exception &exception)
    {
         Application->ShowException(&exception);
    }
    return 0;
}
//---------------------------------------------------------------------------
