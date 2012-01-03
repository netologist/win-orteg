//---------------------------------------------------------------------------

#ifndef icdagharctrlH
#define icdagharctrlH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TfrmIcdagitimHareketKontrol : public TForm
{
__published:	// IDE-managed Components
    TQuery *querySTOKHAR;
    TStringField *querySTOKHARIC_DAGITIM_NO;
    TFloatField *querySTOKHARSUMOFALIS_TUTARI;
    TGroupBox *GroupBox1;
    TQuery *queryICDAGITIM;
    TListView *ListView1;
    TToolBar *ToolBar1;
    TToolButton *ToolButton1;
    TImageList *ImageList1;
    TDataSource *dsrcICDAGITIM;
    TStringField *queryICDAGITIMBELGE_NO;
    TFloatField *queryICDAGITIMSUMOFALIS_TUTARI;
    TProgressBar *ProgressBar1;
    TToolButton *ToolButton2;
    TLabel *labelYUZDE;
    TPopupMenu *popupDUZELT;
    TMenuItem *Dzelt1;
    TComboBox *comboDONEM;
    TToolButton *ToolButton3;
    TQuery *queryICDAGITIM_DETAY;
    TStringField *queryICDAGITIM_DETAYBELGE_TURU;
    TStringField *queryICDAGITIM_DETAYBELGE_NO;
    TFloatField *queryICDAGITIM_DETAYFIRMA_KODU;
    TStringField *queryICDAGITIM_DETAYFIRMA_ADI;
    TStringField *queryICDAGITIM_DETAYDONEM;
    TDateField *queryICDAGITIM_DETAYTARIH;
    TFloatField *queryICDAGITIM_DETAYSTOK_KODU;
    TStringField *queryICDAGITIM_DETAYSTOK_ADI;
    TFloatField *queryICDAGITIM_DETAYMIKTAR;
    TStringField *queryICDAGITIM_DETAYBIRIMI;
    TFloatField *queryICDAGITIM_DETAYHAREKET_NO;
    TFloatField *queryICDAGITIM_DETAYALIS_FIYATI;
    TFloatField *queryICDAGITIM_DETAYALIS_TUTARI;
    TFloatField *queryICDAGITIM_DETAYSATIS_FIYATI;
    TFloatField *queryICDAGITIM_DETAYSATIS_TUTARI;
    TFloatField *queryICDAGITIM_DETAYKAR;
    void __fastcall ToolButton1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall comboDONEMChange(TObject *Sender);
    void __fastcall Dzelt1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmIcdagitimHareketKontrol(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmIcdagitimHareketKontrol *frmIcdagitimHareketKontrol;
//---------------------------------------------------------------------------
#endif
