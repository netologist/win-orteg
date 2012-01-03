//---------------------------------------------------------------------------

#ifndef ayarlarH
#define ayarlarH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TfrmAyarlar : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TDBEdit *dbeditTabldotKarOrani;
    TDBEdit *dbeditUniteKarOrani;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label6;
    TDBEdit *dbeditKatsayiliYuvarlama;
    TDBComboBox *dbcomboIsletmelerAmiriAdi;
    TDBComboBox *dbcomboMuhasebeKsAAdi;
    TDBComboBox *dbcomboAnakilerKsAAdi;
    TDBEdit *dbeditIsletmelerAmiriRutbe;
    TDBEdit *dbeditIsletmelerAmiriGorev;
    TDBEdit *dbeditMuhasebeKsARutbe;
    TDBEdit *dbeditMuhasebeKsAGorev;
    TDBEdit *dbeditAnakilerKsARutbe;
    TDBEdit *dbeditAnakilerKsAGorev;
    TLabel *Label7;
    TDBEdit *dbeditKusuratliYuvarlama;
    TDBRadioGroup *DBRadioGroup1;
    TDBRadioGroup *DBRadioGroup2;
    TBevel *Bevel1;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    TBevel *Bevel2;
    TLabel *Label9;
    TDBComboBox *dbcomboTemizlikUnitesi;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall dbcomboIsletmelerAmiriAdiChange(TObject *Sender);
    void __fastcall dbcomboMuhasebeKsAAdiChange(TObject *Sender);
    void __fastcall dbcomboAnakilerKsAAdiChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmAyarlar(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAyarlar *frmAyarlar;
//---------------------------------------------------------------------------
#endif
