object frmTransfer: TfrmTransfer
  Left = 468
  Top = 83
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Transfer Ýþlemi'
  ClientHeight = 196
  ClientWidth = 385
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = -3
    Width = 385
    Height = 199
    TabOrder = 0
    object Bevel1: TBevel
      Left = 7
      Top = 154
      Width = 370
      Height = 3
    end
    object Bevel2: TBevel
      Left = 0
      Top = 64
      Width = 383
      Height = 2
    end
    object Label1: TLabel
      Left = 294
      Top = 116
      Width = 80
      Height = 13
      Alignment = taRightJustify
      AutoSize = False
      Caption = '% 0 aktarýldý...'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNavy
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object BitBtn1: TBitBtn
      Left = 10
      Top = 166
      Width = 170
      Height = 25
      Caption = 'Metin Dosyasýný Kaydet'
      Default = True
      Enabled = False
      ModalResult = 1
      TabOrder = 0
      OnClick = BitBtn1Click
      Glyph.Data = {
        36030000424D3603000000000000360000002800000010000000100000000100
        1800000000000003000000000000000000000000000000000000FF00FFFF00FF
        FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00
        FFFF00FFFF00FFFF00FFFF00FFFF00FF00000000000000000000000000000000
        0000000000000000000000000000000000000000000000FF00FFFF00FF000000
        008080008080000000000000000000000000000000000000FF00FFFF00FF0000
        00008080000000FF00FFFF00FF00000000808000808000000000000000000000
        0000000000000000FF00FFFF00FF000000008080000000FF00FFFF00FF000000
        008080008080000000000000000000000000000000000000FF00FFFF00FF0000
        00008080000000FF00FFFF00FF00000000808000808000000000000000000000
        0000000000000000000000000000000000008080000000FF00FFFF00FF000000
        0080800080800080800080800080800080800080800080800080800080800080
        80008080000000FF00FFFF00FF00000000808000808000000000000000000000
        0000000000000000000000000000008080008080000000FF00FFFF00FF000000
        008080000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF0000
        00008080000000FF00FFFF00FF000000008080000000FF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FF000000008080000000FF00FFFF00FF000000
        008080000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF0000
        00008080000000FF00FFFF00FF000000008080000000FF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FF000000008080000000FF00FFFF00FF000000
        008080000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF0000
        00000000000000FF00FFFF00FF000000008080000000FF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FF000000FF00FF000000FF00FFFF00FF000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF}
    end
    object BitBtn2: TBitBtn
      Left = 203
      Top = 166
      Width = 170
      Height = 25
      Cancel = True
      Caption = 'Metin Dosyasýný Aç'
      Enabled = False
      ModalResult = 2
      TabOrder = 1
      OnClick = BitBtn2Click
      Glyph.Data = {
        36030000424D3603000000000000360000002800000010000000100000000100
        1800000000000003000000000000000000000000000000000000FF00FFFF00FF
        FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00
        FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF000000000000
        000000000000000000000000000000000000000000000000000000FF00FFFF00
        FFFF00FFFF00FFFF00FF00000000000000808000808000808000808000808000
        8080008080008080008080000000FF00FFFF00FFFF00FFFF00FF00000000FFFF
        0000000080800080800080800080800080800080800080800080800080800000
        00FF00FFFF00FFFF00FF000000FFFFFF00FFFF00000000808000808000808000
        8080008080008080008080008080008080000000FF00FFFF00FF00000000FFFF
        FFFFFF00FFFF0000000080800080800080800080800080800080800080800080
        80008080000000FF00FF000000FFFFFF00FFFFFFFFFF00FFFF00000000000000
        000000000000000000000000000000000000000000000000000000000000FFFF
        FFFFFF00FFFFFFFFFF00FFFFFFFFFF00FFFFFFFFFF00FFFF000000FF00FFFF00
        FFFF00FFFF00FFFF00FF000000FFFFFF00FFFFFFFFFF00FFFFFFFFFF00FFFFFF
        FFFF00FFFFFFFFFF000000FF00FFFF00FFFF00FFFF00FFFF00FF00000000FFFF
        FFFFFF00FFFF000000000000000000000000000000000000000000FF00FFFF00
        FFFF00FFFF00FFFF00FFFF00FF000000000000000000FF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FF000000000000000000FF00FFFF00FFFF00FF
        FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00
        FF000000000000FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF
        00FF000000FF00FFFF00FFFF00FF000000FF00FF000000FF00FFFF00FFFF00FF
        FF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF000000000000000000FF00
        FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF
        00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FFFF00FF}
    end
    object datetimeBASLANGIC: TDateTimePicker
      Left = 17
      Top = 35
      Width = 169
      Height = 21
      CalAlignment = dtaLeft
      Date = 37705.6245639352
      Time = 37705.6245639352
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 2
    end
    object datetimeBITIS: TDateTimePicker
      Left = 200
      Top = 35
      Width = 171
      Height = 21
      CalAlignment = dtaLeft
      Date = 37705.6245872222
      Time = 37705.6245872222
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 3
    end
    object StaticText1: TStaticText
      Left = 17
      Top = 16
      Width = 167
      Height = 16
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSingle
      Caption = 'BAÞLANGIÇ TARÝHÝ'
      Color = clInfoBk
      ParentColor = False
      TabOrder = 4
    end
    object StaticText2: TStaticText
      Left = 200
      Top = 16
      Width = 169
      Height = 16
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSingle
      Caption = 'BÝTÝÞ TARÝHÝ'
      Color = clInfoBk
      ParentColor = False
      TabOrder = 5
    end
    object checkboxICDAGITIM: TCheckBox
      Left = 15
      Top = 71
      Width = 112
      Height = 17
      Caption = 'Ýç Daðýtým'
      TabOrder = 6
      OnClick = checkboxICDAGITIMClick
    end
    object checkboxFATURA: TCheckBox
      Left = 15
      Top = 130
      Width = 112
      Height = 17
      Caption = 'Fatura'
      TabOrder = 7
      OnClick = checkboxFATURAClick
    end
    object checkboxIADE: TCheckBox
      Left = 15
      Top = 110
      Width = 112
      Height = 17
      Caption = 'Ýade Ýç Daðýtým'
      TabOrder = 8
      OnClick = checkboxIADEClick
    end
    object checkboxTEMIZLIK: TCheckBox
      Left = 15
      Top = 91
      Width = 112
      Height = 17
      Caption = 'Temizlik'
      TabOrder = 9
      OnClick = checkboxTEMIZLIKClick
    end
    object ProgressBar1: TProgressBar
      Left = 150
      Top = 132
      Width = 226
      Height = 16
      Min = 0
      Max = 100
      Smooth = True
      TabOrder = 10
    end
  end
  object SaveDialog1: TSaveDialog
    Left = 349
    Top = 72
  end
  object OpenDialog1: TOpenDialog
    Left = 316
    Top = 72
  end
  object queryTRANSFER: TQuery
    Active = True
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      
        'SELECT BELGE_TURU, BELGE_NO, FIRMA_KODU, FIRMA_ADI, DONEM, TARIH' +
        ', STOK_KODU, STOK_ADI, SUM(MIKTAR)MIKTAR, BIRIMI, ALIS_FIYATI, S' +
        'UM(ALIS_TUTARI)ALIS_TUTARI, SATIS_FIYATI, SUM(SATIS_TUTARI)SATIS' +
        '_TUTARI, SUM(KAR)KAR FROM ICDAGITIM'
      
        'GROUP BY BELGE_TURU, BELGE_NO, FIRMA_KODU, FIRMA_ADI, DONEM, TAR' +
        'IH, STOK_KODU, STOK_ADI, MIKTAR, BIRIMI, ALIS_FIYATI, ALIS_TUTAR' +
        'I, SATIS_FIYATI, SATIS_TUTARI, KAR')
    Left = 252
    Top = 72
    object queryTRANSFERBELGE_TURU: TStringField
      FieldName = 'BELGE_TURU'
      Origin = 'ORTEG2002."ICDAGITIM.DB".BELGE_TURU'
    end
    object queryTRANSFERBELGE_NO: TStringField
      FieldName = 'BELGE_NO'
      Origin = 'ORTEG2002."ICDAGITIM.DB".BELGE_NO'
      Size = 15
    end
    object queryTRANSFERFIRMA_KODU: TFloatField
      FieldName = 'FIRMA_KODU'
      Origin = 'ORTEG2002."ICDAGITIM.DB".FIRMA_KODU'
    end
    object queryTRANSFERFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Origin = 'ORTEG2002."ICDAGITIM.DB".FIRMA_ADI'
      Size = 30
    end
    object queryTRANSFERDONEM: TStringField
      FieldName = 'DONEM'
      Origin = 'ORTEG2002."ICDAGITIM.DB".DONEM'
    end
    object queryTRANSFERTARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'ORTEG2002."ICDAGITIM.DB".TARIH'
    end
    object queryTRANSFERSTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
      Origin = 'ORTEG2002."ICDAGITIM.DB".STOK_KODU'
    end
    object queryTRANSFERSTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      Origin = 'ORTEG2002."ICDAGITIM.DB".STOK_ADI'
      Size = 50
    end
    object queryTRANSFERMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      Origin = 'ORTEG2002."ICDAGITIM.DB".MIKTAR'
    end
    object queryTRANSFERBIRIMI: TStringField
      FieldName = 'BIRIMI'
      Origin = 'ORTEG2002."ICDAGITIM.DB".BIRIMI'
      Size = 10
    end
    object queryTRANSFERALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
      Origin = 'ORTEG2002."ICDAGITIM.DB".ALIS_FIYATI'
    end
    object queryTRANSFERALIS_TUTARI: TFloatField
      FieldName = 'ALIS_TUTARI'
      Origin = 'ORTEG2002."ICDAGITIM.DB".ALIS_TUTARI'
    end
    object queryTRANSFERSATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
      Origin = 'ORTEG2002."ICDAGITIM.DB".SATIS_FIYATI'
    end
    object queryTRANSFERSATIS_TUTARI: TFloatField
      FieldName = 'SATIS_TUTARI'
      Origin = 'ORTEG2002."ICDAGITIM.DB".SATIS_TUTARI'
    end
    object queryTRANSFERKAR: TFloatField
      FieldName = 'KAR'
      Origin = 'ORTEG2002."ICDAGITIM.DB".KAR'
    end
  end
  object querySTOKANA: TQuery
    DatabaseName = 'ORTEG2002'
    DataSource = dsrcTRANSFER
    SQL.Strings = (
      'SELECT * FROM STOKANA'
      'WHERE StokKodu=:STOK_KODU')
    Left = 282
    Top = 72
    ParamData = <
      item
        DataType = ftFloat
        Name = 'STOK_KODU'
        ParamType = ptUnknown
      end>
    object querySTOKANAStokKodu: TFloatField
      FieldName = 'StokKodu'
      Origin = 'ORTEG2002."STOKANA.DB".StokKodu'
    end
    object querySTOKANAStokAdi: TStringField
      FieldName = 'StokAdi'
      Origin = 'ORTEG2002."STOKANA.DB".StokAdi'
      Size = 50
    end
    object querySTOKANACinsi: TStringField
      FieldName = 'Cinsi'
      Origin = 'ORTEG2002."STOKANA.DB".Cinsi'
      Size = 30
    end
    object querySTOKANADevirMiktari: TFloatField
      FieldName = 'DevirMiktari'
      Origin = 'ORTEG2002."STOKANA.DB".DevirMiktari'
    end
    object querySTOKANABirimi: TStringField
      FieldName = 'Birimi'
      Origin = 'ORTEG2002."STOKANA.DB".Birimi'
      Size = 15
    end
    object querySTOKANABirim2: TStringField
      FieldName = 'Birim2'
      Origin = 'ORTEG2002."STOKANA.DB".Birim2'
      Size = 15
    end
    object querySTOKANABirim2Katsayisi: TFloatField
      FieldName = 'Birim2Katsayisi'
      Origin = 'ORTEG2002."STOKANA.DB".Birim2Katsayisi'
    end
    object querySTOKANAKDVOrani: TFloatField
      FieldName = 'KDVOrani'
      Origin = 'ORTEG2002."STOKANA.DB".KDVOrani'
    end
    object querySTOKANAIskontoOrani: TFloatField
      FieldName = 'IskontoOrani'
      Origin = 'ORTEG2002."STOKANA.DB".IskontoOrani'
    end
    object querySTOKANABirimeGore: TStringField
      FieldName = 'BirimeGore'
      Origin = 'ORTEG2002."STOKANA.DB".BirimeGore'
      Size = 15
    end
    object querySTOKANASonDurum: TFloatField
      FieldName = 'SonDurum'
      Origin = 'ORTEG2002."STOKANA.DB".SonDurum'
    end
  end
  object dsrcTRANSFER: TDataSource
    DataSet = queryTRANSFER
    Left = 222
    Top = 72
  end
  object querySTOKHAR: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from stokhar')
    Left = 192
    Top = 72
  end
end
