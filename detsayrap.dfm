object rprDetayliSayimRaporu: TrprDetayliSayimRaporu
  Left = 250
  Top = 110
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Detaylý Sayým Raporu'
  ClientHeight = 305
  ClientWidth = 534
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  Scaled = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox3: TGroupBox
    Left = 1
    Top = 207
    Width = 393
    Height = 97
    TabOrder = 3
    object labelYUZDE: TLabel
      Left = 354
      Top = 30
      Width = 31
      Height = 13
      Alignment = taRightJustify
      AutoSize = False
      Caption = '% 0'
    end
    object Label6: TLabel
      Left = 8
      Top = 12
      Width = 24
      Height = 13
      Caption = 'Ýþlem'
    end
    object Bevel2: TBevel
      Left = 8
      Top = 52
      Width = 379
      Height = 5
      Shape = bsBottomLine
    end
    object BitBtn2: TBitBtn
      Left = 304
      Top = 65
      Width = 81
      Height = 25
      Caption = 'Ýptal'
      TabOrder = 0
      OnClick = BitBtn2Click
      Kind = bkCancel
    end
    object BitBtn1: TBitBtn
      Left = 219
      Top = 65
      Width = 81
      Height = 25
      Caption = 'Yazdýr'
      TabOrder = 1
      OnClick = BitBtn1Click
      Kind = bkOK
    end
    object ProgressBar1: TProgressBar
      Left = 8
      Top = 28
      Width = 343
      Height = 16
      Min = 0
      Max = 100
      Smooth = True
      Step = 100
      TabOrder = 2
    end
  end
  object GroupBox1: TGroupBox
    Left = 1
    Top = -3
    Width = 393
    Height = 217
    TabOrder = 0
    object Label1: TLabel
      Left = 228
      Top = 167
      Width = 66
      Height = 13
      Caption = 'Döneme Göre'
    end
    object Label2: TLabel
      Left = 71
      Top = 167
      Width = 100
      Height = 13
      Caption = 'Tarihe kadar hesapla'
    end
    object Label4: TLabel
      Left = 14
      Top = 68
      Width = 50
      Height = 13
      Caption = 'Stok Kodu'
    end
    object Label5: TLabel
      Left = 14
      Top = 92
      Width = 40
      Height = 13
      Caption = 'Stok Adý'
    end
    object SpeedButton1: TSpeedButton
      Left = 191
      Top = 68
      Width = 23
      Height = 22
      Enabled = False
      Flat = True
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
      OnClick = SpeedButton1Click
    end
    object SpeedButton2: TSpeedButton
      Left = 350
      Top = 68
      Width = 23
      Height = 22
      Enabled = False
      Flat = True
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
      OnClick = SpeedButton2Click
    end
    object Bevel1: TBevel
      Left = 1
      Top = 120
      Width = 392
      Height = 2
    end
    object Label3: TLabel
      Left = 14
      Top = 131
      Width = 22
      Height = 13
      Caption = 'Cinsi'
    end
    object Bevel3: TBevel
      Left = 1
      Top = 159
      Width = 392
      Height = 2
    end
    object comboDonem: TComboBox
      Left = 228
      Top = 181
      Width = 145
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 0
      OnChange = comboDonemChange
    end
    object DateTimePicker1: TDateTimePicker
      Left = 71
      Top = 181
      Width = 130
      Height = 21
      CalAlignment = dtaLeft
      Date = 37589.584138125
      Time = 37589.584138125
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 1
    end
    object StaticText1: TStaticText
      Left = 72
      Top = 49
      Width = 142
      Height = 16
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSingle
      Caption = 'BAÞLANGIÇ'
      Color = cl3DLight
      ParentColor = False
      TabOrder = 2
    end
    object StaticText2: TStaticText
      Left = 232
      Top = 49
      Width = 142
      Height = 16
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSingle
      Caption = 'BÝTÝÞ'
      Color = cl3DLight
      ParentColor = False
      TabOrder = 3
    end
    object editBaslangicSK: TEdit
      Left = 72
      Top = 68
      Width = 75
      Height = 21
      Color = cl3DLight
      Enabled = False
      TabOrder = 4
    end
    object editBitisSK: TEdit
      Left = 232
      Top = 68
      Width = 75
      Height = 21
      Color = cl3DLight
      Enabled = False
      TabOrder = 5
    end
    object Edit3: TEdit
      Left = 72
      Top = 92
      Width = 142
      Height = 21
      Color = cl3DLight
      Enabled = False
      ReadOnly = True
      TabOrder = 6
    end
    object Edit4: TEdit
      Left = 232
      Top = 92
      Width = 142
      Height = 21
      Color = cl3DLight
      Enabled = False
      ReadOnly = True
      TabOrder = 7
    end
    object radiogrupSECIM: TRadioGroup
      Left = 0
      Top = 0
      Width = 393
      Height = 43
      Columns = 3
      ItemIndex = 2
      Items.Strings = (
        'Cinsine Göre'
        'Ýki Deðer Arasýnda'
        'Tümü')
      TabOrder = 8
      OnClick = radiogrupSECIMClick
    end
    object comboCinsi: TComboBox
      Left = 72
      Top = 130
      Width = 304
      Height = 21
      Style = csDropDownList
      Color = cl3DLight
      Enabled = False
      ItemHeight = 13
      TabOrder = 9
    end
  end
  object GroupBox2: TGroupBox
    Left = 392
    Top = -3
    Width = 142
    Height = 307
    TabOrder = 1
    object TLabel
      Left = 9
      Top = 50
      Width = 71
      Height = 13
      Caption = 'Sayým Görevlisi'
    end
    object Label7: TLabel
      Left = 9
      Top = 136
      Width = 66
      Height = 13
      Caption = 'Anakiler Ks.A.'
    end
    object Label8: TLabel
      Left = 9
      Top = 221
      Width = 38
      Height = 13
      Caption = 'Depocu'
    end
    object Label9: TLabel
      Left = 10
      Top = 9
      Width = 57
      Height = 13
      Caption = 'Sayým Tarihi'
      WordWrap = True
    end
    object Label10: TLabel
      Left = 93
      Top = 9
      Width = 26
      Height = 13
      Caption = 'Tarihi'
    end
    object comboSayimGorevlisiAdi: TComboBox
      Left = 9
      Top = 64
      Width = 124
      Height = 21
      ItemHeight = 13
      TabOrder = 0
      OnChange = comboSayimGorevlisiAdiChange
    end
    object editSayimGorevlisiRutbesi: TEdit
      Left = 9
      Top = 87
      Width = 124
      Height = 21
      TabOrder = 1
    end
    object editSayimGorevlisiGorevi: TEdit
      Left = 9
      Top = 110
      Width = 124
      Height = 21
      TabOrder = 2
    end
    object comboAnakilerKsAAdi: TComboBox
      Left = 9
      Top = 150
      Width = 124
      Height = 21
      ItemHeight = 13
      TabOrder = 3
      OnChange = comboAnakilerKsAAdiChange
    end
    object editAnakilerKsARutbesi: TEdit
      Left = 9
      Top = 172
      Width = 124
      Height = 21
      TabOrder = 4
    end
    object editAnakilerKsAGorevi: TEdit
      Left = 9
      Top = 194
      Width = 124
      Height = 21
      TabOrder = 5
    end
    object comboDepocuAdi: TComboBox
      Left = 9
      Top = 235
      Width = 124
      Height = 21
      ItemHeight = 13
      TabOrder = 6
      OnChange = comboDepocuAdiChange
    end
    object editDepocuRutbesi: TEdit
      Left = 9
      Top = 257
      Width = 124
      Height = 21
      TabOrder = 7
    end
    object editDepocuGorevi: TEdit
      Left = 9
      Top = 279
      Width = 124
      Height = 21
      TabOrder = 8
    end
    object DateTimePicker2: TDateTimePicker
      Left = 9
      Top = 24
      Width = 82
      Height = 21
      CalAlignment = dtaLeft
      Date = 37589.584138125
      Time = 37589.584138125
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 9
    end
    object MaskEdit1: TMaskEdit
      Left = 93
      Top = 24
      Width = 43
      Height = 21
      CharCase = ecUpperCase
      EditMask = '##:##;1;_'
      MaxLength = 5
      TabOrder = 10
      Text = '  :  '
    end
  end
  object QuickRep1: TQuickRep
    Left = 86
    Top = 412
    Width = 794
    Height = 1123
    Frame.Color = clBlack
    Frame.DrawTop = False
    Frame.DrawBottom = False
    Frame.DrawLeft = False
    Frame.DrawRight = False
    BeforePrint = QuickRep1BeforePrint
    DataSet = querySAYIMDETAYI
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    Functions.Strings = (
      'PAGENUMBER'
      'COLUMNNUMBER'
      'REPORTTITLE')
    Functions.DATA = (
      '0'
      '0'
      #39#39)
    Options = [FirstPageHeader, LastPageFooter]
    Page.Columns = 1
    Page.Orientation = poPortrait
    Page.PaperSize = A4
    Page.Values = (
      150
      2970
      100
      2100
      50
      50
      0)
    PrinterSettings.Copies = 1
    PrinterSettings.Duplex = False
    PrinterSettings.FirstPage = 0
    PrinterSettings.LastPage = 0
    PrinterSettings.OutputBin = Auto
    PrintIfEmpty = True
    SnapToGrid = True
    Units = MM
    Zoom = 100
    object DetailBand1: TQRBand
      Left = 19
      Top = 114
      Width = 756
      Height = 17
      Frame.Color = clBlack
      Frame.DrawTop = True
      Frame.DrawBottom = False
      Frame.DrawLeft = True
      Frame.DrawRight = True
      AlignToBottom = False
      BeforePrint = DetailBand1BeforePrint
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        44.9791666666667
        2000.25)
      BandType = rbDetail
      object QRShape8: TQRShape
        Left = 311
        Top = -1
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          822.854166666667
          -2.64583333333333
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape9: TQRShape
        Left = 349
        Top = -1
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          923.395833333333
          -2.64583333333333
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape11: TQRShape
        Left = 594
        Top = -1
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1571.625
          -2.64583333333333
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape12: TQRShape
        Left = 513
        Top = -1
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1357.3125
          -2.64583333333333
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape18: TQRShape
        Left = 431
        Top = -1
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1140.35416666667
          -2.64583333333333
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape20: TQRShape
        Left = 674
        Top = -1
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1783.29166666667
          -2.64583333333333
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape27: TQRShape
        Left = 262
        Top = -1
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          693.208333333333
          -2.64583333333333
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape28: TQRShape
        Left = 61
        Top = -1
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          161.395833333333
          -2.64583333333333
          2.64583333333333)
        Shape = qrsVertLine
      end
      object qrdbtextStokKodu: TQRDBText
        Left = 34
        Top = 2
        Width = 25
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          89.9583333333333
          5.29166666666667
          66.1458333333333)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySAYIMDETAYI
        DataField = 'KOD'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object qrdbtextStokAdi: TQRDBText
        Left = 64
        Top = 2
        Width = 195
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          169.333333333333
          5.29166666666667
          515.9375)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySAYIMDETAYI
        DataField = 'AD'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object QRDBText7: TQRDBText
        Left = 353
        Top = 2
        Width = 75
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          933.979166666667
          5.29166666666667
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySAYIMDETAYI
        DataField = 'ALIS_FIYATI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object QRDBText8: TQRDBText
        Left = 434
        Top = 2
        Width = 75
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1148.29166666667
          5.29166666666667
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySAYIMDETAYI
        DataField = 'ALIS_TUTARI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object QRDBText9: TQRDBText
        Left = 517
        Top = 2
        Width = 75
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1367.89583333333
          5.29166666666667
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySAYIMDETAYI
        DataField = 'SATIS_FIYATI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object QRDBText10: TQRDBText
        Left = 597
        Top = 2
        Width = 75
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1579.5625
          5.29166666666667
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySAYIMDETAYI
        DataField = 'SATIS_TUTARI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object QRDBText11: TQRDBText
        Left = 677
        Top = 2
        Width = 75
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1791.22916666667
          5.29166666666667
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySAYIMDETAYI
        DataField = 'KAR'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object QRShape32: TQRShape
        Left = 31
        Top = 0
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          82.0208333333333
          0
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRSysData1: TQRSysData
        Left = 3
        Top = 0
        Width = 26
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          7.9375
          0
          68.7916666666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        Color = clWhite
        Data = qrsDetailNo
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        FontSize = 7
      end
      object qrlabelMIKTAR: TQRLabel
        Left = 264
        Top = 2
        Width = 43
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          698.5
          5.29166666666667
          113.770833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelMIKTAR'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object QRDBText1: TQRDBText
        Left = 315
        Top = 2
        Width = 30
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          833.4375
          5.29166666666667
          79.375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySAYIMDETAYI
        DataField = 'BIRIM'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
    end
    object PageHeaderBand1: TQRBand
      Left = 19
      Top = 38
      Width = 756
      Height = 76
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        201.083333333333
        2000.25)
      BandType = rbPageHeader
      object QRLabel1: TQRLabel
        Left = 263
        Top = 1
        Width = 239
        Height = 25
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          695.854166666667
          2.64583333333333
          632.354166666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'DETAYLI SAYIM RAPORU'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -19
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 14
      end
      object QRLabel5: TQRLabel
        Left = 264
        Top = 58
        Width = 45
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          698.5
          153.458333333333
          119.0625)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Miktar'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel6: TQRLabel
        Left = 316
        Top = 58
        Width = 30
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          836.083333333333
          153.458333333333
          79.375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Birimi'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRShape6: TQRShape
        Left = 594
        Top = 56
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1571.625
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRLabel13: TQRLabel
        Left = 354
        Top = 58
        Width = 75
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          936.625
          153.458333333333
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Alýþ Fiyatý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel14: TQRLabel
        Left = 435
        Top = 58
        Width = 75
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1150.9375
          153.458333333333
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Alýþ Tutarý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel15: TQRLabel
        Left = 597
        Top = 58
        Width = 75
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1579.5625
          153.458333333333
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Satýþ Tutarý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel16: TQRLabel
        Left = 517
        Top = 58
        Width = 75
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1367.89583333333
          153.458333333333
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Satýþ Fiyatý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRShape3: TQRShape
        Left = 513
        Top = 56
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1357.3125
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape4: TQRShape
        Left = 431
        Top = 56
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1140.35416666667
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape5: TQRShape
        Left = 349
        Top = 56
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          923.395833333333
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape16: TQRShape
        Left = 311
        Top = 56
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          822.854166666667
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape17: TQRShape
        Left = 0
        Top = 56
        Width = 755
        Height = 1
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          2.64583333333333
          0
          148.166666666667
          1997.60416666667)
        Shape = qrsHorLine
      end
      object QRShape7: TQRShape
        Left = 674
        Top = 56
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1783.29166666667
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRLabel9: TQRLabel
        Left = 677
        Top = 58
        Width = 75
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1791.22916666667
          153.458333333333
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Kar'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel11: TQRLabel
        Left = 34
        Top = 58
        Width = 25
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          89.9583333333333
          153.458333333333
          66.1458333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Kod'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel12: TQRLabel
        Left = 64
        Top = 58
        Width = 195
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          169.333333333333
          153.458333333333
          515.9375)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Stok Adý'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRShape25: TQRShape
        Left = 262
        Top = 56
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          693.208333333333
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape26: TQRShape
        Left = 61
        Top = 56
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          161.395833333333
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape29: TQRShape
        Left = 0
        Top = 56
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          0
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape30: TQRShape
        Left = 755
        Top = 56
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          1997.60416666667
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape31: TQRShape
        Left = 31
        Top = 56
        Width = 1
        Height = 20
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          52.9166666666667
          82.0208333333333
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRLabel2: TQRLabel
        Left = 3
        Top = 58
        Width = 26
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          7.9375
          153.458333333333
          68.7916666666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'S.No'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel3: TQRLabel
        Left = 667
        Top = 2
        Width = 46
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1764.77083333333
          5.29166666666667
          121.708333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Sayfa No'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRSysData2: TQRSysData
        Left = 715
        Top = 2
        Width = 39
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1891.77083333333
          5.29166666666667
          103.1875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = True
        Color = clWhite
        Data = qrsPageNumber
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        FontSize = 8
      end
      object qrlabelDONEM: TQRLabel
        Left = 264
        Top = 21
        Width = 238
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          698.5
          55.5625
          629.708333333333)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = '( DONEM )'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
    object PageFooterBand1: TQRBand
      Left = 19
      Top = 268
      Width = 756
      Height = 25
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      BeforePrint = PageFooterBand1BeforePrint
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        66.1458333333333
        2000.25)
      BandType = rbPageFooter
      object QRShape21: TQRShape
        Left = -1
        Top = -7
        Width = 758
        Height = 26
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          68.7916666666667
          -2.64583333333333
          -18.5208333333333
          2005.54166666667)
        Shape = qrsRectangle
      end
      object qrlabelAlisToplami2: TQRLabel
        Left = 408
        Top = -1
        Width = 103
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1079.5
          -2.64583333333333
          272.520833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelAlisToplami'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object qrlabelSatisToplami2: TQRLabel
        Left = 570
        Top = -1
        Width = 103
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1508.125
          -2.64583333333333
          272.520833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelSatisToplami'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object qrlabelKarToplami2: TQRLabel
        Left = 677
        Top = -1
        Width = 75
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1791.22916666667
          -2.64583333333333
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelKar'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object QRLabel17: TQRLabel
        Left = 7
        Top = -1
        Width = 37
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          18.5208333333333
          -2.64583333333333
          97.8958333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'TOPLAM'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
    end
    object SummaryBand1: TQRBand
      Left = 19
      Top = 131
      Width = 756
      Height = 137
      Frame.Color = clBlack
      Frame.DrawTop = True
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      BeforePrint = SummaryBand1BeforePrint
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        362.479166666667
        2000.25)
      BandType = rbSummary
      object qrlabelAlisToplami: TQRLabel
        Left = 408
        Top = 5
        Width = 103
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1079.5
          13.2291666666667
          272.520833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelAlisToplami'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object qrlabelSatisToplami: TQRLabel
        Left = 570
        Top = 5
        Width = 103
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1508.125
          13.2291666666667
          272.520833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelSatisToplami'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object qrlabelKarToplami: TQRLabel
        Left = 677
        Top = 5
        Width = 75
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1791.22916666667
          13.2291666666667
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelKar'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object QRShape1: TQRShape
        Left = 0
        Top = 25
        Width = 757
        Height = 1
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          2.64583333333333
          0
          66.1458333333333
          2002.89583333333)
        Shape = qrsHorLine
      end
      object QRLabel10: TQRLabel
        Left = 7
        Top = 5
        Width = 37
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          18.5208333333333
          13.2291666666667
          97.8958333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'TOPLAM'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 7
      end
      object qrlabelSayimGorevlisiAdi: TQRLabel
        Left = 15
        Top = 77
        Width = 148
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          39.6875
          203.729166666667
          391.583333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelSayimGorevlisiAdi'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelSayimGorevlisiRutbesi: TQRLabel
        Left = 15
        Top = 93
        Width = 148
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          39.6875
          246.0625
          391.583333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelSayimGorevlisiRutbesi'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelSayimGorevlisiGorevi: TQRLabel
        Left = 15
        Top = 109
        Width = 148
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          39.6875
          288.395833333333
          391.583333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelSayimGorevlisiGorevi'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelAnakilerKsAAdi: TQRLabel
        Left = 261
        Top = 77
        Width = 148
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          690.5625
          203.729166666667
          391.583333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelAnakilerKsAAdi'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelAnakilerKsARutbesi: TQRLabel
        Left = 261
        Top = 93
        Width = 148
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          690.5625
          246.0625
          391.583333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelAnakilerKsARutbesi'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelAnakilerKsAGorevi: TQRLabel
        Left = 261
        Top = 109
        Width = 148
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          690.5625
          288.395833333333
          391.583333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelAnakilerKsAGorevi'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelDepocuAdi: TQRLabel
        Left = 506
        Top = 77
        Width = 148
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1338.79166666667
          203.729166666667
          391.583333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelDepocuAdi'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelDepocuRutbesi: TQRLabel
        Left = 506
        Top = 93
        Width = 148
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1338.79166666667
          246.0625
          391.583333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelDepocuRutbesi'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object qrlabelDepocuGorevi: TQRLabel
        Left = 506
        Top = 109
        Width = 148
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1338.79166666667
          288.395833333333
          391.583333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelDepocuGorevi'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRShape2: TQRShape
        Left = 0
        Top = 0
        Width = 1
        Height = 26
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          68.7916666666667
          0
          0
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape13: TQRShape
        Left = 755
        Top = 0
        Width = 1
        Height = 26
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          68.7916666666667
          1997.60416666667
          0
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRMemo1: TQRMemo
        Left = 4
        Top = 27
        Width = 747
        Height = 28
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          74.0833333333333
          10.5833333333333
          71.4375
          1976.4375)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        Lines.Strings = (
          
            'Yukarýda dökümü yapýlan mallar sayým heyetince tam ve saðlam say' +
            'ýlmýþ, satýþ sorumlusu erlere teslim edilmiþ olup; iþ bu tutanak' +
            ' imza altýna alýnmýþtýr. 22.11.2002 / 14:01')
        ParentFont = False
        Transparent = True
        WordWrap = True
        FontSize = 7
      end
    end
  end
  object querySTOKANA: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select distinct * from stokana'
      'order by StokKodu')
    Left = 584
    Top = 150
    object querySTOKANAStokKodu: TFloatField
      FieldName = 'StokKodu'
    end
    object querySTOKANAStokAdi: TStringField
      FieldName = 'StokAdi'
      Size = 200
    end
    object querySTOKANACinsi: TStringField
      FieldName = 'Cinsi'
      Size = 30
    end
    object querySTOKANADevirMiktari: TFloatField
      FieldName = 'DevirMiktari'
    end
    object querySTOKANABirimi: TStringField
      FieldName = 'Birimi'
      Size = 15
    end
    object querySTOKANABirim2: TStringField
      FieldName = 'Birim2'
      Size = 15
    end
    object querySTOKANABirim2Katsayisi: TFloatField
      FieldName = 'Birim2Katsayisi'
    end
    object querySTOKANAKDVOrani: TFloatField
      FieldName = 'KDVOrani'
    end
    object querySTOKANAIskontoOrani: TFloatField
      FieldName = 'IskontoOrani'
    end
    object querySTOKANABirimeGore: TStringField
      FieldName = 'BirimeGore'
      Size = 15
    end
    object querySTOKANASonDurum: TFloatField
      FieldName = 'SonDurum'
    end
  end
  object queryALISFIYATLIST: TQuery
    DatabaseName = 'ORTEG2002'
    DataSource = dsrSTOKANA
    SQL.Strings = (
      'select distinct ALIS_FIYATI from stokhar'
      'where stok_kodu=:StokKodu')
    Left = 584
    Top = 180
    ParamData = <
      item
        DataType = ftFloat
        Name = 'StokKodu'
        ParamType = ptUnknown
      end>
    object queryALISFIYATLISTALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_FIYATI'
    end
  end
  object dsrSTOKANA: TDataSource
    DataSet = querySTOKANA
    Left = 551
    Top = 180
  end
  object querySTOKHAR: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from stokhar')
    Left = 614
    Top = 180
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
    object querySTOKHARSTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      Origin = 'ORTEG2002."stokhar.DB".STOK_ADI'
      Size = 50
    end
    object querySTOKHARBIRIMI: TStringField
      FieldName = 'BIRIMI'
      Origin = 'ORTEG2002."stokhar.DB".BIRIMI'
      Size = 15
    end
    object querySTOKHARMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      Origin = 'ORTEG2002."stokhar.DB".MIKTAR'
      DisplayFormat = '###,###,###,###.###'
      EditFormat = '###,###,###,###.###'
    end
    object querySTOKHARBIRIM2: TStringField
      FieldName = 'BIRIM2'
      Origin = 'ORTEG2002."stokhar.DB".BIRIM2'
      Size = 15
    end
    object querySTOKHARMIKTAR2: TFloatField
      FieldName = 'MIKTAR2'
      Origin = 'ORTEG2002."stokhar.DB".MIKTAR2'
      DisplayFormat = '###,###,###,###.###'
    end
    object querySTOKHARALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_FIYATI'
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
    object querySTOKHARSTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
      Origin = 'ORTEG2002."stokhar.DB".STOK_KODU'
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
    object querySTOKHARBIRIM_KATSAYISI: TFloatField
      FieldName = 'BIRIM_KATSAYISI'
      Origin = 'ORTEG2002."stokhar.DB".BIRIM_KATSAYISI'
    end
    object querySTOKHARHAREKET_NO: TIntegerField
      FieldName = 'HAREKET_NO'
      Origin = 'ORTEG2002."stokhar.DB".HAREKET_NO'
    end
  end
  object querySAYIMDETAYI: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'SELECT * FROM DETAYSAYIM'
      'WHERE MIKTAR != 0'
      'ORDER BY CINSI, AD')
    Left = 585
    Top = 210
    object querySAYIMDETAYIKOD: TFloatField
      FieldName = 'KOD'
      Origin = 'ORTEG2002."detaysayim.DB".KOD'
    end
    object querySAYIMDETAYIAD: TStringField
      FieldName = 'AD'
      Origin = 'ORTEG2002."detaysayim.DB".AD'
      Size = 50
    end
    object querySAYIMDETAYICINSI: TStringField
      FieldName = 'CINSI'
      Origin = 'ORTEG2002."detaysayim.DB".CINSI'
      Size = 40
    end
    object querySAYIMDETAYIMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      Origin = 'ORTEG2002."detaysayim.DB".MIKTAR'
      DisplayFormat = '###,###,###,###.###'
    end
    object querySAYIMDETAYIBIRIM: TStringField
      FieldName = 'BIRIM'
      Origin = 'ORTEG2002."detaysayim.DB".BIRIM'
      Size = 10
    end
    object querySAYIMDETAYIMIKTAR2: TFloatField
      FieldName = 'MIKTAR2'
      Origin = 'ORTEG2002."detaysayim.DB".MIKTAR2'
      DisplayFormat = '###,###,###,###.###'
    end
    object querySAYIMDETAYIBIRIM2: TStringField
      FieldName = 'BIRIM2'
      Origin = 'ORTEG2002."detaysayim.DB".BIRIM2'
      Size = 10
    end
    object querySAYIMDETAYIALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
      Origin = 'ORTEG2002."detaysayim.DB".ALIS_FIYATI'
      DisplayFormat = '###,###,###,###'
    end
    object querySAYIMDETAYIALIS_TUTARI: TFloatField
      FieldName = 'ALIS_TUTARI'
      Origin = 'ORTEG2002."detaysayim.DB".ALIS_TUTARI'
      DisplayFormat = '###,###,###,###'
    end
    object querySAYIMDETAYISATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
      Origin = 'ORTEG2002."detaysayim.DB".SATIS_FIYATI'
      DisplayFormat = '###,###,###,###'
    end
    object querySAYIMDETAYISATIS_TUTARI: TFloatField
      FieldName = 'SATIS_TUTARI'
      Origin = 'ORTEG2002."detaysayim.DB".SATIS_TUTARI'
      DisplayFormat = '###,###,###,###'
    end
    object querySAYIMDETAYIKAR: TFloatField
      FieldName = 'KAR'
      Origin = 'ORTEG2002."detaysayim.DB".KAR'
      DisplayFormat = '###,###,###,###'
    end
  end
end
