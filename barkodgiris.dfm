object frmBarkodGiris: TfrmBarkodGiris
  Left = 389
  Top = 347
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Barkod ile Giriþ'
  ClientHeight = 31
  ClientWidth = 326
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
  object editBarkodNo: TEdit
    Left = 1
    Top = 1
    Width = 324
    Height = 28
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clOlive
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    HideSelection = False
    ParentFont = False
    TabOrder = 0
    OnKeyPress = editBarkodNoKeyPress
  end
  object queryBARKOD: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from barkod'
      'where BARKOD_NO=:BARKOD_NO')
    Left = 2
    Top = 175
    ParamData = <
      item
        DataType = ftString
        Name = 'BARKOD_NO'
        ParamType = ptUnknown
      end>
    object queryBARKODSTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
      Origin = 'ORTEG2002."barkod.DB".STOK_KODU'
    end
    object queryBARKODSTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      Origin = 'ORTEG2002."barkod.DB".STOK_ADI'
      Size = 50
    end
    object queryBARKODBARKOD_NO: TStringField
      FieldName = 'BARKOD_NO'
      Origin = 'ORTEG2002."barkod.DB".BARKOD_NO'
      Size = 30
    end
  end
  object dsrcBARKOD: TDataSource
    DataSet = queryBARKOD
    Left = 32
    Top = 175
  end
end
