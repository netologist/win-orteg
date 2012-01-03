//---------------------------------------------------------------------------

#ifndef harkopyalaH
#define harkopyalaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
#include <ImgList.hpp>
//---------------------------------------------------------------------------
class TfrmHareketKopyala : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TDateTimePicker *datetimeTARIH;
    TComboBox *comboADI;
    TLabel *Label3;
    TEdit *editKOD;
    TLabel *Label4;
    TComboBox *comboISLEM_TURU;
    TProgressBar *ProgressBar1;
    TLabel *Label5;
    TImageList *ImageList1;
    TSpeedButton *SpeedButton1;
    TSpeedButton *SpeedButton2;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall comboADIChange(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmHareketKopyala(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHareketKopyala *frmHareketKopyala;
//---------------------------------------------------------------------------
#endif
