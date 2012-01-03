object rprSayimRaporu: TrprSayimRaporu
  Left = 203
  Top = 123
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Sayým Raporu'
  ClientHeight = 248
  ClientWidth = 385
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
    Top = 152
    Width = 384
    Height = 96
    TabOrder = 2
    object labelYUZDE: TLabel
      Left = 153
      Top = 73
      Width = 31
      Height = 13
      Alignment = taRightJustify
      AutoSize = False
      Caption = '% 0'
    end
    object Label6: TLabel
      Left = 10
      Top = 55
      Width = 24
      Height = 13
      Caption = 'Ýþlem'
    end
    object Bevel2: TBevel
      Left = 192
      Top = 56
      Width = 5
      Height = 38
      Shape = bsLeftLine
    end
    object Label1: TLabel
      Left = 229
      Top = 11
      Width = 34
      Height = 13
      Caption = 'Dönem'
    end
    object Label2: TLabel
      Left = 73
      Top = 11
      Width = 89
      Height = 13
      Caption = 'Tarihe kadar sayým'
    end
    object Bevel4: TBevel
      Left = 3
      Top = 52
      Width = 373
      Height = 3
      Shape = bsBottomLine
    end
    object BitBtn3: TBitBtn
      Left = 292
      Top = 63
      Width = 81
      Height = 25
      Caption = 'Ýptal'
      TabOrder = 0
      OnClick = BitBtn2Click
      Kind = bkCancel
    end
    object ProgressBar1: TProgressBar
      Left = 10
      Top = 71
      Width = 141
      Height = 16
      Min = 0
      Max = 100
      Smooth = True
      Step = 100
      TabOrder = 1
    end
    object BitBtn1: TBitBtn
      Left = 204
      Top = 63
      Width = 81
      Height = 25
      Caption = 'Yazdýr'
      TabOrder = 2
      OnClick = BitBtn1Click
      Kind = bkOK
    end
    object comboDonem: TComboBox
      Left = 229
      Top = 27
      Width = 145
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 3
      OnChange = comboDonemChange
    end
    object DateTimePicker1: TDateTimePicker
      Left = 73
      Top = 27
      Width = 145
      Height = 21
      CalAlignment = dtaLeft
      Date = 37589.584138125
      Time = 37589.584138125
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 4
    end
  end
  object GroupBox1: TGroupBox
    Left = 1
    Top = -3
    Width = 384
    Height = 163
    TabOrder = 0
    object Label4: TLabel
      Left = 14
      Top = 68
      Width = 50
      Height = 13
      Caption = 'Stok Kodu'
    end
    object Label5: TLabel
      Left = 24
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
      Width = 382
      Height = 2
    end
    object Label3: TLabel
      Left = 43
      Top = 131
      Width = 22
      Height = 13
      Caption = 'Cinsi'
    end
    object Bevel3: TBevel
      Left = 1
      Top = 159
      Width = 382
      Height = 2
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
      TabOrder = 0
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
      TabOrder = 1
    end
    object editBaslangicSK: TEdit
      Left = 72
      Top = 68
      Width = 75
      Height = 21
      Color = cl3DLight
      Enabled = False
      TabOrder = 2
    end
    object editBitisSK: TEdit
      Left = 232
      Top = 68
      Width = 75
      Height = 21
      Color = cl3DLight
      Enabled = False
      TabOrder = 3
    end
    object Edit3: TEdit
      Left = 72
      Top = 92
      Width = 142
      Height = 21
      Color = cl3DLight
      Enabled = False
      ReadOnly = True
      TabOrder = 4
    end
    object Edit4: TEdit
      Left = 232
      Top = 92
      Width = 142
      Height = 21
      Color = cl3DLight
      Enabled = False
      ReadOnly = True
      TabOrder = 5
    end
    object radiogrupSECIM: TRadioGroup
      Left = 0
      Top = 0
      Width = 384
      Height = 43
      Columns = 3
      ItemIndex = 2
      Items.Strings = (
        'Cinsine Göre'
        'Ýki Deðer Arasýnda'
        'Tümü')
      TabOrder = 6
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
      TabOrder = 7
    end
  end
  object QuickRep1: TQuickRep
    Left = 192
    Top = 364
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
      200
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
    object DetailBand1: TQRBand
      Left = 38
      Top = 115
      Width = 718
      Height = 18
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = True
      Frame.DrawRight = True
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        47.625
        1899.70833333333)
      BandType = rbDetail
      object QRShape8: TQRShape
        Left = 487
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
          1288.52083333333
          0
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape9: TQRShape
        Left = 555
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
          1468.4375
          0
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape10: TQRShape
        Left = 646
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
          1709.20833333333
          0
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape27: TQRShape
        Left = 400
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
          1058.33333333333
          0
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape28: TQRShape
        Left = 113
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
          298.979166666667
          0
          2.64583333333333)
        Shape = qrsVertLine
      end
      object qrdbtextStokKodu: TQRDBText
        Left = 52
        Top = 2
        Width = 57
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          137.583333333333
          5.29166666666667
          150.8125)
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
        Left = 119
        Top = 2
        Width = 278
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          314.854166666667
          5.29166666666667
          735.541666666667)
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
      object QRDBText1: TQRDBText
        Left = 405
        Top = 2
        Width = 80
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1071.5625
          5.29166666666667
          211.666666666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySAYIMDETAYI
        DataField = 'topmiktar'
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
      object QRDBText2: TQRDBText
        Left = 492
        Top = 2
        Width = 60
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1301.75
          5.29166666666667
          158.75)
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
      object QRDBText4: TQRDBText
        Left = 561
        Top = 2
        Width = 80
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1484.3125
          5.29166666666667
          211.666666666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySAYIMDETAYI
        DataField = 'topmiktar2'
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
      object QRDBText5: TQRDBText
        Left = 651
        Top = 2
        Width = 60
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1722.4375
          5.29166666666667
          158.75)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySAYIMDETAYI
        DataField = 'BIRIM2'
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
        Left = 47
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
          124.354166666667
          0
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRSysData1: TQRSysData
        Left = 3
        Top = 0
        Width = 40
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
          105.833333333333)
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
    end
    object PageHeaderBand1: TQRBand
      Left = 38
      Top = 38
      Width = 718
      Height = 77
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = True
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        203.729166666667
        1899.70833333333)
      BandType = rbPageHeader
      object QRLabel1: TQRLabel
        Left = 303
        Top = 7
        Width = 149
        Height = 25
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          66.1458333333333
          801.6875
          18.5208333333333
          394.229166666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'SAYIM RAPORU'
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
        Left = 405
        Top = 58
        Width = 80
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1071.5625
          153.458333333333
          211.666666666667)
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
        Left = 492
        Top = 58
        Width = 60
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1301.75
          153.458333333333
          158.75)
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
      object QRLabel7: TQRLabel
        Left = 561
        Top = 58
        Width = 80
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1484.3125
          153.458333333333
          211.666666666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = '2. Miktar'
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
      object QRLabel8: TQRLabel
        Left = 651
        Top = 58
        Width = 60
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          1722.4375
          153.458333333333
          158.75)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = '2.Brm'
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
      object QRShape5: TQRShape
        Left = 646
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
          1709.20833333333
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape14: TQRShape
        Left = 646
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
          1709.20833333333
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape15: TQRShape
        Left = 555
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
          1468.4375
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape16: TQRShape
        Left = 487
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
          1288.52083333333
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape17: TQRShape
        Left = 0
        Top = 56
        Width = 717
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
          1897.0625)
        Shape = qrsHorLine
      end
      object QRLabel11: TQRLabel
        Left = 52
        Top = 58
        Width = 57
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          137.583333333333
          153.458333333333
          150.8125)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'Stok Kod'
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
        Left = 119
        Top = 58
        Width = 278
        Height = 15
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          314.854166666667
          153.458333333333
          735.541666666667)
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
        Left = 400
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
          1058.33333333333
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRShape26: TQRShape
        Left = 113
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
          298.979166666667
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
        Left = 47
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
          124.354166666667
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
      object QRLabel2: TQRLabel
        Left = 3
        Top = 58
        Width = 40
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
          105.833333333333)
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
        Left = 626
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
          1656.29166666667
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
        Left = 676
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
          1788.58333333333
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
      object QRShape1: TQRShape
        Left = 717
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
          1897.0625
          148.166666666667
          2.64583333333333)
        Shape = qrsVertLine
      end
    end
    object PageFooterBand1: TQRBand
      Left = 38
      Top = 151
      Width = 718
      Height = 21
      Frame.Color = clBlack
      Frame.DrawTop = True
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        55.5625
        1899.70833333333)
      BandType = rbPageFooter
    end
    object SummaryBand1: TQRBand
      Left = 38
      Top = 133
      Width = 718
      Height = 18
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
        47.625
        1899.70833333333)
      BandType = rbSummary
    end
  end
  object querySTOKANA: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select distinct * from stokana'
      'order by StokKodu')
    Left = 440
    Top = 36
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
    Left = 440
    Top = 66
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
    Left = 407
    Top = 66
  end
  object querySTOKHAR: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from stokhar')
    Left = 470
    Top = 66
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
      
        'SELECT kod, ad, cinsi, sum(miktar) topmiktar, birim, sum(miktar2' +
        ') topmiktar2, birim2 FROM DETAYSAYIM'
      'group by kod, ad, cinsi, birim, birim2'
      'ORDER BY CINSI, AD')
    Left = 441
    Top = 96
    object querySAYIMDETAYIkod: TFloatField
      FieldName = 'kod'
      Origin = 'ORTEG2002."DETAYSAYIM.DB".KOD'
    end
    object querySAYIMDETAYIad: TStringField
      FieldName = 'ad'
      Origin = 'ORTEG2002."DETAYSAYIM.DB".AD'
      Size = 50
    end
    object querySAYIMDETAYIcinsi: TStringField
      FieldName = 'cinsi'
      Origin = 'ORTEG2002."DETAYSAYIM.DB".CINSI'
      Size = 40
    end
    object querySAYIMDETAYItopmiktar: TFloatField
      FieldName = 'topmiktar'
      Origin = 'ORTEG2002."DETAYSAYIM.DB".MIKTAR'
      DisplayFormat = '###,###,###,###.###'
    end
    object querySAYIMDETAYIbirim: TStringField
      FieldName = 'birim'
      Origin = 'ORTEG2002."DETAYSAYIM.DB".BIRIM'
      Size = 10
    end
    object querySAYIMDETAYItopmiktar2: TFloatField
      FieldName = 'topmiktar2'
      Origin = 'ORTEG2002."DETAYSAYIM.DB".MIKTAR2'
      DisplayFormat = '###,###,###,###.###'
    end
    object querySAYIMDETAYIbirim2: TStringField
      FieldName = 'birim2'
      Origin = 'ORTEG2002."DETAYSAYIM.DB".BIRIM2'
      Size = 10
    end
  end
end
