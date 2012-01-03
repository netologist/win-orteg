//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "hareket.h"
#include "firmakarti.h"
#include "hrkbarkod.h"
#include "gircikbelgesi.h"
#include "barkodgiris.h"
#include "fiyattablosu.h"
#include "hareketozellikleri.h"
#include "stoklist.h"
#include "firmalist.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmHareket *frmHareket;
bool bMiktarCevirme = true;
bool bStokCagirma = true;
//---------------------------------------------------------------------------
__fastcall TfrmHareket::TfrmHareket(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::comboBelgeTuruChange(TObject *Sender)
{
    if (comboBelgeTuru->Text == "GIRDI")
        DBGrid1->Color = (TColor) 0x00DAFEFD;
    else if (comboBelgeTuru->Text == "CIKTI")
        DBGrid1->Color = (TColor) 0x00E9EBEF;
    else if (comboBelgeTuru->Text == "TEMIZLIK")
        DBGrid1->Color = (TColor) 0x00D2E6F0;

    if (comboBelgeTuru->Text == "TEMIZLIK") {
        radiogroupFIRMASECIMI->ItemIndex = 1;
        radiogroupFIRMASECIMI->Enabled = false;
    }
    else
        radiogroupFIRMASECIMI->Enabled = true;

    // Filtrele .....
    szBelgeTuru = comboBelgeTuru->Text;
    if (radiogroupFIRMASECIMI->ItemIndex == 0 && editFirmaKodu->Text.Length() > 0)
        nFirmaKodu = StrToFloat(editFirmaKodu->Text);
    else
        nFirmaKodu = -1;
    szFirmaAdi = comboUniteAdi->Text;
    dtTarih.Val = datetimeTarih->Date.Val;

    datamoduleORTEG->tblSTOKHAR->Filtered = false;
    if (radiogroupFIRMASECIMI->ItemIndex == 0) {
        datamoduleORTEG->tblSTOKHAR->Filter = "[BELGE_TURU]='"+szBelgeTuru
            +"' AND [TARIH]='"+dtTarih.DateString()
            +"' AND [FIRMA_KODU]='"+FloatToStr(nFirmaKodu)+"'";
    }
    else {
        datamoduleORTEG->tblSTOKHAR->Filter = "[BELGE_TURU]='"+szBelgeTuru
            +"' AND [TARIH]='"+dtTarih.DateString()
            +"' AND [FIRMA_ADI]='"+szFirmaAdi+"'";
    }
    datamoduleORTEG->tblSTOKHAR->Filtered = true;

    HareketToplamiGetir(); // Hareket Toplamý olunuyor...
}
//---------------------------------------------------------------------------
void __fastcall TfrmHareket::datetimeTarihChange(TObject *Sender)
{
    // Donem bilgisi dolduruluyor....
    AnsiString szIndeksSayisi;

    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->First();
    while (!datamoduleORTEG->tblDONEM->Eof) {
        // Indeks bilgisini ata...
        if (datetimeTarih->Date >= datamoduleORTEG->tblDONEMBASLANGIC->Value && datetimeTarih->Date <= datamoduleORTEG->tblDONEMBITIS->Value+1)
            szIndeksSayisi = datamoduleORTEG->tblDONEMDONEM_TANIMI->Value;
        datamoduleORTEG->tblDONEM->Next();
    }
    comboDonem->ItemIndex = comboDonem->Items->IndexOf(szIndeksSayisi);

    if (comboDonem->ItemIndex == -1)
        comboDonem->ItemIndex = 0;

    if (datamoduleORTEG->tblSTOKHAR->Active == true && datamoduleORTEG->tblSTOKHARSTOK_KODU->Value > 0) {
        datamoduleORTEG->tblSTOKHAR->Edit();
        datamoduleORTEG->tblSTOKHAR->Post();
    }
    datamoduleORTEG->tblDONEM->Close();

    //-------------------------------------------------------------------
    // Filtrele .....
    szBelgeTuru = comboBelgeTuru->Text;
    if (radiogroupFIRMASECIMI->ItemIndex == 0 && editFirmaKodu->Text.Length() > 0)
        nFirmaKodu = StrToFloat(editFirmaKodu->Text);
    else
        nFirmaKodu = -1;
    szFirmaAdi = comboUniteAdi->Text;
    dtTarih.Val = datetimeTarih->Date.Val;

    datamoduleORTEG->tblSTOKHAR->Filtered = false;
    if (radiogroupFIRMASECIMI->ItemIndex == 0) {
        datamoduleORTEG->tblSTOKHAR->Filter = "[BELGE_TURU]='"+szBelgeTuru
            +"' AND [TARIH]='"+dtTarih.DateString()
            +"' AND [FIRMA_KODU]='"+FloatToStr(nFirmaKodu)+"'";
    }
    else {
        datamoduleORTEG->tblSTOKHAR->Filter = "[BELGE_TURU]='"+szBelgeTuru
            +"' AND [TARIH]='"+dtTarih.DateString()
            +"' AND [FIRMA_ADI]='"+szFirmaAdi+"'";
    }
    datamoduleORTEG->tblSTOKHAR->Filtered = true;
    //----------------------------------------------------------------------

    HareketToplamiGetir(); // Hareket Toplamý olunuyor...
}
//---------------------------------------------------------------------------
void __fastcall TfrmHareket::editBelgeNoChange(TObject *Sender)
{
    szBelgeNo = editBelgeNo->Text;
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::FormShow(TObject *Sender)
{
//*****************************************************************************
    szBelgeNo = NULL;
    comboBelgeTuru->ItemIndex = 0;
    datetimeTarih->Date = datetimeTarih->Date.CurrentDate();

    datamoduleORTEG->tblUNITE->Open();
    datamoduleORTEG->tblUNITE->Filtered = false;
    datamoduleORTEG->tblUNITE->First();
    comboUniteAdi->Clear();
    while (!datamoduleORTEG->tblUNITE->Eof) {
        comboUniteAdi->Items->Add(datamoduleORTEG->tblUNITEUNITE_ADI->Value);
        datamoduleORTEG->tblUNITE->Next();
    }
    datamoduleORTEG->tblUNITE->Close();
    comboUniteAdi->ItemIndex = 0;

    // Ýlk deðerleri aktar....
    dtTarih = datetimeTarih->Date;
    szBelgeTuru = comboBelgeTuru->Text;
    // Ünite Firma bilgileri dolduruluyor....
    radiogroupFIRMASECIMIClick(Sender);
//*****************************************************************************

    // Kayýt Sorgula....
    datamoduleORTEG->tblSTOKHAR->Open();
    datamoduleORTEG->tblSTOKHAR->Filtered = true;

    if (comboBelgeTuru->Text == "GIRDI")
        DBGrid1->Color = (TColor) 0x00CCF2F9;
    else
        DBGrid1->Color = (TColor) 0x00E9EBEF;

    // Donem bilgisi dolduruluyor....
    AnsiString szIndeksSayisi;

    datamoduleORTEG->tblDONEM->Open();
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->First();
    comboDonem->Items->Clear();
    comboDonem->Items->Add("Dönem Dýþý Hareket...");
    while (!datamoduleORTEG->tblDONEM->Eof) {
        comboDonem->Items->Add(datamoduleORTEG->tblDONEMDONEM_TANIMI->Value);
        // Indeks bilgisini ata...
        if (datetimeTarih->Date >= datamoduleORTEG->tblDONEMBASLANGIC->Value && datetimeTarih->Date <= datamoduleORTEG->tblDONEMBITIS->Value+1)
            szIndeksSayisi = datamoduleORTEG->tblDONEMDONEM_TANIMI->Value;
        datamoduleORTEG->tblDONEM->Next();
    }
    comboDonem->ItemIndex = comboDonem->Items->IndexOf(szIndeksSayisi);

    if (comboDonem->ItemIndex == -1)
        comboDonem->ItemIndex = 0;

    datamoduleORTEG->tblDONEM->Close();

    Timer1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::DBGrid1KeyPress(TObject *Sender, char &Key)
{
    char chKontrolKey;

    if (Key == Char(VK_RETURN)) {
        Key = 0;

        if (DBGrid1->SelectedIndex < DBGrid1->FieldCount-1)
            ++DBGrid1->SelectedIndex;
        else {
            DBGrid1->SelectedIndex = 0;
            // Kayýt ediliyor....
            Kaydet1Click(Sender);
        }
    }

    if ((DBGrid1->SelectedIndex >= hareketPAKET_ICINDE && DBGrid1->SelectedIndex <= hareketKDV) && (DBGrid1->Columns->Items[hareketPAKET_ICINDE]->Visible == false))
        DBGrid1->SelectedIndex = hareketALISFIYATI;
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::SpeedButton1Click(TObject *Sender)
{
    frmFirmaListesi->Caption = "Firma Listesi [Hareket Ekrani]";
    frmFirmaListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::Kaydet1Click(TObject *Sender)
{
    datamoduleORTEG->tblSTOKHAR->Edit();
    datamoduleORTEG->tblSTOKHAR->Post();

    // ÝÇ DAÐITIMA ÝÞLENÝYOR........
    datamoduleORTEG->tblIC_DAGITIM->Open();
    datamoduleORTEG->tblIC_DAGITIM->Filtered = true;
    datamoduleORTEG->tblIC_DAGITIM->Filter = "[HAREKET_NO]="+FloatToStr(datamoduleORTEG->tblSTOKHARHAREKET_NO->Value);

    if (datamoduleORTEG->tblIC_DAGITIMHAREKET_NO->Value > 0)
    {
        datamoduleORTEG->tblIC_DAGITIM->Edit();
        datamoduleORTEG->tblIC_DAGITIMSTOK_KODU->Value = datamoduleORTEG->tblSTOKHARSTOK_KODU->Value;

        datamoduleORTEG->tblIC_DAGITIM->Edit();
        datamoduleORTEG->tblIC_DAGITIMSTOK_ADI->Value = datamoduleORTEG->tblSTOKHARSTOK_ADI->Value;

        datamoduleORTEG->tblIC_DAGITIM->Edit();
        datamoduleORTEG->tblIC_DAGITIMBIRIMI->Value = datamoduleORTEG->tblSTOKHARBIRIMI->Value;

        datamoduleORTEG->tblIC_DAGITIM->Edit();
        datamoduleORTEG->tblIC_DAGITIMMIKTAR->Value
            = datamoduleORTEG->tblSTOKHARMIKTAR->Value;

        datamoduleORTEG->tblIC_DAGITIM->Edit();
        datamoduleORTEG->tblIC_DAGITIMALIS_FIYATI->Value
            = datamoduleORTEG->tblSTOKHARALIS_FIYATI->Value;

        datamoduleORTEG->tblIC_DAGITIM->Edit();
        datamoduleORTEG->tblIC_DAGITIMSATIS_FIYATI->Value
            = datamoduleORTEG->tblSTOKHARSATIS_FIYATI->Value;

        if (datamoduleORTEG->tblSTOKHARMIKTAR->Value > 0)
        {
            datamoduleORTEG->tblIC_DAGITIM->Edit();
            datamoduleORTEG->tblIC_DAGITIMALIS_TUTARI->Value
                = datamoduleORTEG->tblSTOKHARALIS_FIYATI->Value * datamoduleORTEG->tblSTOKHARMIKTAR->Value;

            datamoduleORTEG->tblIC_DAGITIM->Edit();
            datamoduleORTEG->tblIC_DAGITIMSATIS_TUTARI->Value
                = datamoduleORTEG->tblSTOKHARSATIS_FIYATI->Value * datamoduleORTEG->tblSTOKHARMIKTAR->Value;
        }

        datamoduleORTEG->tblIC_DAGITIM->Edit();
        datamoduleORTEG->tblIC_DAGITIM->Post();
    }
    datamoduleORTEG->tblIC_DAGITIM->Filtered = false;
    datamoduleORTEG->tblIC_DAGITIM->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::HareketToplamiGetir(void)
{
    // Fiyat hesaplanýyor....
    queryHAREKETTOPLAMI->Close();
    queryHAREKETTOPLAMI->SQL->Clear();
    if (radiogroupFIRMASECIMI->ItemIndex == 0)
    {
        queryHAREKETTOPLAMI->SQL->Add("select sum(satis_tutari), sum(alis_tutari), sum(kar) from stokhar");
        queryHAREKETTOPLAMI->SQL->Add("where BELGE_TURU='"+szBelgeTuru+"' and ");
        queryHAREKETTOPLAMI->SQL->Add("TARIH='"+dtTarih.DateString()+"' and");
        queryHAREKETTOPLAMI->SQL->Add("FIRMA_KODU='"+FloatToStr(nFirmaKodu)+"'");
    }
    else {
        queryHAREKETTOPLAMI->SQL->Add("select sum(satis_tutari), sum(alis_tutari), sum(kar) from stokhar");
        queryHAREKETTOPLAMI->SQL->Add("where BELGE_TURU='"+szBelgeTuru+"' and ");
        queryHAREKETTOPLAMI->SQL->Add("TARIH='"+dtTarih.DateString()+"' and");
        queryHAREKETTOPLAMI->SQL->Add("FIRMA_ADI='"+szFirmaAdi+"'");
    }
    queryHAREKETTOPLAMI->Open();

    StatusBar1->Panels->Items[6]->Text = FormatFloat("###,###,###,###", (queryHAREKETTOPLAMISUMOFalis_tutari->Value))+" ";
    StatusBar1->Panels->Items[8]->Text = FormatFloat("###,###,###,###", (queryHAREKETTOPLAMISUMOFsatis_tutari->Value))+" ";
    StatusBar1->Panels->Items[10]->Text = FormatFloat("###,###,###,###", (queryHAREKETTOPLAMISUMOFkar->Value))+" ";
    // Fiyat hesaplandý....
    queryHAREKETTOPLAMI->Open();
}

void __fastcall TfrmHareket::Yeni1Click(TObject *Sender)
{
    datamoduleORTEG->tblSTOKHAR->Insert();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::StokEkle1Click(TObject *Sender)
{
    frmStokListesi->Caption = "Stok Listesi [Hareket Ekrani]";
    frmStokListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::Sil2Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        datamoduleORTEG->tblIC_DAGITIM->Open();
        datamoduleORTEG->tblIC_DAGITIM->Filter = "[HAREKET_NO]='"+FloatToStr(datamoduleORTEG->tblSTOKHARHAREKET_NO->Value)+"'";
        datamoduleORTEG->tblIC_DAGITIM->Filtered = true;

        if (datamoduleORTEG->tblIC_DAGITIMHAREKET_NO->Value > 0)
            datamoduleORTEG->tblIC_DAGITIM->Delete();

        datamoduleORTEG->tblIC_DAGITIM->Filtered = false;
        datamoduleORTEG->tblIC_DAGITIM->Close();

        datamoduleORTEG->tblSTOKHAR->Delete();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::Timer1Timer(TObject *Sender)
{
    static nKayitNo;

    // STOKADI mý yoksa STOKKODU na göremi çevireceðini buraya bakarak anlýyor...
    if (DBGrid1->SelectedIndex == hareketCINSI)
        bStokCagirma = true;
    else if (DBGrid1->SelectedIndex == hareketKOD)
        bStokCagirma = false;
    // --------------------------------------------------- kod burada bitiyor...

    // miktarý neye göre çevireceðini buraya bakarak anlýyor...
    if (DBGrid1->SelectedIndex == hareketMIKTAR)
        bMiktarCevirme = true;
    else if (DBGrid1->SelectedIndex == hareketMIKTAR2)
        bMiktarCevirme = false;
    // ---------------------------- anladýðý kod burada bitiyor...

    if (comboUniteAdi->Text.Length() == 0 && radiogroupFIRMASECIMI->ItemIndex == 0)
        datamoduleORTEG->tblSTOKHAR->Close();
    else
        datamoduleORTEG->tblSTOKHAR->Open();

    if (datamoduleORTEG->tblSTOKHAR->Active == true)
    {
        // STOK DURUMUNU HESAPLANIYOR......
        if (datamoduleORTEG->tblSTOKHAR->RecNo != nKayitNo)
        {
            nKayitNo = datamoduleORTEG->tblSTOKHAR->RecNo;

            queryGIRISTOPLAMI->Close();
            queryGIRISTOPLAMI->Open();
            queryCIKISTOPLAMI->Close();
            queryCIKISTOPLAMI->Open();

            StatusBar1->Panels->Items[1]->Text = datamoduleORTEG->tblSTOKHARSTOK_ADI->Value;
            StatusBar1->Panels->Items[3]->Text =
                FormatFloat("###,###,###,###.###", (queryGIRISTOPLAMISUMOFmiktar->Value - queryCIKISTOPLAMISUMOFmiktar->Value))+ " ";
        }
        // STOK DURUMUNU HESAPLANDI......
        
        tbtnKAYDET->Enabled = true;
        Yeni1->Enabled = true;
        tbtnYENI->Enabled = true;
        Kaydet1->Enabled = true;
        StokEkle1->Enabled = true;
        tbtnSTOKEKLE->Enabled = true;
        if (datamoduleORTEG->tblSTOKHAR->RecordCount > 0) {
            tbtnSIL->Enabled = true;
            tbtnFIYATTABLOSU->Enabled = true;
            FiyatTablosu1->Enabled = true;
            Sil1->Enabled = true;
            Sil2->Enabled = true;
            tbtnBAGLANTI->Enabled = true;
            BalantyKes1->Enabled = true;
            BalantyKes2->Enabled = true;
            Listeyiboalt1->Enabled = true;
        }
        else {
            tbtnSIL->Enabled = false;
            Sil1->Enabled = false;
            FiyatTablosu1->Enabled = false;
            tbtnFIYATTABLOSU->Enabled = false;
            Sil2->Enabled = false;
            tbtnBAGLANTI->Enabled = false;
            BalantyKes1->Enabled = false;
            BalantyKes2->Enabled = false;
            Listeyiboalt1->Enabled = false;
        }

        if (comboBelgeTuru->Text == "GIRDI" && radiogroupFIRMASECIMI->ItemIndex == 1) {
            adeTablosu1->Enabled = true;
            tbtnIADE->Enabled = true;
        }
        else {
            adeTablosu1->Enabled = false;
            tbtnIADE->Enabled = false;
        }
    }
    else {
        tbtnYENI->Enabled = false;
        Yeni1->Enabled = false;
        Kaydet1->Enabled = false;
        StokEkle1->Enabled = false;
        adeTablosu1->Enabled = false;
        tbtnFIYATTABLOSU->Enabled = false;
        tbtnIADE->Enabled = false;
        tbtnSIL->Enabled = false;
        tbtnSTOKEKLE->Enabled = false;
        Sil1->Enabled = false;
        Sil2->Enabled = false;
        tbtnBAGLANTI->Enabled = false;
        BalantyKes1->Enabled = false;
        BalantyKes2->Enabled = false;
        tbtnKAYDET->Enabled = false;
        Listeyiboalt1->Enabled = false;
    }

    Label6->Caption = "["+szBelgeTuru + "] / [" + dtTarih.DateString() + "] / [" + FloatToStr(nFirmaKodu) + "] / [" + szFirmaAdi + "]";
    Label6->Refresh();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::Listeyiboalt1Click(TObject *Sender)
{
    Sil1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::tbtnFIYATTESPITIClick(TObject *Sender)
{
    DBGrid1->Columns->Items[hareketNETFIYAT]->Visible = !DBGrid1->Columns->Items[hareketNETFIYAT]->Visible;
    DBGrid1->Columns->Items[hareketPAKET_ICINDE]->Visible = !DBGrid1->Columns->Items[hareketPAKET_ICINDE]->Visible;
    DBGrid1->Columns->Items[hareketISKONTO]->Visible = !DBGrid1->Columns->Items[hareketISKONTO]->Visible;
    DBGrid1->Columns->Items[hareketKDV]->Visible = !DBGrid1->Columns->Items[hareketKDV]->Visible;

    if (DBGrid1->Columns->Items[hareketPAKET_ICINDE]->Visible == true)
        tbtnFIYATTESPITI->ImageIndex = 8;
    else
        tbtnFIYATTESPITI->ImageIndex = 6;
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::FiyatTablosu1Click(TObject *Sender)
{
    frmFiyatTablosu->labelDurum->Caption = "Son Durum Tablosu";
    frmFiyatTablosu->labelStokKodu->Caption = FloatToStr(datamoduleORTEG->tblSTOKHARSTOK_KODU->Value);
    frmFiyatTablosu->Caption = "Fiyat Tablosu - [ Hareket Ekrani ]";
    frmFiyatTablosu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::radiogroupFIRMASECIMIClick(TObject *Sender)
{
    if (radiogroupFIRMASECIMI->ItemIndex == 0) {
        comboUniteAdi->Style = csSimple;
        SpeedButton1->Enabled = true;
        SpeedButton2->Enabled = true;
        editFirmaKodu->Text = "";
        comboUniteAdi->Text = "";
        comboUniteAdi->Enabled = false;
        datamoduleORTEG->tblSTOKHAR->Close();
    }
    else {
        comboUniteAdi->Enabled = true;
        editFirmaKodu->Text = "";
        comboUniteAdi->Style = (TComboBoxStyle) 2;// csDropDownList neden bu enum sabitinde hata verdiðini çözemedim.
        SpeedButton1->Enabled = false;
        SpeedButton2->Enabled = false;
        comboUniteAdiChange(Sender);
    }

    //-------------------------------------------------------------------
    // Filtrele .....
    szBelgeTuru = comboBelgeTuru->Text;
    if (radiogroupFIRMASECIMI->ItemIndex == 0 && editFirmaKodu->Text.Length() > 0)
        nFirmaKodu = StrToFloat(editFirmaKodu->Text);
    else
        nFirmaKodu = -1;
        
    szFirmaAdi = comboUniteAdi->Text;
    dtTarih.Val = datetimeTarih->Date.Val;

    datamoduleORTEG->tblSTOKHAR->Filtered = false;
    if (radiogroupFIRMASECIMI->ItemIndex == 0) {
        datamoduleORTEG->tblSTOKHAR->Filter = "[BELGE_TURU]='"+szBelgeTuru
            +"' AND [TARIH]='"+dtTarih.DateString()
            +"' AND [FIRMA_KODU]='"+FloatToStr(nFirmaKodu)+"'";
    }
    else {
        datamoduleORTEG->tblSTOKHAR->Filter = "[BELGE_TURU]='"+szBelgeTuru
            +"' AND [TARIH]='"+dtTarih.DateString()
            +"' AND [FIRMA_ADI]='"+szFirmaAdi+"'";
    }
    datamoduleORTEG->tblSTOKHAR->Filtered = true;
    //----------------------------------------------------------------------
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::comboUniteAdiChange(TObject *Sender)
{
    //-------------------------------------------------------------------
    // Filtrele .....
    szBelgeTuru = comboBelgeTuru->Text;
    if (radiogroupFIRMASECIMI->ItemIndex == 0 && editFirmaKodu->Text.Length() > 0)
        nFirmaKodu = StrToFloat(editFirmaKodu->Text);
    else
        nFirmaKodu = -1;
    szFirmaAdi = comboUniteAdi->Text;
    dtTarih.Val = datetimeTarih->Date.Val;

    datamoduleORTEG->tblSTOKHAR->Filtered = false;
    if (radiogroupFIRMASECIMI->ItemIndex == 0) {
        datamoduleORTEG->tblSTOKHAR->Filter = "[BELGE_TURU]='"+szBelgeTuru
            +"' AND [TARIH]='"+dtTarih.DateString()
            +"' AND [FIRMA_KODU]='"+FloatToStr(nFirmaKodu)+"'";
    }
    else {
        datamoduleORTEG->tblSTOKHAR->Filter = "[BELGE_TURU]='"+szBelgeTuru
            +"' AND [TARIH]='"+dtTarih.DateString()
            +"' AND [FIRMA_ADI]='"+szFirmaAdi+"'";
    }
    datamoduleORTEG->tblSTOKHAR->Filtered = true;
    //----------------------------------------------------------------------

    HareketToplamiGetir(); // Hareket Toplamý olunuyor...
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::zellikler1Click(TObject *Sender)
{
    frmHareketOzellikleri->dsrscSTOKHAR->DataSet = datamoduleORTEG->tblSTOKHAR;
    frmHareketOzellikleri->queryICDAGITIM->Open();
    frmHareketOzellikleri->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    datamoduleORTEG->tblSTOKHAR->Filtered = false;
    datamoduleORTEG->tblSTOKHAR->Close();

    Timer1->Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TfrmHareket::Sil1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Listeyi boþaltmak istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        datamoduleORTEG->tblIC_DAGITIM->Open();
        datamoduleORTEG->tblSTOKHAR->First();
        while (!datamoduleORTEG->tblSTOKHAR->Eof) {
            datamoduleORTEG->tblIC_DAGITIM->Filter = "[HAREKET_NO]='"+FloatToStr(datamoduleORTEG->tblSTOKHARHAREKET_NO->Value)+"'";
            datamoduleORTEG->tblIC_DAGITIM->Filtered = true;

            if (datamoduleORTEG->tblIC_DAGITIMHAREKET_NO->Value > 0)
                datamoduleORTEG->tblIC_DAGITIM->Delete();

            datamoduleORTEG->tblIC_DAGITIM->Filtered = false;
            datamoduleORTEG->tblSTOKHAR->Delete();
        }
        datamoduleORTEG->tblIC_DAGITIM->Close();
    }
}
//---------------------------------------------------------------------------



void __fastcall TfrmHareket::adeTablosu1Click(TObject *Sender)
{
    frmFiyatTablosu->labelDurum->Caption = "Ünite Ýade Tablosu";
    frmFiyatTablosu->labelStokKodu->Caption = FloatToStr(datamoduleORTEG->tblSTOKHARSTOK_KODU->Value);
    frmFiyatTablosu->Caption = "Fiyat Tablosu - [ Hareket Ekrani ]";
    frmFiyatTablosu->Show();
}
//---------------------------------------------------------------------------


void __fastcall TfrmHareket::comboDonemChange(TObject *Sender)
{
    // Donemin baþlangýç tarihi atanýyor....
    datamoduleORTEG->tblDONEM->Filter = "[DONEM_TANIMI]='"+comboDonem->Text+"'";
    datamoduleORTEG->tblDONEM->Filtered = true;
    datamoduleORTEG->tblDONEM->Open();
    datetimeTarih->Date = datamoduleORTEG->tblDONEMBASLANGIC->Value;
    datamoduleORTEG->tblDONEM->Filtered = false;
    datamoduleORTEG->tblDONEM->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::SpeedButton2Click(TObject *Sender)
{
    frmFirma->Show();
}
//---------------------------------------------------------------------------



void __fastcall TfrmHareket::comboUniteAdiClick(TObject *Sender)
{
    if (datamoduleORTEG->tblSTOKHAR->Active == true && datamoduleORTEG->tblSTOKHARSTOK_KODU->Value > 0)
        Kaydet1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::comboBelgeTuruClick(TObject *Sender)
{
    if (datamoduleORTEG->tblSTOKHAR->Active == true && datamoduleORTEG->tblSTOKHARSTOK_KODU->Value > 0)
        Kaydet1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::datetimeTarihClick(TObject *Sender)
{
    if (datamoduleORTEG->tblSTOKHAR->Active == true && datamoduleORTEG->tblSTOKHARSTOK_KODU->Value > 0)
        Kaydet1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::comboDonemClick(TObject *Sender)
{
    if (datamoduleORTEG->tblSTOKHAR->Active == true && datamoduleORTEG->tblSTOKHARSTOK_KODU->Value > 0)
        Kaydet1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::BalantyKes1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Listenin baðlantýsýný kesmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        datamoduleORTEG->tblIC_DAGITIM->Open();
        datamoduleORTEG->tblSTOKHAR->First();
        while (!datamoduleORTEG->tblSTOKHAR->Eof) {
            datamoduleORTEG->tblIC_DAGITIM->Filter = "[HAREKET_NO]='"+FloatToStr(datamoduleORTEG->tblSTOKHARHAREKET_NO->Value)+"'";
            datamoduleORTEG->tblIC_DAGITIM->Filtered = true;

            if (datamoduleORTEG->tblIC_DAGITIMHAREKET_NO->Value > 0)
                datamoduleORTEG->tblIC_DAGITIM->Delete();

            datamoduleORTEG->tblIC_DAGITIM->Filtered = false;

            datamoduleORTEG->tblSTOKHAR->Edit();
            szBelgeNo = "-1";
            datamoduleORTEG->tblSTOKHARIC_DAGITIM_NO->Value = "-1";
            datamoduleORTEG->tblSTOKHAR->Post();
        }
        datamoduleORTEG->tblIC_DAGITIM->Close();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::BalantyKes2Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydýn baðlantýsýný kesmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        datamoduleORTEG->tblIC_DAGITIM->Open();
        datamoduleORTEG->tblIC_DAGITIM->Filter = "[HAREKET_NO]='"+FloatToStr(datamoduleORTEG->tblSTOKHARHAREKET_NO->Value)+"'";
        datamoduleORTEG->tblIC_DAGITIM->Filtered = true;

        if (datamoduleORTEG->tblIC_DAGITIMHAREKET_NO->Value > 0)
            datamoduleORTEG->tblIC_DAGITIM->Delete();

        datamoduleORTEG->tblIC_DAGITIM->Filtered = false;
        datamoduleORTEG->tblIC_DAGITIM->Close();

        datamoduleORTEG->tblSTOKHAR->Edit();
        szBelgeNo = "-1";
        datamoduleORTEG->tblSTOKHARIC_DAGITIM_NO->Value = "-1";
        datamoduleORTEG->tblSTOKHAR->Post();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::erik1Click(TObject *Sender)
{
    Application->HelpContext(6);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::tbtnBARKODClick(TObject *Sender)
{
    frmBarkodGiris->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::BarkodaGreAra1Click(TObject *Sender)
{
    frmBarkodGiris->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::KartDkm1Click(TObject *Sender)
{
    if (comboBelgeTuru->Text == "GIRDI") {
        rprHareketRaporu->QRLabel3->Caption = "DEPO GÝRÝÞ BELGESÝ";
        rprHareketRaporu->QRLabel2->Caption = "GÝRDÝ NO";
    }
    else {
        rprHareketRaporu->QRLabel3->Caption = "DEPO ÇIKIÞ BELGESÝ";
        rprHareketRaporu->QRLabel2->Caption = "ÝÇ DAÐITIM NO";
    }

    if (nFirmaKodu >= 0)
        rprHareketRaporu->QRLabel4->Caption = "( '"+AnsiString(nFirmaKodu)+"' / "+comboUniteAdi->Text +" )";
    else
        rprHareketRaporu->QRLabel4->Caption = "( "+comboUniteAdi->Text +" )";

    if (comboBelgeTuru->Text == "TEMIZLIK")
        rprHareketRaporu->QRLabel15->Enabled = true;
    else
        rprHareketRaporu->QRLabel15->Enabled = false;    

    querySTOKHAR->Open();

    Timer1->Enabled = false;
    rprHareketRaporu->QuickRep1->Preview();
    Timer1->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareket::Barkod1Click(TObject *Sender)
{
    frmHarekettenBarkod->Show();    
}
//---------------------------------------------------------------------------

