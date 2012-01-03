//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fiyattablosu.h"
#include "hareket.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmFiyatTablosu *frmFiyatTablosu;
//---------------------------------------------------------------------------
__fastcall TfrmFiyatTablosu::TfrmFiyatTablosu(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmFiyatTablosu::FormShow(TObject *Sender)
{
    querySTOKANADETAY->Close();
    datamoduleORTEG->tblSTOKANADETAY->Close();
    datamoduleORTEG->tblSTOKANADETAY->EmptyTable();
    datamoduleORTEG->tblSTOKANADETAY->Open();

    StatusBar1->Panels->Items[1]->Text = labelDurum->Caption;
    if (labelDurum->Caption == "Son Durum Tablosu") {
        querySTOKHAR->Close();
        querySTOKHAR->ParamByName("StokKodu")->AsFloat = StrToFloat(labelStokKodu->Caption);
        querySTOKHAR->Open();
        querySTOKHAR->First();
        StaticText1->Caption = "( "+querySTOKHARSTOK_ADI->Value+" )";

        while (!querySTOKHAR->Eof) {
            datamoduleORTEG->tblSTOKANADETAY->Insert();
            datamoduleORTEG->tblSTOKANADETAY->Edit();
            datamoduleORTEG->tblSTOKANADETAYSTOK_KODU->Value = querySTOKHARSTOK_KODU->Value;
            datamoduleORTEG->tblSTOKANADETAYBIRIMI->Value = querySTOKHARBIRIMI->Value;
            datamoduleORTEG->tblSTOKANADETAYALIS_FIYATI->Value = querySTOKHARALIS_FIYATI->Value;
            // eðer belge türü girdi ise pozitif, deðilse negatif miktar olarak yükler.
            if (querySTOKHARBELGE_TURU->Value == "GIRDI")
                datamoduleORTEG->tblSTOKANADETAYMIKTAR->Value = querySTOKHARMIKTAR->Value;
            else
                datamoduleORTEG->tblSTOKANADETAYMIKTAR->Value = querySTOKHARMIKTAR->Value * (-1);

            datamoduleORTEG->tblSTOKANADETAY->Post();
            querySTOKHAR->Next();
        }
        querySTOKHAR->Close();
    }
    else {
        queryIADEHAR->Close();
        queryIADEHAR->ParamByName("firma_adi")->AsString = szFirmaAdi;
        queryIADEHAR->ParamByName("stok_kodu")->AsFloat = StrToFloat(labelStokKodu->Caption);
        queryIADEHAR->Open();

        StaticText1->Caption
            = "[ " + szFirmaAdi + " / " + queryIADEHARSTOK_ADI->Value+" ]";

        while (!queryIADEHAR->Eof) {
            datamoduleORTEG->tblSTOKANADETAY->Insert();
            datamoduleORTEG->tblSTOKANADETAY->Edit();
            datamoduleORTEG->tblSTOKANADETAYSTOK_KODU->Value = queryIADEHARSTOK_KODU->Value;
            datamoduleORTEG->tblSTOKANADETAYBIRIMI->Value = queryIADEHARBIRIMI->Value;
            datamoduleORTEG->tblSTOKANADETAYALIS_FIYATI->Value = queryIADEHARALIS_FIYATI->Value;
            // eðer belge türü girdi ise pozitif, deðilse negatif miktar olarak yükler.
            if (queryIADEHARBELGE_TURU->Value == "GIRDI")
                datamoduleORTEG->tblSTOKANADETAYMIKTAR->Value = queryIADEHARMIKTAR->Value * (-1);
            else
                datamoduleORTEG->tblSTOKANADETAYMIKTAR->Value = queryIADEHARMIKTAR->Value;

            datamoduleORTEG->tblSTOKANADETAY->Post();
            queryIADEHAR->Next();
        }
        queryIADEHAR->Close();
    }

    datamoduleORTEG->tblSTOKANADETAY->Close();
    querySTOKANADETAY->Close();
    querySTOKANADETAY->ParamByName("StokKodu")->AsFloat = StrToFloat(labelStokKodu->Caption);
    querySTOKANADETAY->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmFiyatTablosu::DBGrid1CellClick(TColumn *Column)
{
    int nDeger;
    TObject *Sender;

    nDeger = Application->MessageBox("Seçtiðiniz fiyatý onaylýyor musunuz?", "Onay Kutusu",
            MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES)
    {
        if (frmFiyatTablosu->Caption == "Fiyat Tablosu - [ Hareket Ekrani ]") {
            datamoduleORTEG->tblSTOKHAR->Edit();
            datamoduleORTEG->tblSTOKHARALIS_FIYATI->Value = querySTOKANADETAYalis_fiyati->Value;
        }
        else if (frmFiyatTablosu->Caption == "Fiyat Tablosu - [ Ýç Daðýtým Hazýrlama ]") {
            datamoduleORTEG->tblIC_DAGITIM->Edit();
            datamoduleORTEG->tblIC_DAGITIMALIS_FIYATI->Value = querySTOKANADETAYalis_fiyati->Value;
        }
        frmFiyatTablosu->Close();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFiyatTablosu::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    int nDeger;

    if (Key == Char(VK_RETURN)) {
        Key = 0;
        nDeger = Application->MessageBox("Seçtiðiniz fiyatý onaylýyor musunuz?", "Onay Kutusu",
            MB_YESNO + MB_ICONQUESTION);

        if (nDeger == IDYES)
        {
            if (frmFiyatTablosu->Caption == "Fiyat Tablosu - [ Hareket Ekrani ]") {
                datamoduleORTEG->tblSTOKHAR->Edit();
                datamoduleORTEG->tblSTOKHARALIS_FIYATI->Value = querySTOKANADETAYalis_fiyati->Value;
            }
            else if (frmFiyatTablosu->Caption == "Fiyat Tablosu - [ Ýç Daðýtým Hazýrlama ]") {
                datamoduleORTEG->tblIC_DAGITIM->Edit();
                datamoduleORTEG->tblIC_DAGITIMALIS_FIYATI->Value = querySTOKANADETAYalis_fiyati->Value;
            }
            frmFiyatTablosu->Close();
        }
    }
}
//---------------------------------------------------------------------------

