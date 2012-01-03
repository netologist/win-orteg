//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "icdagharctrl.h"
#include "datamodule.h"
#include "hareket.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmIcdagitimHareketKontrol *frmIcdagitimHareketKontrol;
//---------------------------------------------------------------------------
__fastcall TfrmIcdagitimHareketKontrol::TfrmIcdagitimHareketKontrol(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcdagitimHareketKontrol::ToolButton1Click(
      TObject *Sender)
{
    TDateTime dtBaslangic, dtBitis;
    int nSayac = 0;

    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filter = "[DONEM_TANIMI]='"+comboDONEM->Text+"'";
    datamoduleORTEG->tblDONEM->Filtered = true;

    dtBaslangic = datamoduleORTEG->tblDONEMBASLANGIC->Value;
    dtBitis = datamoduleORTEG->tblDONEMBITIS->Value;

    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->Close();

    queryICDAGITIM->Close();
    queryICDAGITIM->ParamByName("BASLANGIC")->AsDateTime = dtBaslangic;
    queryICDAGITIM->ParamByName("BITIS")->AsDateTime = dtBitis;    
    queryICDAGITIM->Open();

    querySTOKHAR->Close();
    querySTOKHAR->ParamByName("BASLANGIC")->AsDateTime = dtBaslangic;
    querySTOKHAR->ParamByName("BITIS")->AsDateTime = dtBitis;
    querySTOKHAR->Open();

    queryICDAGITIM->First();
    while (!queryICDAGITIM->Eof)
    {
        ProgressBar1->Position = (queryICDAGITIM->RecNo * 100) / queryICDAGITIM->RecordCount;
        ProgressBar1->Refresh();
        labelYUZDE->Caption = AnsiString(ProgressBar1->Position)+"%";
        labelYUZDE->Refresh();

        if (ceil(querySTOKHARSUMOFALIS_TUTARI->Value) != ceil(queryICDAGITIMSUMOFALIS_TUTARI->Value))
        {
            ListView1->Items->Add();
            ListView1->Items->Item[nSayac]->Caption = queryICDAGITIMBELGE_NO->Value;
            ListView1->Items->Item[nSayac]->SubItems->Insert(0, FormatFloat("###,###,###,###", querySTOKHARSUMOFALIS_TUTARI->Value));
            ListView1->Items->Item[nSayac]->SubItems->Insert(1, FormatFloat("###,###,###,###", queryICDAGITIMSUMOFALIS_TUTARI->Value));
            ++nSayac;
        }
        queryICDAGITIM->Next();
    }
    queryICDAGITIM->Close();
    Application->MessageBoxA("Kayýtlar kontrol edilmiþtir.!", "Uyarý", MB_OK | MB_ICONINFORMATION);
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcdagitimHareketKontrol::FormShow(TObject *Sender)
{
    comboDONEM->Clear();

    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->First();

    while (!datamoduleORTEG->tblDONEM->Eof)
    {
        comboDONEM->Items->Add(datamoduleORTEG->tblDONEMDONEM_TANIMI->Value);
        datamoduleORTEG->tblDONEM->Next();
    }
    datamoduleORTEG->tblDONEM->Close();

    comboDONEM->ItemIndex = 0;
}
//---------------------------------------------------------------------------


void __fastcall TfrmIcdagitimHareketKontrol::comboDONEMChange(
      TObject *Sender)
{
    ProgressBar1->Position = 0;
    labelYUZDE->Caption = AnsiString(ProgressBar1->Position)+"%";
    labelYUZDE->Refresh();

    ListView1->Items->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcdagitimHareketKontrol::Dzelt1Click(TObject *Sender)
{
    TDateTime dtBaslangic, dtBitis;

    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filter = "[DONEM_TANIMI]='"+comboDONEM->Text+"'";
    datamoduleORTEG->tblDONEM->Filtered = true;
    dtBaslangic = datamoduleORTEG->tblDONEMBASLANGIC->Value;
    dtBitis = datamoduleORTEG->tblDONEMBITIS->Value;
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->Close();

    queryICDAGITIM_DETAY->Close();
    queryICDAGITIM_DETAY->ParamByName("BASLANGIC")->AsDateTime = dtBaslangic;
    queryICDAGITIM_DETAY->ParamByName("BITIS")->AsDateTime = dtBitis;
    queryICDAGITIM_DETAY->ParamByName("BELGE_NO")->AsString = ListView1->Selected->Caption;
    queryICDAGITIM_DETAY->Open();

    queryICDAGITIM_DETAY->First();
    while (!queryICDAGITIM_DETAY->Eof)
    {
        ProgressBar1->Position = (queryICDAGITIM_DETAY->RecNo * 100) / queryICDAGITIM_DETAY->RecordCount;
        ProgressBar1->Refresh();
        labelYUZDE->Caption = AnsiString(ProgressBar1->Position)+"%";
        labelYUZDE->Refresh();

        datamoduleORTEG->tblSTOKHAR->Open();
        datamoduleORTEG->tblSTOKHAR->Filter = "[HAREKET_NO]="+AnsiString(queryICDAGITIM_DETAYHAREKET_NO->Value);
        datamoduleORTEG->tblSTOKHAR->Filtered = true;

        if (queryICDAGITIM_DETAYBELGE_TURU->Value == "GIRDI BELGESÝ" || queryICDAGITIM_DETAYBELGE_TURU->Value == "IADE BELGESÝ")
            szBelgeTuru = "GIRDI";
        else if (queryICDAGITIM_DETAYBELGE_TURU->Value == "CIKTI BELGESÝ")
            szBelgeTuru = "CIKTI";
        else
            szBelgeTuru = "TEMIZLIK";

        nFirmaKodu = queryICDAGITIM_DETAYFIRMA_KODU->Value;
        szFirmaAdi = queryICDAGITIM_DETAYFIRMA_ADI->Value;
        dtTarih = queryICDAGITIM_DETAYTARIH->Value;
        szBelgeNo = queryICDAGITIM_DETAYBELGE_NO->Value;

        if (datamoduleORTEG->tblSTOKHAR->RecordCount == 0)
        {
            datamoduleORTEG->tblSTOKHAR->Insert();
            datamoduleORTEG->tblSTOKHAR->Edit();
            datamoduleORTEG->tblSTOKHARHAREKET_NO->Value = queryICDAGITIM_DETAYHAREKET_NO->Value;
        }

        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHAR->Post();

        bStokCagirma = false; // KODA GÖRE GÝRÝÞ...
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARSTOK_KODU->Value = queryICDAGITIM_DETAYSTOK_KODU->Value;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARIC_DAGITIM_NO->Value = queryICDAGITIM_DETAYBELGE_NO->Value;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARMIKTAR->Value = queryICDAGITIM_DETAYMIKTAR->Value;
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHARALIS_FIYATI->Value = queryICDAGITIM_DETAYALIS_FIYATI->Value;

        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHAR->Post();

        queryICDAGITIM_DETAY->Next();
    }
    ListView1->Selected->Delete();

    queryICDAGITIM_DETAY->Close();
    Application->MessageBoxA("Kayýt düzeltilmiþtir.!", "Bilgi", MB_OK | MB_ICONINFORMATION);
}
//---------------------------------------------------------------------------


