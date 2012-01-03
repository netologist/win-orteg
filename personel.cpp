//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "personel.h"
#include "datamodule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmImzaYetkilileri *frmImzaYetkilileri;
//---------------------------------------------------------------------------
__fastcall TfrmImzaYetkilileri::TfrmImzaYetkilileri(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmImzaYetkilileri::FormShow(TObject *Sender)
{
    datamoduleORTEG->tblPERSONEL->Open();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmImzaYetkilileri::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    datamoduleORTEG->tblPERSONEL->Close();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmImzaYetkilileri::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        if (DBGrid1->SelectedIndex < DBGrid1->FieldCount-1)
            ++DBGrid1->SelectedIndex;
        else {
            DBGrid1->SelectedIndex = 0;
            // Kayýt ediliyor....
            datamoduleORTEG->tblPERSONEL->Edit();
            datamoduleORTEG->tblPERSONEL->Post();            
        }
    }
}
//---------------------------------------------------------------------------

