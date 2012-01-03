//---------------------------------------------------------------------------

#ifndef anamenuH
#define anamenuH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Menus.hpp>
#include <ImgList.hpp>
//---------------------------------------------------------------------------
class TfrmAnaMenu : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TMainMenu *MainMenu1;
    TMenuItem *Kart1;
    TMenuItem *Hareketler1;
    TMenuItem *Raporlar1;
    TMenuItem *Yardm1;
    TMenuItem *niteTanmlama1;
    TMenuItem *FirmaKart1;
    TMenuItem *StokKart1;
    TMenuItem *Hakknda1;
    TMenuItem *erik1;
    TStatusBar *StatusBar1;
    TMenuItem *DepoyaGiren1;
    TMenuItem *DatmHazurlama1;
    TMenuItem *GnlkHareketRaporu1;
    TMenuItem *SaymRaporu1;
    TMenuItem *Ayarlar1;
    TMenuItem *leminYaplacaYl1;
    TMenuItem *GenelParametreler1;
    TMenuItem *GDefteri1;
    TPanel *Panel1;
    TSpeedButton *SpeedButton1;
    TSpeedButton *SpeedButton5;
    TSpeedButton *SpeedButton3;
    TSpeedButton *SpeedButton4;
    TImage *Image1;
    TMenuItem *Tanmlamalar1;
    TMenuItem *KsmAmiriTanmlama1;
    TMenuItem *BirimAdTanmlama1;
    TMenuItem *CinsiTanmlama1;
    TPopupMenu *popupFIRMA;
    TMenuItem *FirmaKart2;
    TMenuItem *niteKart1;
    TImageList *ImageList1;
    TMenuItem *DnemTanmlama1;
    TMenuItem *SaymRaporu2;
    TMenuItem *DetaylSaymRaporu1;
    TMenuItem *KilerKaytKart1;
    TMenuItem *Verilemleri1;
    TMenuItem *VeriOnarma1;
    TMenuItem *N1;
    TMenuItem *HarekettenDeitir1;
    TMenuItem *HazrlanmayanHareket1;
    TMenuItem *N2;
    TMenuItem *Transferlemi1;
    TMenuItem *StokKartTransferi1;
    void __fastcall niteTanmlama1Click(TObject *Sender);
    void __fastcall StokKart1Click(TObject *Sender);
    void __fastcall DepoyaGiren1Click(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall SpeedButton4Click(TObject *Sender);
    void __fastcall BirimAdTanmlama1Click(TObject *Sender);
    void __fastcall KsmAmiriTanmlama1Click(TObject *Sender);
    void __fastcall GenelParametreler1Click(TObject *Sender);
    void __fastcall CinsiTanmlama1Click(TObject *Sender);
    void __fastcall FirmaKart1Click(TObject *Sender);
    void __fastcall FirmaKart2Click(TObject *Sender);
    void __fastcall niteKart1Click(TObject *Sender);
    void __fastcall SpeedButton3Click(TObject *Sender);
    void __fastcall DatmHazurlama1Click(TObject *Sender);
    void __fastcall SpeedButton5Click(TObject *Sender);
    void __fastcall DnemTanmlama1Click(TObject *Sender);
    void __fastcall SaymRaporu2Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall leminYaplacaYl1Click(TObject *Sender);
    void __fastcall DetaylSaymRaporu1Click(TObject *Sender);
    void __fastcall GDefteri1Click(TObject *Sender);
    void __fastcall Hakknda1Click(TObject *Sender);
    void __fastcall GnlkHareketRaporu1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClick(TObject *Sender);
    void __fastcall KilerKaytKart1Click(TObject *Sender);
    void __fastcall erik1Click(TObject *Sender);
    void __fastcall HarekettenDeitir1Click(TObject *Sender);
    void __fastcall HazrlanmayanHareket1Click(TObject *Sender);
    void __fastcall Transferlemi1Click(TObject *Sender);
    void __fastcall StokKartTransferi1Click(TObject *Sender);
    void __fastcall VeriOnarma1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmAnaMenu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAnaMenu *frmAnaMenu;
//---------------------------------------------------------------------------
#endif
