//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "icdagitimlist.h"
#include "icdagitim.h"
#include "datamodule.h"
#include <stdio.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmIcDagitimList *frmIcDagitimList;
//---------------------------------------------------------------------------
__fastcall TfrmIcDagitimList::TfrmIcDagitimList(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmIcDagitimList::FormShow(TObject *Sender)
{
    // Ünite Adlarý comboBox'lara dolduruluyor
    comboFirmaAdi->Clear();
    datamoduleORTEG->tblUNITE->Open();
    datamoduleORTEG->tblUNITE->First();
    comboFirmaAdi->Items->Add("tümü...");
    while (!datamoduleORTEG->tblUNITE->Eof) {
        comboFirmaAdi->Items->Add(datamoduleORTEG->tblUNITEUNITE_ADI->Value);
        datamoduleORTEG->tblUNITE->Next();
    }
    datamoduleORTEG->tblUNITE->Close();
    // Ünite Adlarý comboBox'lara dolduruldu...

    // Donem Bilgisi comboBox'a dolduruluyor...
    comboDonem->Clear();
    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;    
    datamoduleORTEG->tblDONEM->First();
    comboDonem->Items->Add("tümü...");
    while (!datamoduleORTEG->tblDONEM->Eof) {
        comboDonem->Items->Add(datamoduleORTEG->tblDONEMDONEM_TANIMI->Value);
        datamoduleORTEG->tblDONEM->Next();
    }
    datamoduleORTEG->tblDONEM->Close();
    // Donem Bilgisi comboBox'a dolduruldu...

    // Hareket Türü dolduruluyor...
    comboHareketTuru->Clear();
    comboHareketTuru->Items->Add("tümü...");
    comboHareketTuru->Items->Add("IADE BELGESÝ");
    comboHareketTuru->Items->Add("CIKTI BELGESÝ");
    comboHareketTuru->Items->Add("GIRDI BELGESÝ");    
    comboHareketTuru->Items->Add("TEMIZLIK TUTANAGI");
    // Hareket Türü dolduruldu...

    comboFirmaAdi->ItemIndex = 0;
    comboHareketTuru->ItemIndex = 0;
    comboDonem->ItemIndex = 0;

    comboHareketTuruChange(Sender);
}
//---------------------------------------------------------------------------
void __fastcall TfrmIcDagitimList::comboHareketTuruChange(TObject *Sender)
{
    AnsiString szBelgeNo, szDonemNo, szFirmaAdi, szBelgeTuru;

    if (comboHareketTuru->Text == "tümü...")
        szBelgeTuru = "";
    else
        szBelgeTuru = comboHareketTuru->Text;

    if (editIcDagitimNo->Text.Length() > 0) {
        szBelgeNo.sprintf("%04d", StrToInt(editIcDagitimNo->Text));
    }
    else
        szBelgeNo = szBelgeNo + "%";

    if (comboDonem->Text == "tümü...")
        szDonemNo = "";
    else
        szDonemNo = comboDonem->Text;

    if (comboFirmaAdi->Text == "tümü...")
        szFirmaAdi = "";
    else
        szFirmaAdi = comboFirmaAdi->Text;

    queryIC_DAGITIM->Close();
    queryIC_DAGITIM->SQL->Clear();
    queryIC_DAGITIM->SQL->Add("select distinct belge_turu, belge_no, firma_adi, firma_kodu, donem from icdagitim");
    queryIC_DAGITIM->SQL->Add("where belge_turu like '%"+szBelgeTuru+"%' and belge_no like " +
        "'%"+szBelgeNo+"%' and firma_adi like '%"+szFirmaAdi + "%' and donem like '%" + szDonemNo+"%'");
    queryIC_DAGITIM->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitimList::comboFirmaAdiChange(TObject *Sender)
{
    comboHareketTuruChange(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitimList::comboDonemChange(TObject *Sender)
{
    comboHareketTuruChange(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitimList::editIcDagitimNoChange(TObject *Sender)
{
    comboHareketTuruChange(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitimList::DBGrid1CellClick(TColumn *Column)
{
    int nDeger;
    TObject *Sender;

    nDeger = Application->MessageBox("Seçtiðiniz kartý onaylýyor musunuz?", "Onay Kutusu",
            MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        frmIcDagitim->comboDonem->ItemIndex = frmIcDagitim->comboDonem->Items->IndexOf(queryIC_DAGITIMdonem->Value);
        frmIcDagitim->comboDonemChange(Sender);
        frmIcDagitim->editBelgeNo->Text = queryIC_DAGITIMbelge_no->Value;

        if (frmIcDagitim->comboBelgeTuru->Text == "IADE BELGESÝ" || frmIcDagitim->comboBelgeTuru->Text == "GIRDI BELGESÝ")
            szBelgeTuru = "GIRDI";
        else if (frmIcDagitim->comboBelgeTuru->Text == "CIKTI BELGESÝ")
            szBelgeTuru = "CIKTI";
        else if (frmIcDagitim->comboBelgeTuru->Text == "TEMIZLIK TUTANAGI")
            szBelgeTuru = "TEMIZLIK";

        szBelgeNo = queryIC_DAGITIMbelge_no->Value;
        szFirmaAdi = queryIC_DAGITIMfirma_adi->Value;
        nFirmaKodu = queryIC_DAGITIMFIRMA_KODU->Value;

        frmIcDagitimList->Close();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmIcDagitimList::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    int nDeger;

    if (Key == Char(VK_RETURN)) {
        Key = 0;
        nDeger = Application->MessageBox("Seçtiðiniz kartý onaylýyor musunuz?", "Onay Kutusu",
                MB_YESNO + MB_ICONQUESTION);

        if (nDeger == IDYES) {
            frmIcDagitim->comboDonem->ItemIndex = frmIcDagitim->comboDonem->Items->IndexOf(queryIC_DAGITIMdonem->Value);
            frmIcDagitim->comboDonemChange(Sender);
            frmIcDagitim->editBelgeNo->Text = queryIC_DAGITIMbelge_no->Value;

            if (frmIcDagitim->comboBelgeTuru->Text == "IADE BELGESÝ" || frmIcDagitim->comboBelgeTuru->Text == "GIRDI BELGESÝ")
                szBelgeTuru = "GIRDI";
            else if (frmIcDagitim->comboBelgeTuru->Text == "CIKTI BELGESÝ")
                szBelgeTuru = "CIKTI";
            else if (frmIcDagitim->comboBelgeTuru->Text == "TEMIZLIK TUTANAGI")
                szBelgeTuru = "TEMIZLIK";

            szBelgeNo = queryIC_DAGITIMbelge_no->Value;
            szFirmaAdi = queryIC_DAGITIMfirma_adi->Value;
            nFirmaKodu = queryIC_DAGITIMFIRMA_KODU->Value;

            frmIcDagitimList->Close();
        }
    }
}
//---------------------------------------------------------------------------

