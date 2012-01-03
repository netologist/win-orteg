object frmHazirlanmayanlar: TfrmHazirlanmayanlar
  Left = 222
  Top = 119
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Ýç Daðýtýmý Hazýrlanmayan'
  ClientHeight = 438
  ClientWidth = 688
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
    Width = 688
    Height = 438
    TabOrder = 0
    object Label1: TLabel
      Left = 498
      Top = 13
      Width = 34
      Height = 13
      Caption = 'Dönem'
    end
    object comboDONEM: TComboBox
      Left = 538
      Top = 13
      Width = 145
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 0
      OnChange = comboDONEMChange
    end
    object DBGrid1: TDBGrid
      Left = 6
      Top = 39
      Width = 674
      Height = 392
      DataSource = dsrcHAZIRLANMAYANLAR
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'BELGE_TURU'
          Title.Alignment = taCenter
          Title.Caption = 'Ýþlem'
          Width = 65
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'FIRMA_ADI'
          Title.Alignment = taCenter
          Title.Caption = 'Firma Adý'
          Width = 137
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'TARIH'
          Title.Alignment = taCenter
          Title.Caption = 'Tarih'
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'STOK_KODU'
          Title.Alignment = taCenter
          Title.Caption = 'Stok Kodu'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'STOK_ADI'
          Title.Alignment = taCenter
          Title.Caption = 'Stok Adý'
          Width = 160
          Visible = True
        end
        item
          Alignment = taRightJustify
          Expanded = False
          FieldName = 'MIKTAR'
          Title.Alignment = taRightJustify
          Title.Caption = 'Miktar'
          Width = 70
          Visible = True
        end
        item
          Alignment = taRightJustify
          Expanded = False
          FieldName = 'BIRIMI'
          Title.Alignment = taRightJustify
          Title.Caption = 'Birimi'
          Width = 70
          Visible = True
        end>
    end
  end
  object queryHAZIRLANMAYANLAR: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from stokhar'
      
        'where (tarih >= :baslangic_tarihi and tarih <= :bitis_tarihi ) a' +
        'nd ic_dagitim_no="-1"'
      'order by belge_turu')
    Left = 615
    Top = 394
    ParamData = <
      item
        DataType = ftDateTime
        Name = 'baslangic_tarihi'
        ParamType = ptUnknown
      end
      item
        DataType = ftDateTime
        Name = 'bitis_tarihi'
        ParamType = ptUnknown
      end>
  end
  object dsrcHAZIRLANMAYANLAR: TDataSource
    DataSet = queryHAZIRLANMAYANLAR
    Left = 645
    Top = 394
  end
end
