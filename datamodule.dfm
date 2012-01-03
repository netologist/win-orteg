object datamoduleORTEG: TdatamoduleORTEG
  OldCreateOrder = False
  Left = 240
  Top = 111
  Height = 482
  Width = 750
  object dsrcSTOKANA: TDataSource
    DataSet = tblSTOKANA
    Left = 30
    Top = 11
  end
  object tblSTOKANA: TTable
    DatabaseName = 'ORTEG2002'
    TableName = 'stokana.db'
    Left = 111
    Top = 11
    object tblSTOKANAStokKodu: TFloatField
      FieldName = 'StokKodu'
    end
    object tblSTOKANAStokAdi: TStringField
      DisplayWidth = 50
      FieldName = 'StokAdi'
      Size = 200
    end
    object tblSTOKANACinsi: TStringField
      FieldName = 'Cinsi'
      Size = 30
    end
    object tblSTOKANADevirMiktari: TFloatField
      FieldName = 'DevirMiktari'
    end
    object tblSTOKANABirimi: TStringField
      FieldName = 'Birimi'
      Size = 15
    end
    object tblSTOKANABirim2: TStringField
      FieldName = 'Birim2'
      Size = 15
    end
    object tblSTOKANABirim2Katsayisi: TFloatField
      FieldName = 'Birim2Katsayisi'
    end
    object tblSTOKANAKDVOrani: TFloatField
      FieldName = 'KDVOrani'
    end
    object tblSTOKANAIskontoOrani: TFloatField
      FieldName = 'IskontoOrani'
    end
    object tblSTOKANABirimeGore: TStringField
      FieldName = 'BirimeGore'
      Size = 15
    end
    object tblSTOKANASonDurum: TFloatField
      FieldName = 'SonDurum'
      EditFormat = '###,###,###,###.###'
    end
  end
  object dsrcBIRIMI: TDataSource
    DataSet = tblBIRIMI
    Left = 30
    Top = 65
  end
  object dsrcPERSONEL: TDataSource
    DataSet = tblPERSONEL
    Left = 30
    Top = 116
  end
  object dsrcCINSI: TDataSource
    DataSet = tblCINSI
    Left = 30
    Top = 170
  end
  object tblBIRIMI: TTable
    DatabaseName = 'ORTEG2002'
    TableName = 'birimana.db'
    Left = 111
    Top = 65
    object tblBIRIMIBIRIMADI: TStringField
      FieldName = 'BIRIMADI'
      Size = 150
    end
  end
  object tblPERSONEL: TTable
    DatabaseName = 'ORTEG2002'
    TableName = 'personelana.db'
    Left = 111
    Top = 116
    object tblPERSONELADI_SOYADI: TStringField
      FieldName = 'ADI_SOYADI'
      Size = 30
    end
    object tblPERSONELRUTBESI: TStringField
      FieldName = 'RUTBESI'
      Size = 30
    end
    object tblPERSONELGOREVI: TStringField
      FieldName = 'GOREVI'
      Size = 30
    end
  end
  object tblCINSI: TTable
    DatabaseName = 'ORTEG2002'
    TableName = 'cinsiana.db'
    Left = 111
    Top = 170
    object tblCINSICINSI_ADI: TStringField
      FieldName = 'CINSI_ADI'
      Size = 30
    end
  end
  object dsrcUNITE: TDataSource
    DataSet = tblUNITE
    Left = 30
    Top = 224
  end
  object tblUNITE: TTable
    DatabaseName = 'ORTEG2002'
    TableName = 'uniteana.DB'
    Left = 111
    Top = 224
    object tblUNITEUNITE_ADI: TStringField
      FieldName = 'UNITE_ADI'
      Size = 30
    end
    object tblUNITEKISIM_AMIRI_ADI: TStringField
      FieldName = 'KISIM_AMIRI_ADI'
      Size = 30
    end
    object tblUNITEKISIM_AMIRI_RUTBESI: TStringField
      FieldName = 'KISIM_AMIRI_RUTBESI'
      Size = 30
    end
    object tblUNITEKISIM_AMIRI_GOREVI: TStringField
      FieldName = 'KISIM_AMIRI_GOREVI'
      Size = 30
    end
  end
  object dsrcFIRMA: TDataSource
    DataSet = tblFIRMA
    Left = 30
    Top = 275
  end
  object tblFIRMA: TTable
    DatabaseName = 'ORTEG2002'
    TableName = 'firma.db'
    Left = 111
    Top = 275
    object tblFIRMAFIRMA_KODU: TFloatField
      FieldName = 'FIRMA_KODU'
    end
    object tblFIRMAFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Size = 30
    end
    object tblFIRMAADRES_1: TStringField
      FieldName = 'ADRES_1'
      Size = 50
    end
    object tblFIRMAADRES_2: TStringField
      FieldName = 'ADRES_2'
      Size = 50
    end
    object tblFIRMATELEFON: TStringField
      FieldName = 'TELEFON'
      EditMask = '(# ###) ### ## ##;1;_'
      Size = 25
    end
    object tblFIRMAFAKS: TStringField
      FieldName = 'FAKS'
      EditMask = '(# ###) ### ## ##;1;_'
      Size = 25
    end
    object tblFIRMAVD: TStringField
      FieldName = 'VD'
      Size = 15
    end
    object tblFIRMAVN: TStringField
      FieldName = 'VN'
      Size = 15
    end
  end
  object dsrcSTOKHAR: TDataSource
    DataSet = tblSTOKHAR
    Left = 30
    Top = 329
  end
  object tblSTOKHAR: TTable
    AfterInsert = tblSTOKHARAfterInsert
    BeforePost = tblSTOKHARBeforePost
    AfterPost = tblSTOKHARAfterPost
    AfterCancel = tblSTOKHARAfterCancel
    AfterDelete = tblSTOKHARAfterDelete
    DatabaseName = 'ORTEG2002'
    FilterOptions = [foNoPartialCompare]
    TableName = 'stokhar.DB'
    Left = 111
    Top = 329
    object tblSTOKHARBELGE_TURU: TStringField
      FieldName = 'BELGE_TURU'
      Size = 10
    end
    object tblSTOKHARFIRMA_KODU: TFloatField
      FieldName = 'FIRMA_KODU'
    end
    object tblSTOKHARTARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblSTOKHARBELGE: TStringField
      FieldName = 'BELGE'
      Size = 15
    end
    object tblSTOKHARIC_DAGITIM_NO: TStringField
      FieldName = 'IC_DAGITIM_NO'
      Size = 15
    end
    object tblSTOKHARBIRIMI: TStringField
      FieldName = 'BIRIMI'
      Size = 15
    end
    object tblSTOKHARMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      OnChange = tblSTOKHARMIKTARChange
      DisplayFormat = '###,###,###,###.###'
    end
    object tblSTOKHARBIRIM2: TStringField
      FieldName = 'BIRIM2'
      Size = 15
    end
    object tblSTOKHARMIKTAR2: TFloatField
      FieldName = 'MIKTAR2'
      OnChange = tblSTOKHARMIKTAR2Change
      DisplayFormat = '###,###,###,###.###'
    end
    object tblSTOKHARALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
      OnChange = tblSTOKHARALIS_FIYATIChange
      DisplayFormat = '###,###,###,###'
      EditFormat = '###,###,###,###'
    end
    object tblSTOKHARALIS_TUTARI: TFloatField
      FieldName = 'ALIS_TUTARI'
      OnChange = tblSTOKHARALIS_TUTARIChange
      DisplayFormat = '###,###,###,###'
      EditFormat = '###,###,###,###'
    end
    object tblSTOKHARSATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
      OnChange = tblSTOKHARSATIS_FIYATIChange
      DisplayFormat = '###,###,###,###'
      EditFormat = '###,###,###,###'
    end
    object tblSTOKHARSATIS_TUTARI: TFloatField
      FieldName = 'SATIS_TUTARI'
      OnChange = tblSTOKHARSATIS_TUTARIChange
      DisplayFormat = '###,###,###,###'
      EditFormat = '###,###,###,###'
    end
    object tblSTOKHARKAR: TFloatField
      FieldName = 'KAR'
      DisplayFormat = '###,###,###,###'
      EditFormat = '###,###,###,###'
    end
    object tblSTOKHARSTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
      OnChange = tblSTOKHARSTOK_KODUChange
    end
    object tblSTOKHARNET_FIYAT: TFloatField
      FieldName = 'NET_FIYAT'
      OnChange = tblSTOKHARNET_FIYATChange
      DisplayFormat = '###,###,###,###'
      EditFormat = '###,###,###,###'
    end
    object tblSTOKHARKDV: TFloatField
      FieldName = 'KDV'
      OnChange = tblSTOKHARKDVChange
      DisplayFormat = '###,###,###,###'
    end
    object tblSTOKHARISKONTO: TFloatField
      FieldName = 'ISKONTO'
      OnChange = tblSTOKHARISKONTOChange
      DisplayFormat = '###,###,###,###'
    end
    object tblSTOKHARBIRIM_KATSAYISI: TFloatField
      FieldName = 'BIRIM_KATSAYISI'
    end
    object tblSTOKHARHAREKET_NO: TAutoIncField
      FieldName = 'HAREKET_NO'
      ReadOnly = True
    end
    object tblSTOKHARFIRMA_ADI: TStringField
      DisplayWidth = 35
      FieldName = 'FIRMA_ADI'
      Size = 50
    end
    object tblSTOKHARSTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      OnChange = tblSTOKHARSTOK_ADIChange
      Size = 50
    end
  end
  object tblDONEM: TTable
    DatabaseName = 'ORTEG2002'
    TableName = 'donem.db'
    Left = 261
    Top = 11
    object tblDONEMDONEM_TANIMI: TStringField
      FieldName = 'DONEM_TANIMI'
      Size = 30
    end
    object tblDONEMBASLANGIC: TDateField
      FieldName = 'BASLANGIC'
    end
    object tblDONEMBITIS: TDateField
      FieldName = 'BITIS'
    end
  end
  object dsrcDONEM: TDataSource
    DataSet = tblDONEM
    Left = 195
    Top = 11
  end
  object dsrcAYARLAR: TDataSource
    DataSet = tblAYARLAR
    Left = 189
    Top = 77
  end
  object tblAYARLAR: TTable
    DatabaseName = 'ORTEG2002'
    TableName = 'ayarlar.db'
    Left = 261
    Top = 77
    object tblAYARLARTabldotYuvarlamaOrani: TStringField
      FieldName = 'TabldotYuvarlamaOrani'
      Size = 25
    end
    object tblAYARLARUniteYuvarlamaOrani: TStringField
      FieldName = 'UniteYuvarlamaOrani'
      Size = 25
    end
    object tblAYARLARTabldotKarOrani: TFloatField
      FieldName = 'TabldotKarOrani'
    end
    object tblAYARLARUniteKarOrani: TFloatField
      FieldName = 'UniteKarOrani'
    end
    object tblAYARLARKatsayiYuvarlamaOrani: TFloatField
      FieldName = 'KatsayiYuvarlamaOrani'
      DisplayFormat = '###.###.###.###'
    end
    object tblAYARLARKusuratYuvarlamaOrani: TFloatField
      FieldName = 'KusuratYuvarlamaOrani'
      DisplayFormat = '###.###.###.###'
    end
    object tblAYARLARIsletmelerAmiriAdi: TStringField
      FieldName = 'IsletmelerAmiriAdi'
      Size = 25
    end
    object tblAYARLARIsletmelerAmiriRutbesi: TStringField
      FieldName = 'IsletmelerAmiriRutbesi'
    end
    object tblAYARLARIsletmelerAmiriGorevi: TStringField
      FieldName = 'IsletmelerAmiriGorevi'
    end
    object tblAYARLARMuhasebeKsAmiriAdi: TStringField
      FieldName = 'MuhasebeKsAmiriAdi'
      Size = 25
    end
    object tblAYARLARMuhasebeKsAmiriRutbesi: TStringField
      FieldName = 'MuhasebeKsAmiriRutbesi'
    end
    object tblAYARLARMuhasebeKsAmiriGorevi: TStringField
      FieldName = 'MuhasebeKsAmiriGorevi'
    end
    object tblAYARLARAnakilerKsAmiriAdi: TStringField
      FieldName = 'AnakilerKsAmiriAdi'
      Size = 25
    end
    object tblAYARLARAnakilerKsAmiriRutbesi: TStringField
      FieldName = 'AnakilerKsAmiriRutbesi'
    end
    object tblAYARLARAnakilerKsAmiriGorevi: TStringField
      FieldName = 'AnakilerKsAmiriGorevi'
    end
    object tblAYARLARTemizlikUnitesi: TStringField
      FieldName = 'TemizlikUnitesi'
      Size = 30
    end
  end
  object dsrcIC_DAGITIM: TDataSource
    DataSet = tblIC_DAGITIM
    Left = 189
    Top = 137
  end
  object tblIC_DAGITIM: TTable
    AfterPost = tblIC_DAGITIMAfterPost
    DatabaseName = 'ORTEG2002'
    TableName = 'icdagitim.db'
    Left = 261
    Top = 134
    object tblIC_DAGITIMBELGE_NO: TStringField
      FieldName = 'BELGE_NO'
      Size = 15
    end
    object tblIC_DAGITIMFIRMA_KODU: TFloatField
      FieldName = 'FIRMA_KODU'
    end
    object tblIC_DAGITIMFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Size = 30
    end
    object tblIC_DAGITIMDONEM: TStringField
      FieldName = 'DONEM'
    end
    object tblIC_DAGITIMTARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblIC_DAGITIMSTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
    end
    object tblIC_DAGITIMMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      OnChange = tblIC_DAGITIMMIKTARChange
      DisplayFormat = '###,###,###,###.###'
    end
    object tblIC_DAGITIMBIRIMI: TStringField
      FieldName = 'BIRIMI'
      Size = 10
    end
    object tblIC_DAGITIMHAREKET_NO: TFloatField
      FieldName = 'HAREKET_NO'
    end
    object tblIC_DAGITIMALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
      OnChange = tblIC_DAGITIMALIS_FIYATIChange
      DisplayFormat = '###,###,###,###,###'
    end
    object tblIC_DAGITIMALIS_TUTARI: TFloatField
      FieldName = 'ALIS_TUTARI'
      DisplayFormat = '###,###,###,###,###'
    end
    object tblIC_DAGITIMSATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
      DisplayFormat = '###,###,###,###,###'
    end
    object tblIC_DAGITIMSATIS_TUTARI: TFloatField
      FieldName = 'SATIS_TUTARI'
      OnChange = tblIC_DAGITIMSATIS_TUTARIChange
      DisplayFormat = '###,###,###,###,###'
    end
    object tblIC_DAGITIMKAR: TFloatField
      FieldName = 'KAR'
      DisplayFormat = '###,###,###,###,###'
    end
    object tblIC_DAGITIMBELGE_TURU: TStringField
      FieldName = 'BELGE_TURU'
    end
    object tblIC_DAGITIMSTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      Size = 50
    end
  end
  object tblSTOKANADETAY: TTable
    DatabaseName = 'ORTEG2002'
    TableName = 'stokanadetay.db'
    Left = 261
    Top = 203
    object tblSTOKANADETAYSTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
    end
    object tblSTOKANADETAYBIRIMI: TStringField
      FieldName = 'BIRIMI'
      Size = 10
    end
    object tblSTOKANADETAYALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
    end
    object tblSTOKANADETAYMIKTAR: TFloatField
      FieldName = 'MIKTAR'
    end
  end
  object dsrcSTOKANADETAY: TDataSource
    DataSet = tblSTOKANADETAY
    Left = 189
    Top = 206
  end
  object querySATISFIYATI: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from stokhar')
    Left = 339
    Top = 13
    object querySATISFIYATISATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_FIYATI'
    end
  end
  object tblSATISFIYATI: TTable
    DatabaseName = 'ORTEG2002'
    Filtered = True
    TableName = 'STOKHAR.DB'
    Left = 342
    Top = 67
    object tblSATISFIYATISATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
    end
    object tblSATISFIYATIBELGE_TURU: TStringField
      FieldName = 'BELGE_TURU'
      Size = 10
    end
    object tblSATISFIYATIFIRMA_KODU: TFloatField
      FieldName = 'FIRMA_KODU'
    end
    object tblSATISFIYATIFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Size = 35
    end
    object tblSATISFIYATITARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblSATISFIYATIBELGE: TStringField
      FieldName = 'BELGE'
      Size = 15
    end
    object tblSATISFIYATIIC_DAGITIM_NO: TStringField
      FieldName = 'IC_DAGITIM_NO'
      Size = 15
    end
    object tblSATISFIYATISTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      Size = 50
    end
    object tblSATISFIYATIBIRIMI: TStringField
      FieldName = 'BIRIMI'
      Size = 15
    end
    object tblSATISFIYATIMIKTAR: TFloatField
      FieldName = 'MIKTAR'
    end
    object tblSATISFIYATIBIRIM2: TStringField
      FieldName = 'BIRIM2'
      Size = 15
    end
    object tblSATISFIYATIMIKTAR2: TFloatField
      FieldName = 'MIKTAR2'
    end
    object tblSATISFIYATIALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
    end
    object tblSATISFIYATIALIS_TUTARI: TFloatField
      FieldName = 'ALIS_TUTARI'
    end
    object tblSATISFIYATISATIS_TUTARI: TFloatField
      FieldName = 'SATIS_TUTARI'
    end
    object tblSATISFIYATIKAR: TFloatField
      FieldName = 'KAR'
    end
    object tblSATISFIYATISTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
    end
    object tblSATISFIYATINET_FIYAT: TFloatField
      FieldName = 'NET_FIYAT'
    end
    object tblSATISFIYATIKDV: TFloatField
      FieldName = 'KDV'
    end
    object tblSATISFIYATIISKONTO: TFloatField
      FieldName = 'ISKONTO'
    end
    object tblSATISFIYATIBIRIM_KATSAYISI: TFloatField
      FieldName = 'BIRIM_KATSAYISI'
    end
    object tblSATISFIYATIHAREKET_NO: TAutoIncField
      FieldName = 'HAREKET_NO'
      ReadOnly = True
    end
  end
  object tblDETAYLISAYIM: TTable
    DatabaseName = 'ORTEG2002'
    TableName = 'detaysayim.db'
    Left = 261
    Top = 267
    object tblDETAYLISAYIMKOD: TFloatField
      FieldName = 'KOD'
    end
    object tblDETAYLISAYIMAD: TStringField
      FieldName = 'AD'
      Size = 50
    end
    object tblDETAYLISAYIMMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      DisplayFormat = '###,###,###,###.###'
      EditFormat = '###,###,###,###.###'
    end
    object tblDETAYLISAYIMBIRIM: TStringField
      FieldName = 'BIRIM'
      Size = 10
    end
    object tblDETAYLISAYIMMIKTAR2: TFloatField
      FieldName = 'MIKTAR2'
      DisplayFormat = '###,###,###,###.###'
      EditFormat = '###,###,###,###.###'
    end
    object tblDETAYLISAYIMBIRIM2: TStringField
      FieldName = 'BIRIM2'
      Size = 10
    end
    object tblDETAYLISAYIMALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
    end
    object tblDETAYLISAYIMALIS_TUTARI: TFloatField
      FieldName = 'ALIS_TUTARI'
    end
    object tblDETAYLISAYIMSATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
    end
    object tblDETAYLISAYIMSATIS_TUTARI: TFloatField
      FieldName = 'SATIS_TUTARI'
    end
    object tblDETAYLISAYIMKAR: TFloatField
      FieldName = 'KAR'
    end
    object tblDETAYLISAYIMCINSI: TStringField
      FieldName = 'CINSI'
      Size = 40
    end
  end
  object dsrcDETAYLISAYIM: TDataSource
    DataSet = tblDETAYLISAYIM
    Left = 189
    Top = 267
  end
  object dsrcBARKOD: TDataSource
    DataSet = tblBARKOD
    Left = 186
    Top = 330
  end
  object tblBARKOD: TTable
    BeforePost = tblBARKODBeforePost
    DatabaseName = 'ORTEG2002'
    TableName = 'barkod.db'
    TableType = ttParadox
    Left = 261
    Top = 324
    object tblBARKODSTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
    end
    object tblBARKODSTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      Size = 50
    end
    object tblBARKODBARKOD_NO: TStringField
      FieldName = 'BARKOD_NO'
      Size = 30
    end
  end
  object queryIC_DAGITIM: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      
        'select STOK_KODU, STOK_ADI,  SUM(MIKTAR)MIKTAR,BIRIMI, ALIS_FIYA' +
        'TI, SUM(ALIS_TUTARI)ALIS_TUTARI, SATIS_FIYATI, SUM(SATIS_TUTARI)' +
        'SATIS_TUTARI, SUM(KAR)KAR from icdagitim'
      'WHERE DONEM=:DONEM and BELGE_NO=:BELGE_NO'
      'group by STOK_KODU, STOK_ADI, BIRIMI, ALIS_FIYATI, SATIS_FIYATI')
    Left = 435
    Top = 12
    ParamData = <
      item
        DataType = ftString
        Name = 'DONEM'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'BELGE_NO'
        ParamType = ptUnknown
      end>
    object queryIC_DAGITIMSTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
      Origin = 'ORTEG2002."icdagitim.DB".STOK_KODU'
    end
    object queryIC_DAGITIMSTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      Origin = 'ORTEG2002."icdagitim.DB".STOK_ADI'
      Size = 50
    end
    object queryIC_DAGITIMMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      Origin = 'ORTEG2002."icdagitim.DB".MIKTAR'
      DisplayFormat = '###,###,###,###'
    end
    object queryIC_DAGITIMBIRIMI: TStringField
      FieldName = 'BIRIMI'
      Origin = 'ORTEG2002."icdagitim.DB".BIRIMI'
      Size = 10
    end
    object queryIC_DAGITIMALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
      Origin = 'ORTEG2002."icdagitim.DB".ALIS_FIYATI'
      DisplayFormat = '###,###,###,###'
    end
    object queryIC_DAGITIMALIS_TUTARI: TFloatField
      FieldName = 'ALIS_TUTARI'
      Origin = 'ORTEG2002."icdagitim.DB".ALIS_TUTARI'
      DisplayFormat = '###,###,###,###'
    end
    object queryIC_DAGITIMSATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
      Origin = 'ORTEG2002."icdagitim.DB".SATIS_FIYATI'
      DisplayFormat = '###,###,###,###'
    end
    object queryIC_DAGITIMSATIS_TUTARI: TFloatField
      FieldName = 'SATIS_TUTARI'
      Origin = 'ORTEG2002."icdagitim.DB".SATIS_TUTARI'
      DisplayFormat = '###,###,###,###'
    end
    object queryIC_DAGITIMKAR: TFloatField
      FieldName = 'KAR'
      Origin = 'ORTEG2002."icdagitim.DB".KAR'
      DisplayFormat = '###,###,###,###'
    end
  end
end
