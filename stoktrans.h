//---------------------------------------------------------------------------

#ifndef stoktransH
#define stoktransH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <stdio.h>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
#include <Db.hpp>
#include <DBTables.hpp>

typedef struct tagSTOK_KARTI {
    double nStokKodu;
    char szStokAdi[50];
    char szBirimi_1[10];
    char szBirimi_2[10];
    double nBirimKatsayisi;
} STOK_KARTI;

//---------------------------------------------------------------------------
class TfrmStokKartiTransfer : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TProgressBar *ProgressBar1;
    TBitBtn *BitBtn1;
    TLabel *Label1;
    TOpenDialog *OpenDialog1;
    TSaveDialog *SaveDialog1;
    TQuery *querySTOKANA;
    TDateTimePicker *DateTimePicker1;
    TDateTimePicker *DateTimePicker2;
    TFloatField *querySTOKANASTOK_KODU;
    TStringField *querySTOKANASTOK_ADI;
    TStringField *querySTOKANABIRIMI;
    TStringField *querySTOKANABIRIM2;
    TFloatField *querySTOKANABIRIM_KATSAYISI;
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmStokKartiTransfer(TComponent* Owner);
    void __fastcall DosyayaKaydet(FILE *fpDosya, STOK_KARTI *skTransfer, long nKayitNo);
    int __fastcall DosyadanYukle(FILE *fpDosya, STOK_KARTI *skTransfer, long nKayitNo);
    AnsiString __fastcall DosyaAcIletisimKutusu(void);
    AnsiString __fastcall DosyaKaydetIletisimKutusu(void);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmStokKartiTransfer *frmStokKartiTransfer;
//---------------------------------------------------------------------------
#endif
