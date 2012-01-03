//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "anamenu.h"
#include "stoktrans.h"
#include "icdagharctrl.h"
#include "unitekarti.h"
#include "rprgunlukhar.h"
#include "hazirlanmayan.h"
#include "stokkartirap.h"
#include "sayimrap.h"
#include "sayimkontrol.h"
#include "baslangic.h"
#include "transfer.h"
#include "kartdegistir.h"
#include "hakkinda.h"
#include "sezon.h"
#include "icdagitim.h"
#include "datamodule.h"
#include "detsayrap.h"
#include "firmakarti.h"
#include "donem.h"            
#include "birimkarti.h"
#include "cinsi.h"
#include "ayarlar.h"
#include "personel.h"
#include "hareket.h"
#include "stokkarti.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAnaMenu *frmAnaMenu;
//---------------------------------------------------------------------------
__fastcall TfrmAnaMenu::TfrmAnaMenu(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::niteTanmlama1Click(TObject *Sender)
{
    frmUnite->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::StokKart1Click(TObject *Sender)
{
    frmStokKarti->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::DepoyaGiren1Click(TObject *Sender)
{
    frmHareket->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::SpeedButton1Click(TObject *Sender)
{
    frmStokKarti->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::SpeedButton4Click(TObject *Sender)
{
    frmHareket->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::BirimAdTanmlama1Click(TObject *Sender)
{
    frmBirimKarti->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::KsmAmiriTanmlama1Click(TObject *Sender)
{
    frmImzaYetkilileri->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::GenelParametreler1Click(TObject *Sender)
{
    frmAyarlar->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::CinsiTanmlama1Click(TObject *Sender)
{
    frmCinsi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::FirmaKart1Click(TObject *Sender)
{
    frmFirma->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::FirmaKart2Click(TObject *Sender)
{
    frmFirma->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::niteKart1Click(TObject *Sender)
{
    frmUnite->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::SpeedButton3Click(TObject *Sender)
{
    TMouse *Fare = new TMouse;

    popupFIRMA->Popup(Fare->CursorPos.x, Fare->CursorPos.y);
    delete Fare;
}
//---------------------------------------------------------------------------
void __fastcall TfrmAnaMenu::DatmHazurlama1Click(TObject *Sender)
{
    frmIcDagitim->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::SpeedButton5Click(TObject *Sender)
{
    frmIcDagitim->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::DnemTanmlama1Click(TObject *Sender)
{
    frmDonem->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmAnaMenu::SaymRaporu2Click(TObject *Sender)
{
    rprSayimRaporu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    datamoduleORTEG->tblSTOKANA->Close();
    datamoduleORTEG->tblBIRIMI->Close();
    datamoduleORTEG->tblPERSONEL->Close();
    datamoduleORTEG->tblCINSI->Close();
    datamoduleORTEG->tblUNITE->Close();
    datamoduleORTEG->tblFIRMA->Close();
    datamoduleORTEG->tblSTOKHAR->Close();
    datamoduleORTEG->tblDONEM->Close();
    datamoduleORTEG->tblAYARLAR->Close();
    datamoduleORTEG->tblIC_DAGITIM->Close();
    datamoduleORTEG->tblSTOKANADETAY->Close();

    frmBaslangicFormu->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::leminYaplacaYl1Click(TObject *Sender)
{
    frmSezonSecimi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::DetaylSaymRaporu1Click(TObject *Sender)
{
    rprDetayliSayimRaporu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::GDefteri1Click(TObject *Sender)
{
    frmSayimKontrol->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::Hakknda1Click(TObject *Sender)
{
    frmHakkinda->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::GnlkHareketRaporu1Click(TObject *Sender)
{
    rprGunlukHareket->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::FormShow(TObject *Sender)
{
    frmBaslangicFormu->Hide();    
}
//---------------------------------------------------------------------------





void __fastcall TfrmAnaMenu::FormClick(TObject *Sender)
{
    if (frmAnaMenu->WindowState == wsMinimized)
        Application->Minimize();

    if (frmAnaMenu->WindowState == wsNormal)
        Application->Restore();
}
//---------------------------------------------------------------------------


void __fastcall TfrmAnaMenu::KilerKaytKart1Click(TObject *Sender)
{
    rprStokKarti->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmAnaMenu::erik1Click(TObject *Sender)
{
    Application->HelpJump("ID_NE_ISE_YARAR"); 
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::HarekettenDeitir1Click(TObject *Sender)
{
    frmKartDegistir->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::HazrlanmayanHareket1Click(TObject *Sender)
{
    frmHazirlanmayanlar->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::Transferlemi1Click(TObject *Sender)
{
    if (frmHareket->Visible == true)
    {
        Application->MessageBoxA("Transfer iþlemi için bütün pencereleri kapatmalýsýnýz.", "Uyarý", MB_OK | MB_ICONEXCLAMATION);
    }
    else
    {
        frmTransfer->Show();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::StokKartTransferi1Click(TObject *Sender)
{
    frmStokKartiTransfer->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAnaMenu::VeriOnarma1Click(TObject *Sender)
{
    frmIcdagitimHareketKontrol->Show();
}
//---------------------------------------------------------------------------

