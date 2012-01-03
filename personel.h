//---------------------------------------------------------------------------

#ifndef personelH
#define personelH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrmImzaYetkilileri : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBNavigator *DBNavigator1;
    TDBGrid *DBGrid1;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmImzaYetkilileri(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmImzaYetkilileri *frmImzaYetkilileri;
//---------------------------------------------------------------------------
#endif
