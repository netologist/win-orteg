//---------------------------------------------------------------------------
#ifndef datamoduleH
#define datamoduleH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <DBTables.hpp>
#include <Db.hpp>
//---------------------------------------------------------------------------
#define ASAGI_YUVARLA       -1 // Yuvarla() methodunun
#define NORMAL               0 // sabit tanýmlamalarýdýr.
#define YUKARI_YUVARLA       1
//--------------------------------------------------------------------------- 

class TdatamoduleORTEG : public TDataModule
{
__published:	// IDE-managed Components
    TDataSource *dsrcSTOKANA;
    TTable *tblSTOKANA;
    TDataSource *dsrcBIRIMI;
    TDataSource *dsrcPERSONEL;
    TDataSource *dsrcCINSI;
    TTable *tblBIRIMI;
    TTable *tblPERSONEL;
    TTable *tblCINSI;
    TStringField *tblBIRIMIBIRIMADI;
    TFloatField *tblSTOKANAStokKodu;
    TStringField *tblSTOKANAStokAdi;
    TStringField *tblSTOKANACinsi;
    TFloatField *tblSTOKANADevirMiktari;
    TStringField *tblSTOKANABirimi;
    TStringField *tblSTOKANABirim2;
    TFloatField *tblSTOKANABirim2Katsayisi;
    TFloatField *tblSTOKANAKDVOrani;
    TFloatField *tblSTOKANAIskontoOrani;
    TStringField *tblSTOKANABirimeGore;
    TFloatField *tblSTOKANASonDurum;
    TStringField *tblPERSONELADI_SOYADI;
    TStringField *tblPERSONELRUTBESI;
    TStringField *tblPERSONELGOREVI;
    TStringField *tblCINSICINSI_ADI;
    TDataSource *dsrcUNITE;
    TTable *tblUNITE;
    TStringField *tblUNITEUNITE_ADI;
    TStringField *tblUNITEKISIM_AMIRI_ADI;
    TStringField *tblUNITEKISIM_AMIRI_RUTBESI;
    TStringField *tblUNITEKISIM_AMIRI_GOREVI;
    TDataSource *dsrcFIRMA;
    TTable *tblFIRMA;
    TFloatField *tblFIRMAFIRMA_KODU;
    TStringField *tblFIRMAFIRMA_ADI;
    TStringField *tblFIRMAADRES_1;
    TStringField *tblFIRMAADRES_2;
    TStringField *tblFIRMATELEFON;
    TStringField *tblFIRMAFAKS;
    TDataSource *dsrcSTOKHAR;
    TTable *tblSTOKHAR;
    TStringField *tblSTOKHARBELGE_TURU;
    TFloatField *tblSTOKHARFIRMA_KODU;
    TDateField *tblSTOKHARTARIH;
    TStringField *tblSTOKHARBELGE;
    TStringField *tblSTOKHARIC_DAGITIM_NO;
    TStringField *tblSTOKHARBIRIMI;
    TFloatField *tblSTOKHARMIKTAR;
    TStringField *tblSTOKHARBIRIM2;
    TFloatField *tblSTOKHARMIKTAR2;
    TFloatField *tblSTOKHARALIS_FIYATI;
    TFloatField *tblSTOKHARALIS_TUTARI;
    TFloatField *tblSTOKHARSATIS_FIYATI;
    TFloatField *tblSTOKHARSATIS_TUTARI;
    TFloatField *tblSTOKHARKAR;
    TFloatField *tblSTOKHARSTOK_KODU;
    TFloatField *tblSTOKHARNET_FIYAT;
    TFloatField *tblSTOKHARKDV;
    TFloatField *tblSTOKHARISKONTO;
    TFloatField *tblSTOKHARBIRIM_KATSAYISI;
    TTable *tblDONEM;
    TStringField *tblDONEMDONEM_TANIMI;
    TDateField *tblDONEMBASLANGIC;
    TDateField *tblDONEMBITIS;
    TDataSource *dsrcDONEM;
    TDataSource *dsrcAYARLAR;
    TTable *tblAYARLAR;
    TStringField *tblAYARLARTabldotYuvarlamaOrani;
    TStringField *tblAYARLARUniteYuvarlamaOrani;
    TFloatField *tblAYARLARTabldotKarOrani;
    TFloatField *tblAYARLARUniteKarOrani;
    TFloatField *tblAYARLARKatsayiYuvarlamaOrani;
    TFloatField *tblAYARLARKusuratYuvarlamaOrani;
    TStringField *tblAYARLARIsletmelerAmiriAdi;
    TStringField *tblAYARLARIsletmelerAmiriRutbesi;
    TStringField *tblAYARLARIsletmelerAmiriGorevi;
    TStringField *tblAYARLARMuhasebeKsAmiriAdi;
    TStringField *tblAYARLARMuhasebeKsAmiriRutbesi;
    TStringField *tblAYARLARMuhasebeKsAmiriGorevi;
    TStringField *tblAYARLARAnakilerKsAmiriAdi;
    TStringField *tblAYARLARAnakilerKsAmiriRutbesi;
    TStringField *tblAYARLARAnakilerKsAmiriGorevi;
    TDataSource *dsrcIC_DAGITIM;
    TTable *tblIC_DAGITIM;
    TTable *tblSTOKANADETAY;
    TFloatField *tblSTOKANADETAYSTOK_KODU;
    TStringField *tblSTOKANADETAYBIRIMI;
    TFloatField *tblSTOKANADETAYALIS_FIYATI;
    TFloatField *tblSTOKANADETAYMIKTAR;
    TDataSource *dsrcSTOKANADETAY;
    TStringField *tblIC_DAGITIMBELGE_NO;
    TFloatField *tblIC_DAGITIMFIRMA_KODU;
    TStringField *tblIC_DAGITIMFIRMA_ADI;
    TStringField *tblIC_DAGITIMDONEM;
    TDateField *tblIC_DAGITIMTARIH;
    TFloatField *tblIC_DAGITIMSTOK_KODU;
    TFloatField *tblIC_DAGITIMMIKTAR;
    TStringField *tblIC_DAGITIMBIRIMI;
    TFloatField *tblIC_DAGITIMHAREKET_NO;
    TFloatField *tblIC_DAGITIMALIS_FIYATI;
    TFloatField *tblIC_DAGITIMALIS_TUTARI;
    TFloatField *tblIC_DAGITIMSATIS_FIYATI;
    TFloatField *tblIC_DAGITIMSATIS_TUTARI;
    TFloatField *tblIC_DAGITIMKAR;
    TAutoIncField *tblSTOKHARHAREKET_NO;
    TStringField *tblFIRMAVD;
    TStringField *tblFIRMAVN;
    TStringField *tblIC_DAGITIMBELGE_TURU;
    TStringField *tblAYARLARTemizlikUnitesi;
    TStringField *tblSTOKHARFIRMA_ADI;
    TStringField *tblSTOKHARSTOK_ADI;
    TQuery *querySATISFIYATI;
    TFloatField *querySATISFIYATISATIS_FIYATI;
        TTable *tblSATISFIYATI;
        TFloatField *tblSATISFIYATISATIS_FIYATI;
    TTable *tblDETAYLISAYIM;
    TFloatField *tblDETAYLISAYIMKOD;
    TStringField *tblDETAYLISAYIMAD;
    TFloatField *tblDETAYLISAYIMMIKTAR;
    TStringField *tblDETAYLISAYIMBIRIM;
    TFloatField *tblDETAYLISAYIMMIKTAR2;
    TStringField *tblDETAYLISAYIMBIRIM2;
    TFloatField *tblDETAYLISAYIMALIS_FIYATI;
    TFloatField *tblDETAYLISAYIMALIS_TUTARI;
    TFloatField *tblDETAYLISAYIMSATIS_FIYATI;
    TFloatField *tblDETAYLISAYIMSATIS_TUTARI;
    TFloatField *tblDETAYLISAYIMKAR;
    TStringField *tblDETAYLISAYIMCINSI;
    TDataSource *dsrcDETAYLISAYIM;
    TStringField *tblSATISFIYATIBELGE_TURU;
    TFloatField *tblSATISFIYATIFIRMA_KODU;
    TStringField *tblSATISFIYATIFIRMA_ADI;
    TDateField *tblSATISFIYATITARIH;
    TStringField *tblSATISFIYATIBELGE;
    TStringField *tblSATISFIYATIIC_DAGITIM_NO;
    TStringField *tblSATISFIYATISTOK_ADI;
    TStringField *tblSATISFIYATIBIRIMI;
    TFloatField *tblSATISFIYATIMIKTAR;
    TStringField *tblSATISFIYATIBIRIM2;
    TFloatField *tblSATISFIYATIMIKTAR2;
    TFloatField *tblSATISFIYATIALIS_FIYATI;
    TFloatField *tblSATISFIYATIALIS_TUTARI;
    TFloatField *tblSATISFIYATISATIS_TUTARI;
    TFloatField *tblSATISFIYATIKAR;
    TFloatField *tblSATISFIYATISTOK_KODU;
    TFloatField *tblSATISFIYATINET_FIYAT;
    TFloatField *tblSATISFIYATIKDV;
    TFloatField *tblSATISFIYATIISKONTO;
    TFloatField *tblSATISFIYATIBIRIM_KATSAYISI;
    TAutoIncField *tblSATISFIYATIHAREKET_NO;
    TStringField *tblIC_DAGITIMSTOK_ADI;
    TDataSource *dsrcBARKOD;
    TTable *tblBARKOD;
    TFloatField *tblBARKODSTOK_KODU;
    TStringField *tblBARKODSTOK_ADI;
    TStringField *tblBARKODBARKOD_NO;
    TQuery *queryIC_DAGITIM;
    TFloatField *queryIC_DAGITIMSTOK_KODU;
    TStringField *queryIC_DAGITIMSTOK_ADI;
    TFloatField *queryIC_DAGITIMMIKTAR;
    TStringField *queryIC_DAGITIMBIRIMI;
    TFloatField *queryIC_DAGITIMALIS_FIYATI;
    TFloatField *queryIC_DAGITIMALIS_TUTARI;
    TFloatField *queryIC_DAGITIMSATIS_FIYATI;
    TFloatField *queryIC_DAGITIMSATIS_TUTARI;
    TFloatField *queryIC_DAGITIMKAR;
    void __fastcall tblSTOKHARBeforePost(TDataSet *DataSet);
    void __fastcall tblSTOKHARMIKTARChange(TField *Sender);
    void __fastcall tblSTOKHARALIS_FIYATIChange(TField *Sender);
    void __fastcall tblSTOKHARSATIS_FIYATIChange(TField *Sender);
    void __fastcall tblSTOKHARALIS_TUTARIChange(TField *Sender);
    void __fastcall tblSTOKHARSATIS_TUTARIChange(TField *Sender);
    void __fastcall tblSTOKHARMIKTAR2Change(TField *Sender);
    void __fastcall tblSTOKHARNET_FIYATChange(TField *Sender);
    void __fastcall tblSTOKHARKDVChange(TField *Sender);
    void __fastcall tblSTOKHARISKONTOChange(TField *Sender);
    void __fastcall tblSTOKHARSTOK_ADIChange(TField *Sender);
    void __fastcall tblSTOKHARAfterInsert(TDataSet *DataSet);
    void __fastcall tblIC_DAGITIMMIKTARChange(TField *Sender);
    void __fastcall tblIC_DAGITIMALIS_FIYATIChange(TField *Sender);
    void __fastcall tblIC_DAGITIMSATIS_TUTARIChange(TField *Sender);
    void __fastcall tblIC_DAGITIMAfterPost(TDataSet *DataSet);
    void __fastcall tblBARKODBeforePost(TDataSet *DataSet);
    void __fastcall tblSTOKHARSTOK_KODUChange(TField *Sender);
    void __fastcall tblSTOKHARAfterDelete(TDataSet *DataSet);
    void __fastcall tblSTOKHARAfterPost(TDataSet *DataSet);
    void __fastcall tblSTOKHARAfterCancel(TDataSet *DataSet);
private:	// User declarations
public:		// User declarations
    __fastcall TdatamoduleORTEG(TComponent* Owner);
    /*
    int __fastcall Yuvarla(int nDeger, short int nTip, int nYuvarlamaKatsayisi);
    bu fonksiyon daha ileri versiyonlarda düzenlenecektir.
    */
    int __fastcall Yuvarla(int nDeger);
    double  __fastcall SatisFiyatiBul(double nAlisFiyati, double nStokKodu);
    double __fastcall Sayimi(double nSayi);
    double __fastcall TamSayiyaCevir(double nCevrilecekSayi);
    AnsiString __fastcall Yaziyla(const double nGercekSayi);
    
};
//---------------------------------------------------------------------------
extern PACKAGE TdatamoduleORTEG *datamoduleORTEG;
extern AnsiString szBelgeTuru, szBelgeNo, szFirmaAdi;
extern double nFirmaKodu;
extern TDateTime dtTarih;
//---------------------------------------------------------------------------
#endif
