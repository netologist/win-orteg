//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "kartdegistir.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmKartDegistir *frmKartDegistir;
//---------------------------------------------------------------------------
__fastcall TfrmKartDegistir::TfrmKartDegistir(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmKartDegistir::Edit1KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartDegistir::editStokAdiKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartDegistir::comboCinsiKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartDegistir::comboBirimiKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartDegistir::comboBirimi2KeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartDegistir::editKatsayisiKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        tblSTOKDEGIS->Filtered = true;
        tblSTOKDEGIS->Filter = "[STOKKODU]="+FloatToStr(querySTOKANAStokKodu->Value);

        if (tblSTOKDEGIS->RecordCount == 0)
            tblSTOKDEGIS->Insert();

        tblSTOKDEGIS->Edit();
        tblSTOKDEGISStokKodu->Value = querySTOKANAStokKodu->Value;
        tblSTOKDEGISEStokAdi->Value = querySTOKANAStokAdi->Value;
        tblSTOKDEGISStokAdi->Value = editStokAdi->Text;
        tblSTOKDEGISCinsi->Value = comboCinsi->Text;
        tblSTOKDEGISBirimi->Value = comboBirimi->Text;
        tblSTOKDEGISBirim2->Value = comboBirimi2->Text;
        tblSTOKDEGISBirim2Katsayisi->Value = StrToFloat(editKatsayisi->Text);
        tblSTOKDEGIS->Post();
        tblSTOKDEGIS->Filtered = false;

        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartDegistir::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        tblSTOKDEGIS->Filtered = true;
        tblSTOKDEGIS->Filter = "[STOKKODU]="+FloatToStr(querySTOKANAStokKodu->Value);

        if (tblSTOKDEGIS->RecordCount > 0) {
            editStokAdi->Text = tblSTOKDEGISStokAdi->Value;
            comboCinsi->ItemIndex = comboCinsi->Items->IndexOf(tblSTOKDEGISCinsi->Value);
            comboBirimi->ItemIndex = comboBirimi->Items->IndexOf(tblSTOKDEGISBirimi->Value);
            comboBirimi2->ItemIndex = comboBirimi2->Items->IndexOf(tblSTOKDEGISBirim2->Value);
            editKatsayisi->Text = tblSTOKDEGISBirim2Katsayisi->Value;
        }
        else {
            editStokAdi->Text = querySTOKANAStokAdi->Value;
            comboCinsi->ItemIndex = comboCinsi->Items->IndexOf(querySTOKANACinsi->Value);
            comboBirimi->ItemIndex = comboBirimi->Items->IndexOf(querySTOKANABirimi->Value);
            comboBirimi2->ItemIndex = comboBirimi2->Items->IndexOf(querySTOKANABirim2->Value);
            editKatsayisi->Text = querySTOKANABirim2Katsayisi->Value;
        }
        tblSTOKDEGIS->Filtered = false;
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------


void __fastcall TfrmKartDegistir::DBGrid1KeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    tblSTOKDEGIS->Filtered = true;
    tblSTOKDEGIS->Filter = "[STOKKODU]="+FloatToStr(querySTOKANAStokKodu->Value);

    if (tblSTOKDEGIS->RecordCount > 0) {
        editStokAdi->Text = tblSTOKDEGISStokAdi->Value;
        comboCinsi->ItemIndex = comboCinsi->Items->IndexOf(tblSTOKDEGISCinsi->Value);
        comboBirimi->ItemIndex = comboBirimi->Items->IndexOf(tblSTOKDEGISBirimi->Value);
        comboBirimi2->ItemIndex = comboBirimi2->Items->IndexOf(tblSTOKDEGISBirim2->Value);
        editKatsayisi->Text = tblSTOKDEGISBirim2Katsayisi->Value;
    }
    else {
        editStokAdi->Text = querySTOKANAStokAdi->Value;
        comboCinsi->ItemIndex = comboCinsi->Items->IndexOf(querySTOKANACinsi->Value);
        comboBirimi->ItemIndex = comboBirimi->Items->IndexOf(querySTOKANABirimi->Value);
        comboBirimi2->ItemIndex = comboBirimi2->Items->IndexOf(querySTOKANABirim2->Value);
        editKatsayisi->Text = querySTOKANABirim2Katsayisi->Value;
    }
    tblSTOKDEGIS->Filtered = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartDegistir::FormShow(TObject *Sender)
{
    tblSTOKDEGIS->Close();
    tblSTOKDEGIS->EmptyTable(); // Geçiçi tablo boþaltýlýyor.... 
    tblSTOKDEGIS->Open();
    querySTOKANA->Open();

    comboCinsi->Items->Clear();
    comboBirimi->Items->Clear();
    comboBirimi2->Items->Clear();

    datamoduleORTEG->tblBIRIMI->Open();
    datamoduleORTEG->tblBIRIMI->First();
    while (!datamoduleORTEG->tblBIRIMI->Eof) {
        comboBirimi->Items->Add(datamoduleORTEG->tblBIRIMIBIRIMADI->Value);
        comboBirimi2->Items->Add(datamoduleORTEG->tblBIRIMIBIRIMADI->Value);
        datamoduleORTEG->tblBIRIMI->Next();
    }
    datamoduleORTEG->tblBIRIMI->Close();

    // -----------------------------------------------
    datamoduleORTEG->tblCINSI->Open();
    datamoduleORTEG->tblCINSI->First();
    while (!datamoduleORTEG->tblCINSI->Eof) {
        comboCinsi->Items->Add(datamoduleORTEG->tblCINSICINSI_ADI->Value);
        datamoduleORTEG->tblCINSI->Next();
    }
    datamoduleORTEG->tblCINSI->Close();

    tblSTOKDEGIS->Filtered = true;
    tblSTOKDEGIS->Filter = "[STOKKODU]="+FloatToStr(querySTOKANAStokKodu->Value);

    if (tblSTOKDEGIS->RecordCount > 0) {
        editStokAdi->Text = tblSTOKDEGISStokAdi->Value;
        comboCinsi->ItemIndex = comboCinsi->Items->IndexOf(tblSTOKDEGISCinsi->Value);
        comboBirimi->ItemIndex = comboBirimi->Items->IndexOf(tblSTOKDEGISBirimi->Value);
        comboBirimi2->ItemIndex = comboBirimi2->Items->IndexOf(tblSTOKDEGISBirim2->Value);
        editKatsayisi->Text = tblSTOKDEGISBirim2Katsayisi->Value;
    }
    else {
        editStokAdi->Text = querySTOKANAStokAdi->Value;
        comboCinsi->ItemIndex = comboCinsi->Items->IndexOf(querySTOKANACinsi->Value);
        comboBirimi->ItemIndex = comboBirimi->Items->IndexOf(querySTOKANABirimi->Value);
        comboBirimi2->ItemIndex = comboBirimi2->Items->IndexOf(querySTOKANABirim2->Value);
        editKatsayisi->Text = querySTOKANABirim2Katsayisi->Value;
    }
    tblSTOKDEGIS->Filtered = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartDegistir::DBGrid1CellClick(TColumn *Column)
{
    tblSTOKDEGIS->Filtered = true;
    tblSTOKDEGIS->Filter = "[STOKKODU]="+FloatToStr(querySTOKANAStokKodu->Value);

    if (tblSTOKDEGIS->RecordCount > 0) {
        editStokAdi->Text = tblSTOKDEGISStokAdi->Value;
        comboCinsi->ItemIndex = comboCinsi->Items->IndexOf(tblSTOKDEGISCinsi->Value);
        comboBirimi->ItemIndex = comboBirimi->Items->IndexOf(tblSTOKDEGISBirimi->Value);
        comboBirimi2->ItemIndex = comboBirimi2->Items->IndexOf(tblSTOKDEGISBirim2->Value);
        editKatsayisi->Text = tblSTOKDEGISBirim2Katsayisi->Value;
    }
    else {
        editStokAdi->Text = querySTOKANAStokAdi->Value;
        comboCinsi->ItemIndex = comboCinsi->Items->IndexOf(querySTOKANACinsi->Value);
        comboBirimi->ItemIndex = comboBirimi->Items->IndexOf(querySTOKANABirimi->Value);
        comboBirimi2->ItemIndex = comboBirimi2->Items->IndexOf(querySTOKANABirim2->Value);
        editKatsayisi->Text = querySTOKANABirim2Katsayisi->Value;
    }
    tblSTOKDEGIS->Filtered = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartDegistir::SpeedButton2Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Deðiþtirilecek kayýt tablosu sýfýrlansýn mý?", "Mesaj Kutusu",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == ID_YES) {
        tblSTOKDEGIS->Close();
        tblSTOKDEGIS->EmptyTable();
        tblSTOKDEGIS->Open();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartDegistir::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    querySTOKANA->Close();
    tblSTOKDEGIS->Close();
}
//---------------------------------------------------------------------------


void __fastcall TfrmKartDegistir::Sil1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek istediðinize emin misiniz?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        tblSTOKDEGIS->Delete();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartDegistir::SpeedButton1Click(TObject *Sender)
{
    if (tblSTOKDEGIS->RecordCount > 0) {
        queryDEGISTIRENSORGU->Close();

        tblSTOKDEGIS->First();
        while (!tblSTOKDEGIS->Eof) {
            ProgressBar1->Position = (tblSTOKDEGIS->RecNo * 100) / tblSTOKDEGIS->RecordCount;
            labelYUZDE->Caption = IntToStr(ProgressBar1->Position)+" %";
            labelYUZDE->Refresh();
            // Aþaðýdaki kodlarda Stok Hareketi Deðiþtirliyor...
            queryDEGISTIRENSORGU->SQL->Clear();
            queryDEGISTIRENSORGU->SQL->Add("UPDATE STOKHAR");
            queryDEGISTIRENSORGU->SQL->Add("SET STOK_ADI='"+tblSTOKDEGISStokAdi->Value+"', ");
            queryDEGISTIRENSORGU->SQL->Add("BIRIMI='"+tblSTOKDEGISBirimi->Value+"', ");
            queryDEGISTIRENSORGU->SQL->Add("BIRIM2='"+tblSTOKDEGISBirim2->Value+"', ");
            queryDEGISTIRENSORGU->SQL->Add("BIRIM_KATSAYISI="+FloatToStr(tblSTOKDEGISBirim2Katsayisi->Value)+", ");
            queryDEGISTIRENSORGU->SQL->Add("MIKTAR2=(MIKTAR/BIRIM_KATSAYISI)");
            queryDEGISTIRENSORGU->SQL->Add("WHERE STOK_KODU="+FloatToStr(tblSTOKDEGISStokKodu->Value));
            queryDEGISTIRENSORGU->ExecSQL();
            // Yukarýdaki kodlarda Stok Hareketi Deðiþtirliyor...

            // Aþaðýdaki kodlarda Ýç Daðýtým Belgesi Deðiþtiriliyor.
            queryDEGISTIRENSORGU->SQL->Clear();
            queryDEGISTIRENSORGU->SQL->Add("UPDATE ICDAGITIM");
            queryDEGISTIRENSORGU->SQL->Add("SET STOK_ADI='"+tblSTOKDEGISStokAdi->Value+"', ");
            queryDEGISTIRENSORGU->SQL->Add("BIRIMI='"+tblSTOKDEGISBirimi->Value+"' ");
            queryDEGISTIRENSORGU->SQL->Add("WHERE STOK_KODU="+FloatToStr(tblSTOKDEGISStokKodu->Value));
            queryDEGISTIRENSORGU->ExecSQL();
            // Yukarýdaki kodlarda Ýç Daðýtým Belgesi Deðiþtiriliyor.

            // Aþaðýdaki kodlarda Stok Kartý Deðiþtiriliyor...
            queryDEGISTIRENSORGU->SQL->Clear();
            queryDEGISTIRENSORGU->SQL->Add("UPDATE STOKANA");
            queryDEGISTIRENSORGU->SQL->Add("SET STOKADI='"+tblSTOKDEGISStokAdi->Value+"', ");
            queryDEGISTIRENSORGU->SQL->Add("CINSI='"+tblSTOKDEGISCinsi->Value+"', ");
            queryDEGISTIRENSORGU->SQL->Add("BIRIMI='"+tblSTOKDEGISBirimi->Value+"', ");
            queryDEGISTIRENSORGU->SQL->Add("BIRIM2='"+tblSTOKDEGISBirim2->Value+"', ");
            queryDEGISTIRENSORGU->SQL->Add("BIRIM2KATSAYISI="+FloatToStr(tblSTOKDEGISBirim2Katsayisi->Value));
            queryDEGISTIRENSORGU->SQL->Add("WHERE STOKKODU="+FloatToStr(tblSTOKDEGISStokKodu->Value));
            queryDEGISTIRENSORGU->ExecSQL();
            // Yukarýdaki kodlarda Stok Kartý Deðiþtiriliyor...

            tblSTOKDEGIS->Next(); // Bir sonraki kayýt...
        }

        tblSTOKDEGIS->Close(); // Deðiþiklikler tamamlandý... Ve tablo silindi.
        tblSTOKDEGIS->EmptyTable();
        tblSTOKDEGIS->Open();

        querySTOKANA->Close();
        querySTOKANA->Open();

        Application->MessageBoxA("Ýþlem tamamlandý.", "Bilgi", MB_OK + MB_ICONINFORMATION);

        ProgressBar1->Position = 0;
        labelYUZDE->Caption = "0 %";
        labelYUZDE->Refresh();        
    }
    else
        Application->MessageBoxA("Önce deðiþiklik yapýn...", "Bilgi", MB_OK + MB_ICONINFORMATION);
}
//---------------------------------------------------------------------------

void __fastcall TfrmKartDegistir::dsrcSTOKDEGISDataChange(TObject *Sender,
      TField *Field)
{
    editSayac->Text = editSayac->Text.sprintf("%05d", tblSTOKDEGIS->RecordCount);    
}
//---------------------------------------------------------------------------

