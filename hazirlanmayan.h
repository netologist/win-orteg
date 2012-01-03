//---------------------------------------------------------------------------

#ifndef hazirlanmayanH
#define hazirlanmayanH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmHazirlanmayanlar : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TComboBox *comboDONEM;
    TDBGrid *DBGrid1;
    TQuery *queryHAZIRLANMAYANLAR;
    TDataSource *dsrcHAZIRLANMAYANLAR;
    void __fastcall comboDONEMChange(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmHazirlanmayanlar(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHazirlanmayanlar *frmHazirlanmayanlar;
//---------------------------------------------------------------------------
#endif
