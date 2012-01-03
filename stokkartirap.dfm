object rprStokKarti: TrprStokKarti
  Left = 222
  Top = 112
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Kiler Kayit Karti Raporu'
  ClientHeight = 156
  ClientWidth = 395
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
  object GroupBox1: TGroupBox
    Left = 1
    Top = -2
    Width = 394
    Height = 126
    TabOrder = 0
    object Label1: TLabel
      Left = 36
      Top = 39
      Width = 24
      Height = 13
      Caption = 'Tarih'
    end
    object Label2: TLabel
      Left = 10
      Top = 64
      Width = 50
      Height = 13
      Caption = 'Stok Kodu'
    end
    object Label3: TLabel
      Left = 20
      Top = 88
      Width = 40
      Height = 13
      Caption = 'Stok Adý'
    end
    object SpeedButton1: TSpeedButton
      Left = 192
      Top = 64
      Width = 23
      Height = 22
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
      Top = 64
      Width = 23
      Height = 22
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
    object StaticText1: TStaticText
      Left = 73
      Top = 21
      Width = 142
      Height = 16
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSingle
      Caption = 'BAÞLANGIÇ'
      Color = clInfoBk
      ParentColor = False
      TabOrder = 0
    end
    object StaticText2: TStaticText
      Left = 233
      Top = 21
      Width = 142
      Height = 16
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSingle
      Caption = 'BÝTÝÞ'
      Color = clInfoBk
      ParentColor = False
      TabOrder = 1
    end
    object DateTimePicker1: TDateTimePicker
      Left = 73
      Top = 39
      Width = 142
      Height = 21
      CalAlignment = dtaLeft
      Date = 37586.6898419444
      Time = 37586.6898419444
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 2
    end
    object DateTimePicker2: TDateTimePicker
      Left = 233
      Top = 39
      Width = 142
      Height = 21
      CalAlignment = dtaLeft
      Date = 37586.689911956
      Time = 37586.689911956
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 3
    end
    object editBaslangicSK: TEdit
      Left = 73
      Top = 64
      Width = 75
      Height = 21
      TabOrder = 4
    end
    object editBitisSK: TEdit
      Left = 233
      Top = 64
      Width = 75
      Height = 21
      TabOrder = 5
    end
    object Edit3: TEdit
      Left = 73
      Top = 88
      Width = 142
      Height = 21
      ReadOnly = True
      TabOrder = 6
    end
    object Edit4: TEdit
      Left = 233
      Top = 88
      Width = 142
      Height = 21
      ReadOnly = True
      TabOrder = 7
    end
  end
  object BitBtn1: TBitBtn
    Left = 237
    Top = 129
    Width = 75
    Height = 25
    Caption = 'Yazdýr'
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 318
    Top = 129
    Width = 75
    Height = 25
    Caption = 'Ýptal'
    TabOrder = 3
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
  object QuickRep1: TQuickRep
    Left = -27
    Top = 173
    Width = 794
    Height = 1123
    Frame.Color = clBlack
    Frame.DrawTop = False
    Frame.DrawBottom = False
    Frame.DrawLeft = False
    Frame.DrawRight = False
    DataSet = querySTOKANA
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
      100
      2970
      100
      2100
      100
      100
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
    object PageHeaderBand1: TQRBand
      Left = 38
      Top = 38
      Width = 718
      Height = 51
      Frame.Color = clBlack
      Frame.DrawTop = True
      Frame.DrawBottom = False
      Frame.DrawLeft = True
      Frame.DrawRight = True
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        134.9375
        1899.70833333333)
      BandType = rbPageHeader
      object QRLabel1: TQRLabel
        Left = 287
        Top = 4
        Width = 181
        Height = 42
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          110.243055555556
          760.677083333333
          11.0243055555556
          478.454861111111)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = '             K Ý L E R             K A Y I T   K A R T I'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 12
      end
      object QRLabel2: TQRLabel
        Left = 630
        Top = 10
        Width = 46
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          47.625
          1666.875
          26.4583333333333
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
      object QRSysData1: TQRSysData
        Left = 679
        Top = 9
        Width = 34
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          1796.96180555556
          24.2534722222222
          90.3993055555556)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
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
    end
    object DetailBand1: TQRBand
      Left = 38
      Top = 89
      Width = 718
      Height = 67
      Frame.Color = clBlack
      Frame.DrawTop = True
      Frame.DrawBottom = True
      Frame.DrawLeft = True
      Frame.DrawRight = True
      AlignToBottom = False
      BeforePrint = DetailBand1BeforePrint
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      LinkBand = PageHeaderBand1
      Size.Values = (
        177.270833333333
        1899.70833333333)
      BandType = rbDetail
      object QRLabel3: TQRLabel
        Left = 2
        Top = 50
        Width = 28
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          5.29166666666667
          132.291666666667
          74.0833333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'S.NO'
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
      object QRLabel4: TQRLabel
        Left = 34
        Top = 50
        Width = 58
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          89.9583333333333
          132.291666666667
          153.458333333333)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'TARÝH'
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
      object QRLabel5: TQRLabel
        Left = 621
        Top = 50
        Width = 92
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1643.0625
          132.291666666667
          243.416666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'ÜNÝTE'
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
      object QRLabel7: TQRLabel
        Left = 139
        Top = 50
        Width = 45
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          367.770833333333
          132.291666666667
          119.0625)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'GÝREN'
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
      object QRLabel8: TQRLabel
        Left = 283
        Top = 50
        Width = 75
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          748.770833333333
          132.291666666667
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'ALIÞ FÝYATI'
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
      object QRLabel9: TQRLabel
        Left = 452
        Top = 50
        Width = 75
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1195.91666666667
          132.291666666667
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'SATIÞ FÝYATI'
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
      object QRLabel10: TQRLabel
        Left = 188
        Top = 50
        Width = 43
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          497.416666666667
          132.291666666667
          113.770833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'ÇIKAN'
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
      object QRLabel11: TQRLabel
        Left = 236
        Top = 50
        Width = 43
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          624.416666666667
          132.291666666667
          113.770833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'KALAN'
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
      object QRLabel12: TQRLabel
        Left = 98
        Top = 50
        Width = 38
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          259.291666666667
          132.291666666667
          100.541666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'BELGE'
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
      object QRLabel13: TQRLabel
        Left = 363
        Top = 50
        Width = 84
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          960.4375
          132.291666666667
          222.25)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'ALIÞ TUTARI'
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
      object QRLabel14: TQRLabel
        Left = 532
        Top = 50
        Width = 84
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1407.58333333333
          132.291666666667
          222.25)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'SATIÞ TUTARI'
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
      object QRShape2: TQRShape
        Left = 30
        Top = 50
        Width = 3
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          79.375
          132.291666666667
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape3: TQRShape
        Left = 92
        Top = 50
        Width = 3
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          243.416666666667
          132.291666666667
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape4: TQRShape
        Left = 135
        Top = 50
        Width = 3
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          357.1875
          132.291666666667
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape5: TQRShape
        Left = 184
        Top = 50
        Width = 3
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          486.833333333333
          132.291666666667
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape6: TQRShape
        Left = 231
        Top = 50
        Width = 3
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          611.1875
          132.291666666667
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape7: TQRShape
        Left = 278
        Top = 50
        Width = 3
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          735.541666666667
          132.291666666667
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape8: TQRShape
        Left = 358
        Top = 50
        Width = 3
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          947.208333333333
          132.291666666667
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape9: TQRShape
        Left = 448
        Top = 50
        Width = 3
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1185.33333333333
          132.291666666667
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape10: TQRShape
        Left = 527
        Top = 50
        Width = 3
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1394.35416666667
          132.291666666667
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape11: TQRShape
        Left = 617
        Top = 50
        Width = 3
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1632.47916666667
          132.291666666667
          7.9375)
        Shape = qrsVertLine
      end
      object QRLabel15: TQRLabel
        Left = 8
        Top = 5
        Width = 73
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          19.84375
          13.2291666666667
          194.027777777778)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'STOK KODU'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel16: TQRLabel
        Left = 8
        Top = 25
        Width = 73
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          19.84375
          66.1458333333333
          194.027777777778)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'STOK ADI '
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRDBText5: TQRDBText
        Left = 86
        Top = 25
        Width = 186
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          227.100694444444
          66.1458333333333
          491.684027777778)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKANA
        DataField = 'StokAdi'
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
      object QRDBText10: TQRDBText
        Left = 86
        Top = 5
        Width = 116
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          227.100694444444
          13.2291666666667
          306.475694444444)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKANA
        DataField = 'StokKodu'
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
        Left = 308
        Top = 5
        Width = 38
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.0972222222222
          813.59375
          13.2291666666667
          101.423611111111)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'BÝRÝMÝ'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRDBText4: TQRDBText
        Left = 350
        Top = 5
        Width = 26
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          926.041666666667
          13.2291666666667
          68.7916666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKANA
        DataField = 'Birimi'
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
      object QRShape1: TQRShape
        Left = 1
        Top = 50
        Width = 716
        Height = 1
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          2.64583333333333
          2.64583333333333
          132.291666666667
          1894.41666666667)
        Shape = qrsHorLine
      end
    end
    object QRSubDetail1: TQRSubDetail
      Left = 38
      Top = 156
      Width = 718
      Height = 15
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = True
      Frame.DrawLeft = True
      Frame.DrawRight = True
      AlignToBottom = False
      BeforePrint = QRSubDetail1BeforePrint
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        39.6875
        1899.70833333333)
      Master = QuickRep1
      DataSet = querySTOKHAR
      PrintBefore = False
      PrintIfEmpty = True
      object QRDBText2: TQRDBText
        Left = 34
        Top = 1
        Width = 58
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          34.3958333333333
          89.9583333333333
          2.64583333333333
          153.458333333333)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'TARIH'
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
      object QRDBText3: TQRDBText
        Left = 621
        Top = 1
        Width = 92
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          34.3958333333333
          1643.0625
          2.64583333333333
          243.416666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'FIRMA_ADI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = False
        FontSize = 7
      end
      object QRDBText8: TQRDBText
        Left = 283
        Top = 1
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          34.3958333333333
          748.770833333333
          2.64583333333333
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
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
      object QRDBText9: TQRDBText
        Left = 452
        Top = 1
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          34.3958333333333
          1195.91666666667
          2.64583333333333
          198.4375)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
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
      object QRExpr1: TQRExpr
        Left = 139
        Top = 1
        Width = 45
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          34.3958333333333
          367.770833333333
          2.64583333333333
          119.0625)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        Color = clWhite
        ParentFont = False
        ResetAfterPrint = False
        Transparent = False
        WordWrap = True
        Expression = 'IF(querySTOKHAR.BELGE_TURU='#39'GIRDI'#39',querySTOKHAR.MIKTAR,'#39' '#39')'
        FontSize = 7
      end
      object QRExpr2: TQRExpr
        Left = 188
        Top = 1
        Width = 43
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          34.3958333333333
          497.416666666667
          2.64583333333333
          113.770833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -9
        Font.Name = 'Arial'
        Font.Style = []
        Color = clWhite
        ParentFont = False
        ResetAfterPrint = False
        Transparent = False
        WordWrap = True
        Expression = 'IF(querySTOKHAR.BELGE_TURU = '#39'GIRDI'#39', '#39'  '#39', querySTOKHAR.MIKTAR)'
        FontSize = 7
      end
      object QRDBText1: TQRDBText
        Left = 98
        Top = 1
        Width = 38
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          34.3958333333333
          259.291666666667
          2.64583333333333
          100.541666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'BELGE'
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
      object QRDBText6: TQRDBText
        Left = 363
        Top = 1
        Width = 84
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          34.3958333333333
          960.4375
          2.64583333333333
          222.25)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
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
      object QRDBText7: TQRDBText
        Left = 532
        Top = 1
        Width = 84
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          34.3958333333333
          1407.58333333333
          2.64583333333333
          222.25)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
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
      object QRShape12: TQRShape
        Left = 30
        Top = 0
        Width = 3
        Height = 14
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          37.0416666666667
          79.375
          0
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape13: TQRShape
        Left = 92
        Top = 0
        Width = 3
        Height = 14
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          37.0416666666667
          243.416666666667
          0
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape14: TQRShape
        Left = 135
        Top = 0
        Width = 3
        Height = 14
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          37.0416666666667
          357.1875
          0
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape15: TQRShape
        Left = 184
        Top = 0
        Width = 3
        Height = 14
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          37.0416666666667
          486.833333333333
          0
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape16: TQRShape
        Left = 231
        Top = 0
        Width = 3
        Height = 14
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          37.0416666666667
          611.1875
          0
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape17: TQRShape
        Left = 278
        Top = 0
        Width = 3
        Height = 14
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          37.0416666666667
          735.541666666667
          0
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape18: TQRShape
        Left = 358
        Top = 0
        Width = 3
        Height = 14
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          37.0416666666667
          947.208333333333
          0
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape19: TQRShape
        Left = 448
        Top = 0
        Width = 3
        Height = 14
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          37.0416666666667
          1185.33333333333
          0
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape20: TQRShape
        Left = 527
        Top = 0
        Width = 3
        Height = 14
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          37.0416666666667
          1394.35416666667
          0
          7.9375)
        Shape = qrsVertLine
      end
      object QRShape21: TQRShape
        Left = 617
        Top = 0
        Width = 3
        Height = 14
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          37.0416666666667
          1632.47916666667
          0
          7.9375)
        Shape = qrsVertLine
      end
      object QRLabel17: TQRLabel
        Left = 237
        Top = 1
        Width = 40
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          34.3958333333333
          627.0625
          2.64583333333333
          105.833333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'KALAN TOPLAMI'
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
      object QRLabel18: TQRLabel
        Left = 3
        Top = 0
        Width = 25
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
          66.1458333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Sayac'
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
    end
  end
  object querySTOKHAR: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from stokhar'
      
        'where (tarih >= :baslangictarihi and tarih <= :bitistarihi) and ' +
        'stok_kodu=:StokKodu'
      'order by tarih, belge_turu desc')
    Left = 9
    Top = 127
    ParamData = <
      item
        DataType = ftDate
        Name = 'baslangictarihi'
        ParamType = ptUnknown
      end
      item
        DataType = ftDate
        Name = 'bitistarihi'
        ParamType = ptUnknown
      end
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
    object querySTOKHARALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_FIYATI'
      DisplayFormat = '###,###,###,###'
    end
    object querySTOKHARALIS_TUTARI: TFloatField
      FieldName = 'ALIS_TUTARI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_TUTARI'
      DisplayFormat = '###,###,###,###'
    end
    object querySTOKHARSATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_FIYATI'
      DisplayFormat = '###,###,###,###'
    end
    object querySTOKHARSATIS_TUTARI: TFloatField
      FieldName = 'SATIS_TUTARI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_TUTARI'
      DisplayFormat = '###,###,###,###'
    end
    object querySTOKHARKAR: TFloatField
      FieldName = 'KAR'
      Origin = 'ORTEG2002."stokhar.DB".KAR'
      DisplayFormat = '###,###,###,###'
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
  object querySTOKANA: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from stokana'
      'where (StokKodu >= :baslangicSK and StokKodu <= :bitisSK)'
      'order by StokKodu')
    Left = 39
    Top = 127
    ParamData = <
      item
        DataType = ftFloat
        Name = 'baslangicSK'
        ParamType = ptUnknown
      end
      item
        DataType = ftFloat
        Name = 'bitisSK'
        ParamType = ptUnknown
      end>
    object querySTOKANAStokKodu: TFloatField
      FieldName = 'StokKodu'
      Origin = 'ORTEG2002."stokana.DB".StokKodu'
    end
    object querySTOKANAStokAdi: TStringField
      FieldName = 'StokAdi'
      Origin = 'ORTEG2002."stokana.DB".StokAdi'
      Size = 200
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
    Left = 69
    Top = 127
  end
end
