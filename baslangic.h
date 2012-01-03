//---------------------------------------------------------------------------

#ifndef baslangicH
#define baslangicH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "CGAUGES.h"
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TfrmBaslangicFormu : public TForm
{
__published:	// IDE-managed Components
    TTimer *Timer1;
    TImage *Image1;
    TCGauge *CGauge1;
    TLabel *labelDurumBar;
    TLabel *Label2;
    TShape *Shape1;
    void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmBaslangicFormu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmBaslangicFormu *frmBaslangicFormu;
//---------------------------------------------------------------------------
#endif
