object frmStokListesi: TfrmStokListesi
  Left = 353
  Top = 292
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Stok Listesi'
  ClientHeight = 274
  ClientWidth = 450
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
    Top = -2
    Width = 448
    Height = 276
    TabOrder = 0
    object GroupBox2: TGroupBox
      Left = 0
      Top = 0
      Width = 448
      Height = 61
      TabOrder = 0
      object RadioButton1: TRadioButton
        Left = 8
        Top = 12
        Width = 113
        Height = 17
        Caption = 'Koda Göre Ara'
        TabOrder = 0
        OnClick = RadioButton1Click
      end
      object RadioButton2: TRadioButton
        Left = 150
        Top = 12
        Width = 118
        Height = 17
        Caption = 'Ada Göre Ara'
        Checked = True
        TabOrder = 1
        TabStop = True
        OnClick = RadioButton2Click
      end
      object editSorgu: TEdit
        Left = 7
        Top = 34
        Width = 433
        Height = 21
        CharCase = ecUpperCase
        TabOrder = 2
        OnChange = editSorguChange
      end
      object comboCinsi: TComboBox
        Left = 276
        Top = 10
        Width = 165
        Height = 21
        ItemHeight = 13
        TabOrder = 3
        Text = 'Tümü ...'
        OnChange = comboCinsiChange
      end
    end
    object DBGrid1: TDBGrid
      Left = 8
      Top = 65
      Width = 432
      Height = 205
      DataSource = DataSource1
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
          FieldName = 'StokKodu'
          Title.Alignment = taCenter
          Title.Caption = 'S.Kodu'
          Width = 48
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'StokAdi'
          Title.Alignment = taCenter
          Width = 174
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Birimi'
          Title.Alignment = taCenter
          Width = 50
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Cinsi'
          Width = 120
          Visible = True
        end>
    end
  end
  object querySTOKLIST: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from stokana'
      'order by stokkodu desc')
    Left = 29
    Top = 184
    object querySTOKLISTStokKodu: TFloatField
      FieldName = 'StokKodu'
      Origin = 'ORTEG2002."stokana.DB".StokKodu'
    end
    object querySTOKLISTCinsi: TStringField
      FieldName = 'Cinsi'
      Origin = 'ORTEG2002."stokana.DB".Cinsi'
      Size = 30
    end
    object querySTOKLISTDevirMiktari: TFloatField
      FieldName = 'DevirMiktari'
      Origin = 'ORTEG2002."stokana.DB".DevirMiktari'
    end
    object querySTOKLISTBirimi: TStringField
      FieldName = 'Birimi'
      Origin = 'ORTEG2002."stokana.DB".Birimi'
      Size = 15
    end
    object querySTOKLISTBirim2: TStringField
      FieldName = 'Birim2'
      Origin = 'ORTEG2002."stokana.DB".Birim2'
      Size = 15
    end
    object querySTOKLISTBirim2Katsayisi: TFloatField
      FieldName = 'Birim2Katsayisi'
      Origin = 'ORTEG2002."stokana.DB".Birim2Katsayisi'
    end
    object querySTOKLISTKDVOrani: TFloatField
      FieldName = 'KDVOrani'
      Origin = 'ORTEG2002."stokana.DB".KDVOrani'
    end
    object querySTOKLISTIskontoOrani: TFloatField
      FieldName = 'IskontoOrani'
      Origin = 'ORTEG2002."stokana.DB".IskontoOrani'
    end
    object querySTOKLISTBirimeGore: TStringField
      FieldName = 'BirimeGore'
      Origin = 'ORTEG2002."stokana.DB".BirimeGore'
      Size = 15
    end
    object querySTOKLISTSonDurum: TFloatField
      FieldName = 'SonDurum'
      Origin = 'ORTEG2002."stokana.DB".SonDurum'
    end
    object querySTOKLISTStokAdi: TStringField
      FieldName = 'StokAdi'
      Origin = 'ORTEG2002."stokana.DB".StokAdi'
      Size = 50
    end
  end
  object DataSource1: TDataSource
    DataSet = querySTOKLIST
    Left = 26
    Top = 214
  end
end
