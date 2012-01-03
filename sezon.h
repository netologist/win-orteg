//---------------------------------------------------------------------------

#ifndef sezonH
#define sezonH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TfrmSezonSecimi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TUpDown *UpDown1;
    TLabel *Label1;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    TEdit *editSezonYili;
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmSezonSecimi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSezonSecimi *frmSezonSecimi;
//---------------------------------------------------------------------------
#endif
