//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "sayimkontrol.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmSayimKontrol *frmSayimKontrol;
double nFaturaToplami, nIcDagitimToplami,
    nIadeIcDagitimToplami, nTemizlikToplami,
    nGirisToplami, nCikisToplami, nSayim, nDevir;

//---------------------------------------------------------------------------
__fastcall TfrmSayimKontrol::TfrmSayimKontrol(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::FormShow(TObject *Sender)
{
    // Donem Bilgisi comboBox'a dolduruluyor...
    comboDonem->Clear();
    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;    
    datamoduleORTEG->tblDONEM->First();
    while (!datamoduleORTEG->tblDONEM->Eof) {
        comboDonem->Items->Add(datamoduleORTEG->tblDONEMDONEM_TANIMI->Value);
        datamoduleORTEG->tblDONEM->Next();
    }
    datamoduleORTEG->tblDONEM->Close();
    comboDonem->ItemIndex = 0;
    comboDonem->Text = comboDonem->Items[0].Text;
    comboDonemChange(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::comboDonemChange(TObject *Sender)
{
    nSayim = 0; nDevir = 0;
    editDevir->Clear();

    queryFATURA->Close();
    queryFATURA->ParamByName("donem")->AsString = comboDonem->Text;
    queryFATURA->Open();

    nFaturaToplami = 0;
    queryFATURA->First();
    while (!queryFATURA->Eof) {
        nFaturaToplami += (ceil(queryFATURAALIS_TOPLAMI->Value/1000)*1000);
        queryFATURA->Next();
    }
    queryFATURA->First();
    editFaturaToplami->Text = FormatFloat("###,###,###,###", nFaturaToplami);
    ProgressBar1->Position = 20; // Fatura Toplamý Hesaplandý....

    queryICDAGITIM->Close();
    queryICDAGITIM->ParamByName("donem")->AsString = comboDonem->Text;
    queryICDAGITIM->Open();

    nIcDagitimToplami = 0;
    queryICDAGITIM->First();
    while (!queryICDAGITIM->Eof) {
        nIcDagitimToplami += (ceil(queryICDAGITIMALIS_TOPLAMI->Value/1000)*1000);
        queryICDAGITIM->Next();
    }
    queryICDAGITIM->First();

    editIcDagitimlar->Text = FormatFloat("###,###,###,###", nIcDagitimToplami);
    ProgressBar1->Position = 40; // Ýç Daðýtým Toplamý Hesaplandý....

    queryIADE_ICDAGITIM->Close();
    queryIADE_ICDAGITIM->ParamByName("donem")->AsString = comboDonem->Text;
    queryIADE_ICDAGITIM->Open();

    nIadeIcDagitimToplami = 0;
    queryIADE_ICDAGITIM->First();
    while (!queryIADE_ICDAGITIM->Eof) {
        nIadeIcDagitimToplami += (ceil(queryIADE_ICDAGITIMALIS_TOPLAMI->Value/1000)*1000);
        queryIADE_ICDAGITIM->Next();
    }
    queryIADE_ICDAGITIM->First();

    editIadeIcDagitimlar->Text = FormatFloat("###,###,###,###", nIadeIcDagitimToplami);
    ProgressBar1->Position = 60; // Ýade Ýç Daðýtým Toplamý Hesaplandý....

    queryTEMIZLIK->Close();
    queryTEMIZLIK->ParamByName("donem")->AsString = comboDonem->Text;
    queryTEMIZLIK->Open();

    nTemizlikToplami = 0;
    queryTEMIZLIK->First();
    while (!queryTEMIZLIK->Eof) {
        nTemizlikToplami += (ceil(queryTEMIZLIKALIS_TOPLAMI->Value/1000)*1000);
        queryTEMIZLIK->Next();
    }
    queryTEMIZLIK->First();

    editTemizlikTutanagi->Text = FormatFloat("###,###,###,###", nTemizlikToplami);
    ProgressBar1->Position = 80; // Temizlik Toplamý Hesaplandý....

    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->Filter = "[DONEM_TANIMI]='"+ comboDonem->Text+"'";
    datamoduleORTEG->tblDONEM->Filtered = true;

    if (datamoduleORTEG->tblDONEMDONEM_TANIMI->Value.Length() < 1)
        datamoduleORTEG->tblDONEM->Close();
    else {
        comboDonem->Text;
        queryCIKTITOPLAMI->Close();
        queryCIKTITOPLAMI->ParamByName("tarih")->AsDateTime = datamoduleORTEG->tblDONEMBITIS->Value;
        queryCIKTITOPLAMI->Open();

        queryGIRDITOPLAMI->Close();
        queryGIRDITOPLAMI->ParamByName("tarih")->AsDateTime = datamoduleORTEG->tblDONEMBITIS->Value;
        queryGIRDITOPLAMI->Open();

        ProgressBar1->Position = 100;

        nSayim = (ceil(queryGIRDITOPLAMIGIRDI_TOPLAMI->Value/1000)*1000) - (ceil(queryCIKTITOPLAMICIKTI_TOPLAMI->Value/1000)*1000);
        editSayim->Text = FormatFloat("###,###,###,###", nSayim);
    }
    nGirisToplami = nFaturaToplami + nIadeIcDagitimToplami;
    editGirisToplami->Text = FormatFloat("###,###,###,###", nGirisToplami);

    nCikisToplami = nSayim + nIcDagitimToplami + nTemizlikToplami;
    editCikislarToplami->Text = FormatFloat("###,###,###,###", nCikisToplami);

    staticFark->Caption = FormatFloat("###,###,###,###", (nCikisToplami - nGirisToplami));

    ProgressBar1->Position = 0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::editDevirChange(TObject *Sender)
{
    if (editDevir->Text.Length() <= 0)
        editDevir->Text = "0";

    nDevir = StrToFloat(editDevir->Text);

    nGirisToplami = nDevir + nFaturaToplami + nIadeIcDagitimToplami;
    editGirisToplami->Text = FormatFloat("###,###,###,###", nGirisToplami);

    staticFark->Caption = FormatFloat("###,###,###,###", (nGirisToplami - nCikisToplami));
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::editSayimChange(TObject *Sender)
{
    if (ProgressBar1->Position == 0) {
        if (editSayim->Text.Length() <= 0)
            editSayim->Text = "0";

        nSayim = StrToFloat(editSayim->Text);

        nCikisToplami = nSayim + nIcDagitimToplami + nTemizlikToplami;
        editCikislarToplami->Text = FormatFloat("###,###,###,###", nCikisToplami);

        staticFark->Caption = FormatFloat("###,###,###,###", (nGirisToplami - nCikisToplami));        
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::DetailBand1AfterPrint(
      TQRCustomBand *Sender, bool BandPrinted)
{
    // dataset 
    nAlisFiyati += (ceil(quickrepRAPOR->DataSet->FieldByName("ALIS_TOPLAMI")->AsFloat/1000)*1000);
    nSatisFiyati += (ceil(quickrepRAPOR->DataSet->FieldByName("SATIS_TOPLAMI")->AsFloat/1000)*1000);
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::PageFooterBand1BeforePrint(
      TQRCustomBand *Sender, bool &PrintBand)
{
    qrlabelAlisToplami->Caption = FormatFloat("###,###,###,###", nAlisFiyati);
    qrlabelSatisToplami->Caption = FormatFloat("###,###,###,###", nSatisFiyati);
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::FaturaListesi1Click(TObject *Sender)
{                                                  
    QRLabel6->Caption = comboDonem->Text + " DÖNEMÝ";
    QRLabel7->Caption = "FATURA DETAY LÝSTESÝ";
    quickrepRAPOR->DataSet = queryFATURA;
    QRDBText1->DataSet = quickrepRAPOR->DataSet;
    QRDBText2->DataSet = quickrepRAPOR->DataSet;
    QRDBText3->DataSet = quickrepRAPOR->DataSet;
    QRDBText4->DataSet = quickrepRAPOR->DataSet;
    QRDBText5->DataSet = quickrepRAPOR->DataSet;

    quickrepRAPOR->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::DatmListesi1Click(TObject *Sender)
{
    QRLabel6->Caption = comboDonem->Text + " DÖNEMÝ";
    QRLabel7->Caption = "ÝÇ DAÐITIM DETAY LÝSTESÝ";

    quickrepRAPOR->DataSet = queryICDAGITIM;
    QRDBText1->DataSet = quickrepRAPOR->DataSet;
    QRDBText2->DataSet = quickrepRAPOR->DataSet;
    QRDBText3->DataSet = quickrepRAPOR->DataSet;
    QRDBText4->DataSet = quickrepRAPOR->DataSet;
    QRDBText5->DataSet = quickrepRAPOR->DataSet;

    quickrepRAPOR->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::adeDatmListesi1Click(TObject *Sender)
{
    QRLabel6->Caption = comboDonem->Text + " DÖNEMÝ";
    QRLabel7->Caption = "ÝADE ÝÇ DAÐITIM DETAY LÝSTESÝ";

    quickrepRAPOR->DataSet = queryIADE_ICDAGITIM;
    QRDBText1->DataSet = quickrepRAPOR->DataSet;
    QRDBText2->DataSet = quickrepRAPOR->DataSet;
    QRDBText3->DataSet = quickrepRAPOR->DataSet;
    QRDBText4->DataSet = quickrepRAPOR->DataSet;
    QRDBText5->DataSet = quickrepRAPOR->DataSet;

    quickrepRAPOR->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::TemizlikTutana1Click(TObject *Sender)
{
    QRLabel6->Caption = comboDonem->Text + " DÖNEMÝ";
    QRLabel7->Caption = "TEMÝZLÝK ÇIKIÞI DETAY LÝSTESÝ";

    quickrepRAPOR->DataSet = queryTEMIZLIK;
    QRDBText1->DataSet = quickrepRAPOR->DataSet;
    QRDBText2->DataSet = quickrepRAPOR->DataSet;
    QRDBText3->DataSet = quickrepRAPOR->DataSet;
    QRDBText4->DataSet = quickrepRAPOR->DataSet;
    QRDBText5->DataSet = quickrepRAPOR->DataSet;

    quickrepRAPOR->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::KapakSayfas1Click(TObject *Sender)
{
    qrlabelDonem->Caption = comboDonem->Text;

    // Giriþler Bölümü Giriliyor...
    qrlabelDevir->Caption = FormatFloat("###,###,###,###", StrToFloat(editDevir->Text));
    qrlabelFaturaToplami->Caption = editFaturaToplami->Text;
    qrlabelIadeIcDagitimlar->Caption = editIadeIcDagitimlar->Text;
    qrlabelGirisToplami->Caption = editGirisToplami->Text;

    // Çýkýþlar Bölümü Giriliyor...
    qrlabelSayim->Caption = editSayim->Text;
    qrlabelIcDagitimlar->Caption = editIcDagitimlar->Text;
    qrlabelTemizlikTutanagi->Caption = editTemizlikTutanagi->Text;
    qrlabelCikisToplami->Caption = editCikislarToplami->Text;

    // Fark Hanesinin Giriþi Yapýlýyor...
    qrlabelFark->Caption = staticFark->Caption;

    QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::quickrepRAPORBeforePrint(
      TCustomQuickRep *Sender, bool &PrintReport)
{
    nAlisFiyati = 0;
    nSatisFiyati = 0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::quickrepRAPORAfterPrint(TObject *Sender)
{
    nAlisFiyati = 0;
    nSatisFiyati = 0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::queryFATURAALIS_TOPLAMIGetText(
      TField *Sender, AnsiString &Text, bool DisplayText)
{
    double nYuvarlananSayi;

    nYuvarlananSayi = floor(queryFATURAALIS_TOPLAMI->Value/1000) * 1000;
    Text = FormatFloat("###,###,###,###", nYuvarlananSayi);
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::queryICDAGITIMALIS_TOPLAMIGetText(
      TField *Sender, AnsiString &Text, bool DisplayText)
{
    double nYuvarlananSayi;

    nYuvarlananSayi = ceil(queryICDAGITIMALIS_TOPLAMI->Value/1000) * 1000;
    Text = FormatFloat("###,###,###,###", nYuvarlananSayi);
}
//---------------------------------------------------------------------------


void __fastcall TfrmSayimKontrol::queryIADE_ICDAGITIMALIS_TOPLAMIGetText(
      TField *Sender, AnsiString &Text, bool DisplayText)
{
    double nYuvarlananSayi;

    nYuvarlananSayi = ceil(queryIADE_ICDAGITIMALIS_TOPLAMI->Value/1000) * 1000;
    Text = FormatFloat("###,###,###,###", nYuvarlananSayi);
}
//---------------------------------------------------------------------------

void __fastcall TfrmSayimKontrol::queryTEMIZLIKALIS_TOPLAMIGetText(
      TField *Sender, AnsiString &Text, bool DisplayText)
{
    double nYuvarlananSayi;

    nYuvarlananSayi = ceil(queryTEMIZLIKALIS_TOPLAMI->Value/1000) * 1000;
    Text = FormatFloat("###,###,###,###", nYuvarlananSayi);
}
//---------------------------------------------------------------------------


