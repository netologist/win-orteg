//---------------------------------------------------------------------------

#ifndef hrkbarkodH
#define hrkbarkodH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrmHarekettenBarkod : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmHarekettenBarkod(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHarekettenBarkod *frmHarekettenBarkod;
//---------------------------------------------------------------------------
#endif
