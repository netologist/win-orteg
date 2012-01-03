//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "harkopyala.h"
#include "icdagitim.h"
#include "hareket.h"
#include "firmalist.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmHareketKopyala *frmHareketKopyala;
//---------------------------------------------------------------------------
__fastcall TfrmHareketKopyala::TfrmHareketKopyala(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmHareketKopyala::FormShow(TObject *Sender)
{
    datetimeTARIH->DateTime = datetimeTARIH->DateTime.CurrentDate();

    comboADI->Clear();
    datamoduleORTEG->tblUNITE->Filtered = false;
    datamoduleORTEG->tblUNITE->Open();
    datamoduleORTEG->tblUNITE->First();

    while (!datamoduleORTEG->tblUNITE->Eof) {
        comboADI->Items->Add(datamoduleORTEG->tblUNITEUNITE_ADI->Value);
        datamoduleORTEG->tblUNITE->Next();
    }
    comboISLEM_TURU->ItemIndex = 0;
    comboADI->ItemIndex = 0;
    editKOD->Text = "-1";

    datamoduleORTEG->tblUNITE->Close();

    frmHareket->Timer1->Enabled = false;
    frmIcDagitim->Timer1->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmHareketKopyala::SpeedButton2Click(TObject *Sender)
{
    int nSayac = 0; // Bu sayac, hangi elemanda iþlem olduðunu gösterir.

    datamoduleORTEG->tblSTOKHAR->Open();
    datamoduleORTEG->tblIC_DAGITIM->First();
    while (!datamoduleORTEG->tblIC_DAGITIM->Eof)
    {
        ProgressBar1->Position = nSayac*100/datamoduleORTEG->tblIC_DAGITIM->RecordCount;
        Label5->Caption = AnsiString(ProgressBar1->Position)+"% tamamlandý..";
        Label5->Refresh();

        szBelgeNo = "";
        szBelgeTuru = comboISLEM_TURU->Text;
        szFirmaAdi = comboADI->Text;
        nFirmaKodu = StrToFloat(editKOD->Text);
        dtTarih = datetimeTARIH->DateTime;

        datamoduleORTEG->tblSTOKHAR->Insert();
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARSTOK_ADI->Value = datamoduleORTEG->tblIC_DAGITIMSTOK_ADI->Value;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARMIKTAR->Value = datamoduleORTEG->tblIC_DAGITIMMIKTAR->Value;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARALIS_FIYATI->Value = datamoduleORTEG->tblIC_DAGITIMALIS_FIYATI->Value;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARSATIS_FIYATI->Value = datamoduleORTEG->tblIC_DAGITIMSATIS_FIYATI->Value;
        datamoduleORTEG->tblSTOKHAR->Post();

        ++nSayac;
        datamoduleORTEG->tblIC_DAGITIM->Next();
    }
    datamoduleORTEG->tblSTOKHAR->Close();

    datamoduleORTEG->tblIC_DAGITIM->First();
    ProgressBar1->Position = 0;
    Label5->Caption = AnsiString(ProgressBar1->Position)+"% tamamlandý..";
    Label5->Refresh();
    Application->MessageBoxA((AnsiString(nSayac)+" adet kalem kopyalandý.").c_str(), "Bilgi Mesajý", MB_OK | MB_ICONINFORMATION);
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareketKopyala::comboADIChange(TObject *Sender)
{
    editKOD->Text = "-1";   
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareketKopyala::SpeedButton1Click(TObject *Sender)
{
    frmFirmaListesi->Caption = "Firma Listesi [Hareket Kopyala]";
    frmFirmaListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareketKopyala::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    // Sadece açýk olan içdaðýtýmlarýn timerýný aç....
    frmHareket->Timer1->Enabled = frmHareket->Visible;
    frmIcDagitim->Timer1->Enabled = frmIcDagitim->Visible;
}
//---------------------------------------------------------------------------

