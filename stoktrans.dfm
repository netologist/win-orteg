object frmStokKartiTransfer: TfrmStokKartiTransfer
  Left = 613
  Top = 128
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Stok Kartý Transfer'
  ClientHeight = 127
  ClientWidth = 233
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
  object GroupBox1: TGroupBox
    Left = 0
    Top = -3
    Width = 232
    Height = 100
    TabOrder = 0
    object Label1: TLabel
      Left = 105
      Top = 58
      Width = 115
      Height = 13
      Alignment = taRightJustify
      AutoSize = False
      Caption = '%0  yüklendi...'
    end
    object ProgressBar1: TProgressBar
      Left = 11
      Top = 74
      Width = 212
      Height = 16
      Min = 0
      Max = 100
      TabOrder = 0
    end
    object DateTimePicker1: TDateTimePicker
      Left = 12
      Top = 22
      Width = 99
      Height = 21
      CalAlignment = dtaLeft
      Date = 37729.6184018519
      Time = 37729.6184018519
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 1
    end
    object DateTimePicker2: TDateTimePicker
      Left = 123
      Top = 22
      Width = 99
      Height = 21
      CalAlignment = dtaLeft
      Date = 37729.6189321296
      Time = 37729.6189321296
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 2
    end
  end
  object BitBtn1: TBitBtn
    Left = 103
    Top = 102
    Width = 130
    Height = 25
    Caption = 'Transferi Baþlat'
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object OpenDialog1: TOpenDialog
    Left = 1
    Top = 100
  end
  object SaveDialog1: TSaveDialog
    Left = 31
    Top = 100
  end
  object querySTOKANA: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      
        'SELECT STOK_KODU, STOK_ADI, BIRIMI, BIRIM2, BIRIM_KATSAYISI FROM' +
        ' stokhar'
      'where tarih>=:baslangic and tarih<=:bitis'
      'group by STOK_KODU, STOK_ADI, BIRIMI, BIRIM2, BIRIM_KATSAYISI '
      'order by STOK_KODU')
    Left = 60
    Top = 101
    ParamData = <
      item
        DataType = ftDateTime
        Name = 'baslangic'
        ParamType = ptUnknown
      end
      item
        DataType = ftDateTime
        Name = 'bitis'
        ParamType = ptUnknown
      end>
    object querySTOKANASTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
      Origin = 'ORTEG2002."stokhar.DB".STOK_KODU'
    end
    object querySTOKANASTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      Origin = 'ORTEG2002."stokhar.DB".STOK_ADI'
      Size = 50
    end
    object querySTOKANABIRIMI: TStringField
      FieldName = 'BIRIMI'
      Origin = 'ORTEG2002."stokhar.DB".BIRIMI'
      Size = 15
    end
    object querySTOKANABIRIM2: TStringField
      FieldName = 'BIRIM2'
      Origin = 'ORTEG2002."stokhar.DB".BIRIM2'
      Size = 15
    end
    object querySTOKANABIRIM_KATSAYISI: TFloatField
      FieldName = 'BIRIM_KATSAYISI'
      Origin = 'ORTEG2002."stokhar.DB".BIRIM_KATSAYISI'
    end
  end
end
