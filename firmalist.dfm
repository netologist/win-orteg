object frmFirmaListesi: TfrmFirmaListesi
  Left = 482
  Top = 136
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Firma Listesi'
  ClientHeight = 275
  ClientWidth = 324
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
    Left = 1
    Top = -2
    Width = 323
    Height = 276
    TabOrder = 0
    object GroupBox2: TGroupBox
      Left = 0
      Top = 0
      Width = 323
      Height = 61
      TabOrder = 0
      object RadioButton1: TRadioButton
        Left = 6
        Top = 12
        Width = 113
        Height = 17
        Caption = 'Koda Göre Ara'
        TabOrder = 0
      end
      object RadioButton2: TRadioButton
        Left = 171
        Top = 12
        Width = 91
        Height = 17
        Caption = 'Ada Göre Ara'
        Checked = True
        TabOrder = 1
        TabStop = True
      end
      object Edit1: TEdit
        Left = 6
        Top = 31
        Width = 310
        Height = 21
        CharCase = ecUpperCase
        TabOrder = 2
        OnChange = Edit1Change
      end
    end
    object DBGrid1: TDBGrid
      Left = 7
      Top = 66
      Width = 310
      Height = 205
      DataSource = dsrcFIRMALIST
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      TabOrder = 1
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
          FieldName = 'FIRMA_KODU'
          Title.Alignment = taCenter
          Title.Caption = 'F.Kodu'
          Width = 48
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'FIRMA_ADI'
          Title.Alignment = taCenter
          Title.Caption = 'Firma Adý'
          Width = 128
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'TELEFON'
          Title.Alignment = taCenter
          Title.Caption = 'Telefon'
          Width = 97
          Visible = True
        end>
    end
  end
  object queryFIRMALIST: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from firma')
    Left = 29
    Top = 184
    object queryFIRMALISTFIRMA_KODU: TFloatField
      FieldName = 'FIRMA_KODU'
      Origin = 'ORTEG2002."firma.DB".FIRMA_KODU'
    end
    object queryFIRMALISTFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Origin = 'ORTEG2002."firma.DB".FIRMA_ADI'
      Size = 30
    end
    object queryFIRMALISTADRES_1: TStringField
      FieldName = 'ADRES_1'
      Origin = 'ORTEG2002."firma.DB".ADRES_1'
      Size = 50
    end
    object queryFIRMALISTADRES_2: TStringField
      FieldName = 'ADRES_2'
      Origin = 'ORTEG2002."firma.DB".ADRES_2'
      Size = 50
    end
    object queryFIRMALISTTELEFON: TStringField
      FieldName = 'TELEFON'
      Origin = 'ORTEG2002."firma.DB".TELEFON'
      Size = 25
    end
    object queryFIRMALISTFAKS: TStringField
      FieldName = 'FAKS'
      Origin = 'ORTEG2002."firma.DB".FAKS'
      Size = 25
    end
  end
  object dsrcFIRMALIST: TDataSource
    DataSet = queryFIRMALIST
    Left = 26
    Top = 214
  end
end
