object frmIcDagitimList: TfrmIcDagitimList
  Left = 380
  Top = 198
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Ýç Daðýtýmlar'
  ClientHeight = 276
  ClientWidth = 342
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
    Width = 340
    Height = 276
    TabOrder = 0
    object GroupBox2: TGroupBox
      Left = 0
      Top = 0
      Width = 340
      Height = 94
      TabOrder = 0
      object Label1: TLabel
        Left = 176
        Top = 50
        Width = 64
        Height = 13
        Caption = 'Ýç Daðýtým No'
      end
      object Label2: TLabel
        Left = 10
        Top = 51
        Width = 61
        Height = 13
        Caption = 'Firma / Ünite'
      end
      object Label4: TLabel
        Left = 176
        Top = 11
        Width = 34
        Height = 13
        Caption = 'Dönem'
      end
      object Label5: TLabel
        Left = 10
        Top = 10
        Width = 63
        Height = 13
        Caption = 'Hareket Türü'
      end
      object comboHareketTuru: TComboBox
        Left = 10
        Top = 25
        Width = 154
        Height = 21
        Style = csDropDownList
        ItemHeight = 13
        TabOrder = 0
        OnChange = comboHareketTuruChange
      end
      object comboFirmaAdi: TComboBox
        Left = 10
        Top = 65
        Width = 154
        Height = 21
        ItemHeight = 13
        TabOrder = 1
        OnChange = comboFirmaAdiChange
      end
      object comboDonem: TComboBox
        Left = 176
        Top = 25
        Width = 154
        Height = 21
        Style = csDropDownList
        ItemHeight = 13
        TabOrder = 2
        OnChange = comboDonemChange
      end
      object editIcDagitimNo: TEdit
        Left = 176
        Top = 65
        Width = 154
        Height = 21
        TabOrder = 3
        OnChange = editIcDagitimNoChange
      end
    end
    object DBGrid1: TDBGrid
      Left = 6
      Top = 99
      Width = 328
      Height = 169
      DataSource = dsrcIC_DAGITIM
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
          FieldName = 'belge_turu'
          Title.Alignment = taCenter
          Title.Caption = 'Tür'
          Width = 31
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'donem'
          Title.Alignment = taCenter
          Title.Caption = 'Dönem'
          Width = 86
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'belge_no'
          Title.Alignment = taCenter
          Title.Caption = 'Belge No'
          Width = 53
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'firma_adi'
          Title.Alignment = taCenter
          Title.Caption = 'Firma'
          Width = 119
          Visible = True
        end>
    end
  end
  object dsrcIC_DAGITIM: TDataSource
    DataSet = queryIC_DAGITIM
    Left = 13
    Top = 232
  end
  object queryIC_DAGITIM: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from icdagitim')
    Left = 46
    Top = 232
    object queryIC_DAGITIMbelge_turu: TStringField
      FieldName = 'belge_turu'
      Origin = 'ORTEG2002."icdagitim.DB".BELGE_TURU'
    end
    object queryIC_DAGITIMbelge_no: TStringField
      FieldName = 'belge_no'
      Origin = 'ORTEG2002."icdagitim.DB".BELGE_NO'
      Size = 15
    end
    object queryIC_DAGITIMfirma_adi: TStringField
      FieldName = 'firma_adi'
      Origin = 'ORTEG2002."icdagitim.DB".FIRMA_ADI'
      Size = 30
    end
    object queryIC_DAGITIMdonem: TStringField
      FieldName = 'donem'
      Origin = 'ORTEG2002."icdagitim.DB".DONEM'
    end
    object queryIC_DAGITIMFIRMA_KODU: TFloatField
      FieldName = 'FIRMA_KODU'
      Origin = 'ORTEG2002."icdagitim.DB".FIRMA_KODU'
    end
  end
end
