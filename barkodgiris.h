//---------------------------------------------------------------------------

#ifndef barkodgirisH
#define barkodgirisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <Db.hpp>
#include <DBCtrls.hpp>
#include <DBTables.hpp>
#include <Mask.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrmBarkodGiris : public TForm
{
__published:	// IDE-managed Components
    TQuery *queryBARKOD;
    TDataSource *dsrcBARKOD;
    TFloatField *queryBARKODSTOK_KODU;
    TStringField *queryBARKODSTOK_ADI;
    TStringField *queryBARKODBARKOD_NO;
    TEdit *editBarkodNo;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall editBarkodNoKeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmBarkodGiris(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmBarkodGiris *frmBarkodGiris;
//---------------------------------------------------------------------------
#endif
