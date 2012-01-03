object frmKartDegistir: TfrmKartDegistir
  Left = 192
  Top = 102
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Kart Bilgisi Deðiþtir [ hareket ile ]'
  ClientHeight = 337
  ClientWidth = 660
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
  object labelYUZDE: TLabel
    Left = 325
    Top = 303
    Width = 29
    Height = 16
    Alignment = taRightJustify
    AutoSize = False
    Caption = '0 %'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 199
    Top = 303
    Width = 126
    Height = 17
    AutoSize = False
    Caption = 'Deðiþtirilen Kayýt: Yüzdesi :'
  end
  object Panel1: TPanel
    Left = 358
    Top = 294
    Width = 301
    Height = 43
    TabOrder = 0
    object SpeedButton1: TSpeedButton
      Left = 249
      Top = 5
      Width = 47
      Height = 33
      BiDiMode = bdRightToLeft
      Flat = True
      Glyph.Data = {
        D60B0000424DD60B0000000000003600000028000000200000001F0000000100
        180000000000A00B000000000000000000000000000000000000FFFBFFFFFBFF
        FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFB
        FFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFB
        FFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFB
        FFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFB
        FFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFFFFFBFF080C08080C08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFB
        FFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C08006531080C08080C08FFFBFFFFFBFFFFFBFFFFFB
        FFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C08009A31009A31006531080C08080C08FFFBFFFFFB
        FFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0800CF3100CF31009A31009A31009A31080C08080C
        08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0800CF0000CF3100CF3100CF31009A31009A31009A
        31080C08080C08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0831FF3131FF3100CF0000CF0000CF3100CF3100CF
        31009A31009A31080C08080C08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0831FF3131FF3131FF3131FF3131FF3100CF0000CF
        0000CF3100CF3100CF31009A31080C08080C08FFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0831FF3131FF3131FF3131FF3131FF3131FF3131FF
        3131FF3100CF0000CF0000CF3100CF31009A31080C08080C08FFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0863FF6363FF6331FF3131FF3131FF3131FF3131FF
        3131FF3131FF3131FF3131FF3100CF0000CF0000CF3100CF31080C08080C08FF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0863FF6363FF6363FF6363FF6363FF6363FF6363FF
        6363FF6363FF6331FF3131FF3131FF3131FF3131FF3100CF0000CF0000CF3108
        0C08080C08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0863FF6363FF6363FF6363FF6363FF6363FF6363FF
        6363FF6363FF6363FF6363FF6363FF6363FF6363FF6363FF6331FF3100CF0000
        CF0000CF31080C08080C08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0863FF6363FF6363FF6363FF6363FF6363FF6363FF
        6363FF6363FF6363FF6363FF6363FF6363FF6363FF6363FF6363FF6363FF6331
        FF6331FF6300CF00CEFFCE080C08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0863FF6363FF6363FF6363FF6363FF6363FF6363FF
        6363FF6363FF6363FF6363FF6363FF6363FF6363FF6363FF6363FF6331FF6331
        FF63CEFFCECEFFCECEFFCE080C08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0863FF6363FF6363FF6363FF6363FF6363FF6363FF
        6363FF6363FF6363FF6363FF6363FF6363FF6363FF6331FF6331FF63CEFFCECE
        FFCECEFFCE080C08080C08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0863FF6363FF6363FF6363FF6363FF6363FF6363FF
        6363FF6363FF6363FF6363FF6363FF6331FF6331FF63CEFFCECEFFCECEFFCE08
        0C08080C08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0863FF6363FF6363FF6363FF6363FF6363FF6363FF
        6363FF6363FF6363FF6331FF6331FF63CEFFCECEFFCECEFFCE080C08080C08FF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0863FF6363FF6363FF6363FF6363FF6363FF6363FF
        6363FF6331FF6331FF63CEFFCECEFFCECEFFCE080C08080C08FFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0863FF6363FF6363FF6363FF6363FF6363FF6331FF
        6331FF63CEFFCECEFFCECEFFCE080C08080C08FFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0863FF6363FF6363FF6363FF6331FF6331FF63CEFF
        CECEFFCECEFFCE080C08080C08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C0831FF6331FF6331FF6331FF63CEFFCECEFFCECEFF
        CE080C08080C08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C08CEFFCECEFFCECEFFCECEFFCECEFFCE080C08080C
        08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C08CEFFCECEFFCECEFFCE080C08080C08FFFBFFFFFB
        FFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFF636563080C08CEFFCE080C08080C08FFFBFFFFFBFFFFFBFFFFFB
        FFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFFFFFBFF080C08080C08FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFB
        FFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFB
        FFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFB
        FFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF
        FFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFB
        FFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFF
        FBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFFFFFBFF}
      Layout = blGlyphTop
      ParentBiDiMode = False
      OnClick = SpeedButton1Click
    end
    object Label1: TLabel
      Left = 11
      Top = 6
      Width = 127
      Height = 13
      Caption = 'Deðiþtiriliecek Kalem Sayýsý'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object SpeedButton2: TSpeedButton
      Left = 202
      Top = 5
      Width = 47
      Height = 33
      Flat = True
      Glyph.Data = {
        76010000424D7601000000000000760000002800000020000000100000000100
        04000000000000010000130B0000130B00001000000000000000000000000000
        800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF0033333333B333
        333B33F333337F3333373B33333BB33333B337FF33377F33337F3BB3333BB333
        3BB3377FF3377F33377333BB777BB777BB333377FFF77FFF7733330000000000
        B3333377777777777333330FFFFFFFF03333337F3FF3FFF7F333330F00F000F0
        33333F7F77377737FFFFBB0FFF8FFFF0BBB3777F3F33FFF7777F3B0F08700000
        000B377F73F7777777773308880FFFFFF033337F377333333733330807FFFFF8
        033333737FFFFFFF7F33333000000000B3333337777777777FF333BB333BB333
        BB33337733377F3377FF3BB3333BB3333BB3377333377F33377F3B33333BB333
        33B33733333773333373B333333B3333333B7333333733333337}
      Layout = blGlyphTop
      NumGlyphs = 2
      OnClick = SpeedButton2Click
    end
    object editSayac: TEdit
      Left = 144
      Top = 6
      Width = 58
      Height = 32
      TabStop = False
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNavy
      Font.Height = -21
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      Text = '00000'
    end
  end
  object ProgressBar1: TProgressBar
    Left = 5
    Top = 319
    Width = 349
    Height = 16
    Min = 0
    Max = 100
    Smooth = True
    TabOrder = 1
  end
  object PageControl1: TPageControl
    Left = 1
    Top = 0
    Width = 658
    Height = 292
    TabOrder = 2
    TabStop = False
    object TTabSheet
      Caption = 'Stok Listesi'
      object GroupBox1: TGroupBox
        Left = 0
        Top = -5
        Width = 649
        Height = 269
        TabOrder = 0
        object DBGrid1: TDBGrid
          Left = 6
          Top = 12
          Width = 637
          Height = 226
          DataSource = dsrcSTOKANA
          Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          OnCellClick = DBGrid1CellClick
          OnKeyPress = DBGrid1KeyPress
          OnKeyUp = DBGrid1KeyUp
          Columns = <
            item
              Expanded = False
              FieldName = 'StokKodu'
              Title.Alignment = taRightJustify
              Title.Caption = 'Kod'
              Width = 30
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'StokAdi'
              Width = 245
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'Cinsi'
              Width = 120
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'Birimi'
              Width = 70
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'Birim2'
              Width = 70
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'Birim2Katsayisi'
              Title.Alignment = taRightJustify
              Title.Caption = 'Katsayisi'
              Width = 60
              Visible = True
            end>
        end
        object editStokAdi: TEdit
          Left = 6
          Top = 242
          Width = 289
          Height = 21
          TabOrder = 1
          OnKeyPress = editStokAdiKeyPress
        end
        object comboCinsi: TComboBox
          Left = 298
          Top = 242
          Width = 120
          Height = 21
          Style = csDropDownList
          ItemHeight = 13
          TabOrder = 2
          OnKeyPress = comboCinsiKeyPress
        end
        object comboBirimi: TComboBox
          Left = 419
          Top = 242
          Width = 67
          Height = 21
          Style = csDropDownList
          ItemHeight = 13
          TabOrder = 3
          OnKeyPress = comboBirimiKeyPress
        end
        object comboBirimi2: TComboBox
          Left = 488
          Top = 242
          Width = 73
          Height = 21
          Style = csDropDownList
          ItemHeight = 13
          TabOrder = 4
          OnKeyPress = comboBirimi2KeyPress
        end
        object editKatsayisi: TEdit
          Left = 563
          Top = 242
          Width = 59
          Height = 21
          TabOrder = 5
          OnKeyPress = editKatsayisiKeyPress
        end
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Deðiþtirilecek Kayitlar'
      ImageIndex = 1
      object GroupBox2: TGroupBox
        Left = 0
        Top = -5
        Width = 649
        Height = 267
        TabOrder = 0
        object DBGrid2: TDBGrid
          Left = 6
          Top = 12
          Width = 637
          Height = 247
          TabStop = False
          DataSource = dsrcSTOKDEGIS
          Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
          PopupMenu = PopupMenu1
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          Columns = <
            item
              Expanded = False
              FieldName = 'StokKodu'
              Title.Caption = 'Kod'
              Width = 35
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'EStokAdi'
              Title.Caption = 'Eski Stok Adý'
              Width = 138
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'StokAdi'
              Title.Caption = 'Stok Adý'
              Width = 138
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'Cinsi'
              Width = 84
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'Birimi'
              Width = 70
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'Birim2'
              Width = 70
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'Birim2Katsayisi'
              Title.Alignment = taRightJustify
              Title.Caption = 'Katsayýsý'
              Width = 60
              Visible = True
            end>
        end
      end
    end
  end
  object querySTOKANA: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from stokana'
      'order by stokkodu')
    Left = 33
    Top = 375
    object querySTOKANAStokKodu: TFloatField
      FieldName = 'StokKodu'
      Origin = 'ORTEG2002."stokana.DB".StokKodu'
    end
    object querySTOKANAStokAdi: TStringField
      FieldName = 'StokAdi'
      Origin = 'ORTEG2002."stokana.DB".StokAdi'
      Size = 50
    end
    object querySTOKANACinsi: TStringField
      FieldName = 'Cinsi'
      Origin = 'ORTEG2002."stokana.DB".Cinsi'
      Size = 30
    end
    object querySTOKANADevirMiktari: TFloatField
      FieldName = 'DevirMiktari'
      Origin = 'ORTEG2002."stokana.DB".DevirMiktari'
    end
    object querySTOKANABirimi: TStringField
      FieldName = 'Birimi'
      Origin = 'ORTEG2002."stokana.DB".Birimi'
      Size = 15
    end
    object querySTOKANABirim2: TStringField
      FieldName = 'Birim2'
      Origin = 'ORTEG2002."stokana.DB".Birim2'
      Size = 15
    end
    object querySTOKANABirim2Katsayisi: TFloatField
      FieldName = 'Birim2Katsayisi'
      Origin = 'ORTEG2002."stokana.DB".Birim2Katsayisi'
    end
    object querySTOKANAKDVOrani: TFloatField
      FieldName = 'KDVOrani'
      Origin = 'ORTEG2002."stokana.DB".KDVOrani'
    end
    object querySTOKANAIskontoOrani: TFloatField
      FieldName = 'IskontoOrani'
      Origin = 'ORTEG2002."stokana.DB".IskontoOrani'
    end
    object querySTOKANABirimeGore: TStringField
      FieldName = 'BirimeGore'
      Origin = 'ORTEG2002."stokana.DB".BirimeGore'
      Size = 15
    end
    object querySTOKANASonDurum: TFloatField
      FieldName = 'SonDurum'
      Origin = 'ORTEG2002."stokana.DB".SonDurum'
    end
  end
  object dsrcSTOKANA: TDataSource
    DataSet = querySTOKANA
    Left = 3
    Top = 375
  end
  object dsrcSTOKDEGIS: TDataSource
    DataSet = tblSTOKDEGIS
    OnDataChange = dsrcSTOKDEGISDataChange
    Left = 3
    Top = 405
  end
  object tblSTOKDEGIS: TTable
    DatabaseName = 'ORTEG2002'
    TableName = 'stkanahardegis.DB'
    Left = 33
    Top = 405
    object tblSTOKDEGISStokKodu: TFloatField
      FieldName = 'StokKodu'
    end
    object tblSTOKDEGISEStokAdi: TStringField
      FieldName = 'EStokAdi'
      Size = 50
    end
    object tblSTOKDEGISStokAdi: TStringField
      FieldName = 'StokAdi'
      Size = 50
    end
    object tblSTOKDEGISCinsi: TStringField
      FieldName = 'Cinsi'
      Size = 30
    end
    object tblSTOKDEGISBirimi: TStringField
      FieldName = 'Birimi'
      Size = 15
    end
    object tblSTOKDEGISBirim2: TStringField
      FieldName = 'Birim2'
      Size = 15
    end
    object tblSTOKDEGISBirim2Katsayisi: TFloatField
      FieldName = 'Birim2Katsayisi'
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 65
    Top = 375
    object Sil1: TMenuItem
      Caption = 'Sil'
      OnClick = Sil1Click
    end
  end
  object queryDEGISTIRENSORGU: TQuery
    DatabaseName = 'ORTEG2002'
    Left = 96
    Top = 375
  end
end
