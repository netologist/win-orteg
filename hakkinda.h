//---------------------------------------------------------------------------

#ifndef hakkindaH
#define hakkindaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TfrmHakkinda : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TBitBtn *BitBtn1;
    TMemo *Memo1;
    TImage *Image1;
    TBevel *Bevel1;
    void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmHakkinda(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHakkinda *frmHakkinda;
//---------------------------------------------------------------------------
#endif
