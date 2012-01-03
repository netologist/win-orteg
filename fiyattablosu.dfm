object frmFiyatTablosu: TfrmFiyatTablosu
  Left = 261
  Top = 152
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Fiyat Tablosu'
  ClientHeight = 210
  ClientWidth = 298
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object labelStokKodu: TLabel
    Left = 309
    Top = 6
    Width = 69
    Height = 13
    Caption = 'labelStokKodu'
  end
  object labelDurum: TLabel
    Left = 309
    Top = 27
    Width = 53
    Height = 13
    Caption = 'labelDurum'
  end
  object GroupBox1: TGroupBox
    Left = 1
    Top = -3
    Width = 297
    Height = 193
    TabOrder = 0
    object DBGrid1: TDBGrid
      Left = 7
      Top = 33
      Width = 282
      Height = 154
      DataSource = dsrcSTOKANADETAY
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      OnCellClick = DBGrid1CellClick
      OnKeyPress = DBGrid1KeyPress
      Columns = <
        item
          Expanded = False
          FieldName = 'alis_fiyati'
          Title.Alignment = taRightJustify
          Title.Caption = 'Alýþ Fiyatý'
          Width = 103
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'SUM OF miktar'
          Title.Alignment = taRightJustify
          Title.Caption = 'Miktar'
          Width = 82
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'birimi'
          Title.Alignment = taRightJustify
          Title.Caption = 'Birimi'
          Width = 58
          Visible = True
        end>
    end
    object StaticText1: TStaticText
      Left = 7
      Top = 12
      Width = 282
      Height = 17
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSingle
      Caption = '( PINAR && HASAN )'
      Color = cl3DDkShadow
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentColor = False
      ParentFont = False
      TabOrder = 1
    end
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 191
    Width = 298
    Height = 19
    Panels = <
      item
        Width = 180
      end
      item
        Alignment = taCenter
        Width = 50
      end>
    SimplePanel = False
  end
  object querySTOKANADETAY: TQuery
    AutoRefresh = True
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select birimi, alis_fiyati, sum(miktar) from stokanadetay'
      'where stok_kodu=:StokKodu'
      'group by alis_fiyati, birimi')
    Left = 15
    Top = 150
    ParamData = <
      item
        DataType = ftFloat
        Name = 'StokKodu'
        ParamType = ptUnknown
      end>
    object querySTOKANADETAYbirimi: TStringField
      FieldName = 'birimi'
      Origin = 'ORTEG2002."stokanadetay.DB".BIRIMI'
      Size = 10
    end
    object querySTOKANADETAYalis_fiyati: TFloatField
      FieldName = 'alis_fiyati'
      Origin = 'ORTEG2002."stokanadetay.DB".ALIS_FIYATI'
      DisplayFormat = '###,###,###,###'
    end
    object querySTOKANADETAYSUMOFmiktar: TFloatField
      FieldName = 'SUM OF miktar'
      Origin = 'ORTEG2002."stokanadetay.DB".MIKTAR'
      DisplayFormat = '###,###,###,###.###'
    end
  end
  object dsrcSTOKANADETAY: TDataSource
    DataSet = querySTOKANADETAY
    Left = 16
    Top = 121
  end
  object querySTOKHAR: TQuery
    DatabaseName = 'ORTEG2002'
    DataSource = datamoduleORTEG.dsrcSTOKANA
    SQL.Strings = (
      'select * from stokhar'
      'where stok_kodu=:StokKodu')
    Left = 46
    Top = 151
    ParamData = <
      item
        DataType = ftFloat
        Name = 'StokKodu'
        ParamType = ptUnknown
      end>
    object querySTOKHARBELGE_TURU: TStringField
      FieldName = 'BELGE_TURU'
      Origin = 'ORTEG2002."stokhar.DB".BELGE_TURU'
      Size = 10
    end
    object querySTOKHARFIRMA_KODU: TFloatField
      FieldName = 'FIRMA_KODU'
      Origin = 'ORTEG2002."stokhar.DB".FIRMA_KODU'
    end
    object querySTOKHARFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Origin = 'ORTEG2002."stokhar.DB".FIRMA_ADI'
      Size = 35
    end
    object querySTOKHARTARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'ORTEG2002."stokhar.DB".TARIH'
    end
    object querySTOKHARBELGE: TStringField
      FieldName = 'BELGE'
      Origin = 'ORTEG2002."stokhar.DB".BELGE'
      Size = 15
    end
    object querySTOKHARIC_DAGITIM_NO: TStringField
      FieldName = 'IC_DAGITIM_NO'
      Origin = 'ORTEG2002."stokhar.DB".IC_DAGITIM_NO'
      Size = 15
    end
    object querySTOKHARSTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
      Origin = 'ORTEG2002."stokhar.DB".STOK_KODU'
    end
    object querySTOKHARSTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      Origin = 'ORTEG2002."stokhar.DB".STOK_ADI'
      Size = 30
    end
    object querySTOKHARBIRIMI: TStringField
      FieldName = 'BIRIMI'
      Origin = 'ORTEG2002."stokhar.DB".BIRIMI'
      Size = 15
    end
    object querySTOKHARMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      Origin = 'ORTEG2002."stokhar.DB".MIKTAR'
    end
    object querySTOKHARBIRIM2: TStringField
      FieldName = 'BIRIM2'
      Origin = 'ORTEG2002."stokhar.DB".BIRIM2'
      Size = 15
    end
    object querySTOKHARMIKTAR2: TFloatField
      FieldName = 'MIKTAR2'
      Origin = 'ORTEG2002."stokhar.DB".MIKTAR2'
    end
    object querySTOKHARNET_FIYAT: TFloatField
      FieldName = 'NET_FIYAT'
      Origin = 'ORTEG2002."stokhar.DB".NET_FIYAT'
    end
    object querySTOKHARKDV: TFloatField
      FieldName = 'KDV'
      Origin = 'ORTEG2002."stokhar.DB".KDV'
    end
    object querySTOKHARISKONTO: TFloatField
      FieldName = 'ISKONTO'
      Origin = 'ORTEG2002."stokhar.DB".ISKONTO'
    end
    object querySTOKHARALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_FIYATI'
      DisplayFormat = '###,###,###,###'
    end
    object querySTOKHARALIS_TUTARI: TFloatField
      FieldName = 'ALIS_TUTARI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_TUTARI'
    end
    object querySTOKHARSATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_FIYATI'
    end
    object querySTOKHARSATIS_TUTARI: TFloatField
      FieldName = 'SATIS_TUTARI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_TUTARI'
    end
    object querySTOKHARKAR: TFloatField
      FieldName = 'KAR'
      Origin = 'ORTEG2002."stokhar.DB".KAR'
    end
  end
  object queryIADEHAR: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from stokhar'
      'where firma_adi=:firma_adi and stok_kodu=:stok_kodu'
      'order by tarih desc')
    Left = 47
    Top = 120
    ParamData = <
      item
        DataType = ftString
        Name = 'firma_adi'
        ParamType = ptUnknown
      end
      item
        DataType = ftFloat
        Name = 'stok_kodu'
        ParamType = ptUnknown
      end>
    object queryIADEHARBELGE_TURU: TStringField
      FieldName = 'BELGE_TURU'
      Origin = 'ORTEG2002."stokhar.DB".BELGE_TURU'
      Size = 10
    end
    object queryIADEHARFIRMA_KODU: TFloatField
      FieldName = 'FIRMA_KODU'
      Origin = 'ORTEG2002."stokhar.DB".FIRMA_KODU'
    end
    object queryIADEHARFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Origin = 'ORTEG2002."stokhar.DB".FIRMA_ADI'
      Size = 35
    end
    object queryIADEHARTARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'ORTEG2002."stokhar.DB".TARIH'
    end
    object queryIADEHARBELGE: TStringField
      FieldName = 'BELGE'
      Origin = 'ORTEG2002."stokhar.DB".BELGE'
      Size = 15
    end
    object queryIADEHARIC_DAGITIM_NO: TStringField
      FieldName = 'IC_DAGITIM_NO'
      Origin = 'ORTEG2002."stokhar.DB".IC_DAGITIM_NO'
      Size = 15
    end
    object queryIADEHARSTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      Origin = 'ORTEG2002."stokhar.DB".STOK_ADI'
      Size = 30
    end
    object queryIADEHARBIRIMI: TStringField
      FieldName = 'BIRIMI'
      Origin = 'ORTEG2002."stokhar.DB".BIRIMI'
      Size = 15
    end
    object queryIADEHARMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      Origin = 'ORTEG2002."stokhar.DB".MIKTAR'
    end
    object queryIADEHARBIRIM2: TStringField
      FieldName = 'BIRIM2'
      Origin = 'ORTEG2002."stokhar.DB".BIRIM2'
      Size = 15
    end
    object queryIADEHARMIKTAR2: TFloatField
      FieldName = 'MIKTAR2'
      Origin = 'ORTEG2002."stokhar.DB".MIKTAR2'
    end
    object queryIADEHARALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_FIYATI'
      DisplayFormat = '###,###,###,###'
    end
    object queryIADEHARALIS_TUTARI: TFloatField
      FieldName = 'ALIS_TUTARI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_TUTARI'
    end
    object queryIADEHARSATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_FIYATI'
    end
    object queryIADEHARSATIS_TUTARI: TFloatField
      FieldName = 'SATIS_TUTARI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_TUTARI'
    end
    object queryIADEHARKAR: TFloatField
      FieldName = 'KAR'
      Origin = 'ORTEG2002."stokhar.DB".KAR'
    end
    object queryIADEHARSTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
      Origin = 'ORTEG2002."stokhar.DB".STOK_KODU'
    end
    object queryIADEHARNET_FIYAT: TFloatField
      FieldName = 'NET_FIYAT'
      Origin = 'ORTEG2002."stokhar.DB".NET_FIYAT'
    end
    object queryIADEHARKDV: TFloatField
      FieldName = 'KDV'
      Origin = 'ORTEG2002."stokhar.DB".KDV'
    end
    object queryIADEHARISKONTO: TFloatField
      FieldName = 'ISKONTO'
      Origin = 'ORTEG2002."stokhar.DB".ISKONTO'
    end
    object queryIADEHARBIRIM_KATSAYISI: TFloatField
      FieldName = 'BIRIM_KATSAYISI'
      Origin = 'ORTEG2002."stokhar.DB".BIRIM_KATSAYISI'
    end
    object queryIADEHARHAREKET_NO: TIntegerField
      FieldName = 'HAREKET_NO'
      Origin = 'ORTEG2002."stokhar.DB".HAREKET_NO'
    end
  end
end
