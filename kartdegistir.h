//---------------------------------------------------------------------------

#ifndef kartdegistirH
#define kartdegistirH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TfrmKartDegistir : public TForm
{
__published:	// IDE-managed Components
    TQuery *querySTOKANA;
    TDataSource *dsrcSTOKANA;
    TPanel *Panel1;
    TSpeedButton *SpeedButton1;
    TLabel *Label1;
    TEdit *editSayac;
    TProgressBar *ProgressBar1;
    TLabel *labelYUZDE;
    TLabel *Label3;
    TFloatField *querySTOKANAStokKodu;
    TStringField *querySTOKANAStokAdi;
    TStringField *querySTOKANACinsi;
    TFloatField *querySTOKANADevirMiktari;
    TStringField *querySTOKANABirimi;
    TStringField *querySTOKANABirim2;
    TFloatField *querySTOKANABirim2Katsayisi;
    TFloatField *querySTOKANAKDVOrani;
    TFloatField *querySTOKANAIskontoOrani;
    TStringField *querySTOKANABirimeGore;
    TFloatField *querySTOKANASonDurum;
    TPageControl *PageControl1;
    TTabSheet *TabSheet2;
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TEdit *editStokAdi;
    TComboBox *comboCinsi;
    TComboBox *comboBirimi;
    TComboBox *comboBirimi2;
    TEdit *editKatsayisi;
    TGroupBox *GroupBox2;
    TDBGrid *DBGrid2;
    TDataSource *dsrcSTOKDEGIS;
    TTable *tblSTOKDEGIS;
    TSpeedButton *SpeedButton2;
    TFloatField *tblSTOKDEGISStokKodu;
    TStringField *tblSTOKDEGISEStokAdi;
    TStringField *tblSTOKDEGISStokAdi;
    TStringField *tblSTOKDEGISCinsi;
    TStringField *tblSTOKDEGISBirimi;
    TStringField *tblSTOKDEGISBirim2;
    TFloatField *tblSTOKDEGISBirim2Katsayisi;
    TPopupMenu *PopupMenu1;
    TMenuItem *Sil1;
    TQuery *queryDEGISTIRENSORGU;
    void __fastcall Edit1KeyPress(TObject *Sender, char &Key);
    void __fastcall editStokAdiKeyPress(TObject *Sender, char &Key);
    void __fastcall comboCinsiKeyPress(TObject *Sender, char &Key);
    void __fastcall comboBirimiKeyPress(TObject *Sender, char &Key);
    void __fastcall comboBirimi2KeyPress(TObject *Sender, char &Key);
    void __fastcall editKatsayisiKeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid1KeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall dsrcSTOKDEGISDataChange(TObject *Sender,
          TField *Field);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmKartDegistir(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmKartDegistir *frmKartDegistir;
//---------------------------------------------------------------------------
#endif
