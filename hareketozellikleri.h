//---------------------------------------------------------------------------

#ifndef hareketozellikleriH
#define hareketozellikleriH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmHareketOzellikleri : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label6;
    TLabel *Label7;
    TLabel *Label9;
    TLabel *Label10;
    TLabel *Label11;
    TLabel *Label12;
    TLabel *Label13;
    TDBEdit *dbeditStokKodu;
    TDBEdit *dbeditStokAdi;
    TDBEdit *dbeditFirma;
    TDBEdit *dbeditHareketTuru;
    TDBEdit *dbeditHareketNo;
    TDBEdit *dbeditIcDagitim;
    TDBEdit *dbeditBelgeNo;
    TDBEdit *dbeditHareketTarihi;
    TBevel *Bevel1;
    TBevel *Bevel2;
    TDBEdit *dbeditMiktar;
    TDBEdit *dbeditBirimi;
    TDBEdit *dbeditBirim2;
    TDBEdit *dbeditMiktar2;
    TBitBtn *BitBtn1;
    TDataSource *dsrscSTOKHAR;
    TDBEdit *dbeditTarih;
    TLabel *Label8;
    TDataSource *dsrcICDAGITIM;
    TQuery *queryICDAGITIM;
    TQuery *querySTOKHAR;
    void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmHareketOzellikleri(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHareketOzellikleri *frmHareketOzellikleri;
//---------------------------------------------------------------------------
#endif
