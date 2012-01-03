object rprGunlukHareket: TrprGunlukHareket
  Left = 223
  Top = 140
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Günlük Hareket Raporu'
  ClientHeight = 92
  ClientWidth = 202
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
  object BitBtn1: TBitBtn
    Left = 2
    Top = 65
    Width = 100
    Height = 26
    Caption = '&Tamam'
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 101
    Top = 65
    Width = 100
    Height = 26
    Caption = 'Ý&ptal'
    TabOrder = 3
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
  object QuickRep1: TQuickRep
    Left = -3
    Top = 96
    Width = 898
    Height = 635
    Frame.Color = clBlack
    Frame.DrawTop = False
    Frame.DrawBottom = False
    Frame.DrawLeft = False
    Frame.DrawRight = False
    BeforePrint = QuickRep1BeforePrint
    DataSet = querySTOKHAR
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
    Page.Orientation = poLandscape
    Page.PaperSize = A4
    Page.Values = (
      100
      2100
      100
      2970
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
    Zoom = 80
    object PageHeaderBand1: TQRBand
      Left = 30
      Top = 30
      Width = 838
      Height = 70
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
        231.510416666667
        2771.51041666667)
      BandType = rbPageHeader
      object QRLabel1: TQRLabel
        Left = 121
        Top = 19
        Width = 595
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          400.182291666667
          62.8385416666667
          1967.83854166667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 
          'SÝDE JANDARMA ÖZEL EÐÝTÝM MERKEZÝ KOMUTANLIÐI  /  GÜNLÜK HAREKET' +
          ' RAPORU'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 12
      end
      object QRLabel2: TQRLabel
        Left = 312
        Top = 4
        Width = 214
        Height = 18
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          59.53125
          1031.875
          13.2291666666667
          707.760416666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = True
        Caption = '17.01.2002 TARÝHLÝ'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 12
      end
      object QRLabel3: TQRLabel
        Left = 3
        Top = 53
        Width = 25
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          9.921875
          175.286458333333
          82.6822916666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'S.NO'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel4: TQRLabel
        Left = 34
        Top = 53
        Width = 45
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          112.447916666667
          175.286458333333
          148.828125)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'ST.KODU'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel5: TQRLabel
        Left = 85
        Top = 53
        Width = 123
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          281.119791666667
          175.286458333333
          406.796875)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'STOK ADI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel7: TQRLabel
        Left = 256
        Top = 53
        Width = 90
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          846.666666666667
          175.286458333333
          297.65625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'FÝRMA ADI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel8: TQRLabel
        Left = 352
        Top = 53
        Width = 40
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1164.16666666667
          175.286458333333
          132.291666666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'MÝKTAR'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel9: TQRLabel
        Left = 398
        Top = 53
        Width = 40
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1316.30208333333
          175.286458333333
          132.291666666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'BÝRÝMÝ'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel10: TQRLabel
        Left = 445
        Top = 53
        Width = 70
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1471.74479166667
          175.286458333333
          231.510416666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'ALIÞ FÝYATI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel11: TQRLabel
        Left = 523
        Top = 53
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1729.71354166667
          175.286458333333
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'ALIÞ TUTARI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel12: TQRLabel
        Left = 604
        Top = 53
        Width = 70
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1997.60416666667
          175.286458333333
          231.510416666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'SATIÞ FÝYATI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel13: TQRLabel
        Left = 681
        Top = 53
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2252.265625
          175.286458333333
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'SATIÞ TUTARI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel14: TQRLabel
        Left = 763
        Top = 53
        Width = 70
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2523.46354166667
          175.286458333333
          231.510416666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'KAR'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRShape1: TQRShape
        Left = 28
        Top = 51
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          92.6041666666667
          168.671875
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape3: TQRShape
        Left = 79
        Top = 51
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          261.276041666667
          168.671875
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape4: TQRShape
        Left = 208
        Top = 51
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          687.916666666667
          168.671875
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape5: TQRShape
        Left = 250
        Top = 51
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          826.822916666667
          168.671875
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape6: TQRShape
        Left = 346
        Top = 51
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          1144.32291666667
          168.671875
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape7: TQRShape
        Left = 440
        Top = 51
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          1455.20833333333
          168.671875
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape8: TQRShape
        Left = 757
        Top = 51
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          2503.61979166667
          168.671875
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape9: TQRShape
        Left = 676
        Top = 51
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          2235.72916666667
          168.671875
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape10: TQRShape
        Left = 599
        Top = 51
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          1981.06770833333
          168.671875
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape11: TQRShape
        Left = 517
        Top = 51
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          1709.86979166667
          168.671875
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape12: TQRShape
        Left = 393
        Top = 51
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          1299.765625
          168.671875
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape2: TQRShape
        Left = 0
        Top = 51
        Width = 1
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          0
          168.671875
          3.30729166666667)
        Shape = qrsVertLine
      end
      object QRShape13: TQRShape
        Left = 835
        Top = 51
        Width = 1
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          2761.58854166667
          168.671875
          3.30729166666667)
        Shape = qrsVertLine
      end
      object QRShape14: TQRShape
        Left = 0
        Top = 50
        Width = 836
        Height = 1
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          3.30729166666667
          0
          165.364583333333
          2764.89583333333)
        Shape = qrsHorLine
      end
      object QRShape15: TQRShape
        Left = 0
        Top = 68
        Width = 836
        Height = 1
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          3.30729166666667
          0
          224.895833333333
          2764.89583333333)
        Shape = qrsHorLine
      end
      object QRLabel15: TQRLabel
        Left = 213
        Top = 53
        Width = 37
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          704.453125
          175.286458333333
          122.369791666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'ÝÞ.TÜRÜ'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel16: TQRLabel
        Left = 763
        Top = 3
        Width = 27
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2523.46354166667
          9.921875
          89.296875)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Sayfa'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRSysData2: TQRSysData
        Left = 796
        Top = 3
        Width = 37
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2632.60416666667
          9.921875
          122.369791666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = True
        Color = clWhite
        Data = qrsPageNumber
        Transparent = False
        FontSize = 10
      end
    end
    object PageFooterBand1: TQRBand
      Left = 30
      Top = 166
      Width = 838
      Height = 36
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
        119.0625
        2771.51041666667)
      BandType = rbPageFooter
      object QRShape36: TQRShape
        Left = 1
        Top = 1
        Width = 836
        Height = 1
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          3.30729166666667
          3.30729166666667
          3.30729166666667
          2764.89583333333)
        Shape = qrsHorLine
      end
      object QRShape16: TQRShape
        Left = 0
        Top = 0
        Width = 1
        Height = 34
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          112.447916666667
          0
          0
          3.30729166666667)
        Shape = qrsVertLine
      end
      object QRLabel24: TQRLabel
        Left = 3
        Top = 3
        Width = 157
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          9.921875
          9.921875
          519.244791666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'GÝRÝÞLER TOPLAMI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRShape29: TQRShape
        Left = -1
        Top = 34
        Width = 836
        Height = 1
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          3.30729166666667
          -3.30729166666667
          112.447916666667
          2764.89583333333)
        Shape = qrsHorLine
      end
      object QRShape34: TQRShape
        Left = 1
        Top = 1
        Width = 836
        Height = 1
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          3.30729166666667
          3.30729166666667
          3.30729166666667
          2764.89583333333)
        Shape = qrsHorLine
      end
      object QRLabel25: TQRLabel
        Left = 522
        Top = 4
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1726.40625
          13.2291666666667
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel6'
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
      object QRLabel26: TQRLabel
        Left = 681
        Top = 4
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2252.265625
          13.2291666666667
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel18'
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
      object QRLabel27: TQRLabel
        Left = 762
        Top = 4
        Width = 70
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2520.15625
          13.2291666666667
          231.510416666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel19'
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
      object QRLabel28: TQRLabel
        Left = 3
        Top = 19
        Width = 157
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          9.921875
          62.8385416666667
          519.244791666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'ÇIKIÞLAR TOPLAMI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel29: TQRLabel
        Left = 522
        Top = 20
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1726.40625
          66.1458333333333
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel6'
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
      object QRLabel30: TQRLabel
        Left = 681
        Top = 20
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2252.265625
          66.1458333333333
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel18'
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
      object QRLabel31: TQRLabel
        Left = 762
        Top = 20
        Width = 70
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2520.15625
          66.1458333333333
          231.510416666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel19'
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
      object QRShape35: TQRShape
        Left = 836
        Top = 1
        Width = 1
        Height = 34
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          112.447916666667
          2764.89583333333
          3.30729166666667
          3.30729166666667)
        Shape = qrsVertLine
      end
    end
    object SummaryBand1: TQRBand
      Left = 30
      Top = 112
      Width = 838
      Height = 54
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      BeforePrint = SummaryBand1BeforePrint
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        178.59375
        2771.51041666667)
      BandType = rbSummary
      object QRShape17: TQRShape
        Left = 0
        Top = 0
        Width = 1
        Height = 53
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          175.286458333333
          0
          0
          3.30729166666667)
        Shape = qrsVertLine
      end
      object QRShape33: TQRShape
        Left = 835
        Top = 0
        Width = 1
        Height = 53
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          175.286458333333
          2761.58854166667
          0
          3.30729166666667)
        Shape = qrsVertLine
      end
      object QRLabel17: TQRLabel
        Left = 3
        Top = 3
        Width = 157
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          9.921875
          9.921875
          519.244791666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'GÝRÝÞLER TOPLAMI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRShape31: TQRShape
        Left = -1
        Top = 34
        Width = 836
        Height = 1
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          3.30729166666667
          -3.30729166666667
          112.447916666667
          2764.89583333333)
        Shape = qrsHorLine
      end
      object QRShape32: TQRShape
        Left = 1
        Top = 1
        Width = 836
        Height = 1
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          3.30729166666667
          3.30729166666667
          3.30729166666667
          2764.89583333333)
        Shape = qrsHorLine
      end
      object QRLabel6: TQRLabel
        Left = 522
        Top = 4
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1726.40625
          13.2291666666667
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel6'
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
      object QRLabel18: TQRLabel
        Left = 681
        Top = 4
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2252.265625
          13.2291666666667
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel18'
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
      object QRLabel19: TQRLabel
        Left = 762
        Top = 4
        Width = 70
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2520.15625
          13.2291666666667
          231.510416666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel19'
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
      object QRLabel20: TQRLabel
        Left = 3
        Top = 19
        Width = 157
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          9.921875
          62.8385416666667
          519.244791666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'ÇIKIÞLAR TOPLAMI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel21: TQRLabel
        Left = 522
        Top = 20
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1726.40625
          66.1458333333333
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel6'
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
      object QRLabel22: TQRLabel
        Left = 681
        Top = 20
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2252.265625
          66.1458333333333
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel18'
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
      object QRLabel23: TQRLabel
        Left = 762
        Top = 20
        Width = 70
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2520.15625
          66.1458333333333
          231.510416666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel19'
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
      object QRLabel32: TQRLabel
        Left = 3
        Top = 37
        Width = 157
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          9.921875
          122.369791666667
          519.244791666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'DEPODAKÝ MALIN SON DURUMU'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 8
      end
      object QRLabel33: TQRLabel
        Left = 522
        Top = 38
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          1726.40625
          125.677083333333
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel6'
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
      object QRLabel34: TQRLabel
        Left = 681
        Top = 38
        Width = 75
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2252.265625
          125.677083333333
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel18'
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
      object QRLabel35: TQRLabel
        Left = 762
        Top = 38
        Width = 70
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          42.9947916666667
          2520.15625
          125.677083333333
          231.510416666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'QRLabel19'
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
      object QRShape37: TQRShape
        Left = -1
        Top = 52
        Width = 836
        Height = 1
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          3.30729166666667
          -3.30729166666667
          171.979166666667
          2764.89583333333)
        Shape = qrsHorLine
      end
    end
    object QRBand2: TQRBand
      Left = 30
      Top = 100
      Width = 838
      Height = 12
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AfterPrint = QRBand2AfterPrint
      AlignToBottom = False
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -8
      Font.Name = 'Arial'
      Font.Style = []
      ForceNewColumn = False
      ForceNewPage = False
      ParentFont = False
      Size.Values = (
        39.6875
        2771.51041666667)
      BandType = rbDetail
      object QRDBText1: TQRDBText
        Left = 213
        Top = 0
        Width = 37
        Height = 12
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          39.6875
          704.453125
          0
          122.369791666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'BELGE_TURU'
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
        Left = 34
        Top = 0
        Width = 45
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          33.0729166666667
          112.447916666667
          0
          148.828125)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'STOK_KODU'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -8
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 6
      end
      object QRDBText3: TQRDBText
        Left = 85
        Top = 0
        Width = 123
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          33.0729166666667
          281.119791666667
          0
          406.796875)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'STOK_ADI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -8
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 6
      end
      object QRDBText5: TQRDBText
        Left = 256
        Top = 0
        Width = 90
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          33.0729166666667
          846.666666666667
          0
          297.65625)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'FIRMA_ADI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -8
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 6
      end
      object QRDBText6: TQRDBText
        Left = 352
        Top = 0
        Width = 40
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          33.0729166666667
          1164.16666666667
          0
          132.291666666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'MIKTAR'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -8
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 6
      end
      object QRDBText7: TQRDBText
        Left = 445
        Top = 0
        Width = 70
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          33.0729166666667
          1471.74479166667
          0
          231.510416666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'ALIS_FIYATI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -8
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 6
      end
      object QRDBText8: TQRDBText
        Left = 523
        Top = 0
        Width = 75
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          33.0729166666667
          1729.71354166667
          0
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'ALIS_TUTARI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -8
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 6
      end
      object QRDBText9: TQRDBText
        Left = 604
        Top = 0
        Width = 70
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          33.0729166666667
          1997.60416666667
          0
          231.510416666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'SATIS_FIYATI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -8
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 6
      end
      object QRDBText10: TQRDBText
        Left = 681
        Top = 0
        Width = 75
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          33.0729166666667
          2252.265625
          0
          248.046875)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'SATIS_TUTARI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -8
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 6
      end
      object QRDBText11: TQRDBText
        Left = 763
        Top = 0
        Width = 70
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          33.0729166666667
          2523.46354166667
          0
          231.510416666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'KAR'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -8
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 6
      end
      object QRDBText12: TQRDBText
        Left = 398
        Top = 0
        Width = 40
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          33.0729166666667
          1316.30208333333
          0
          132.291666666667)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = querySTOKHAR
        DataField = 'BIRIMI'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -8
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 6
      end
      object QRSysData1: TQRSysData
        Left = 3
        Top = 0
        Width = 25
        Height = 10
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          33.0729166666667
          9.921875
          0
          82.6822916666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        Color = clWhite
        Data = qrsDetailNo
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -8
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        FontSize = 6
      end
      object QRShape18: TQRShape
        Left = 28
        Top = -1
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          92.6041666666667
          -3.30729166666667
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape19: TQRShape
        Left = 79
        Top = -1
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          261.276041666667
          -3.30729166666667
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape20: TQRShape
        Left = 208
        Top = -1
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          687.916666666667
          -3.30729166666667
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape21: TQRShape
        Left = 250
        Top = -1
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          826.822916666667
          -3.30729166666667
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape22: TQRShape
        Left = 346
        Top = -1
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          1144.32291666667
          -3.30729166666667
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape23: TQRShape
        Left = 440
        Top = -1
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          1455.20833333333
          -3.30729166666667
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape24: TQRShape
        Left = 757
        Top = -1
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          2503.61979166667
          -3.30729166666667
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape25: TQRShape
        Left = 676
        Top = -1
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          2235.72916666667
          -3.30729166666667
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape26: TQRShape
        Left = 599
        Top = -1
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          1981.06770833333
          -3.30729166666667
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape27: TQRShape
        Left = 517
        Top = -1
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          1709.86979166667
          -3.30729166666667
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape28: TQRShape
        Left = 393
        Top = -1
        Width = 4
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          1299.765625
          -3.30729166666667
          13.2291666666667)
        Shape = qrsVertLine
      end
      object QRShape30: TQRShape
        Left = 0
        Top = 0
        Width = 1
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          0
          0
          3.30729166666667)
        Shape = qrsVertLine
      end
      object QRShape47: TQRShape
        Left = 835
        Top = 0
        Width = 1
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          56.2239583333333
          2761.58854166667
          0
          3.30729166666667)
        Shape = qrsVertLine
      end
    end
  end
  object Panel1: TPanel
    Left = 2
    Top = 2
    Width = 199
    Height = 61
    TabOrder = 0
    object Label1: TLabel
      Left = 15
      Top = 9
      Width = 100
      Height = 13
      Caption = 'Rapor Alýnacak Tarih'
    end
    object DateTimePicker1: TDateTimePicker
      Left = 16
      Top = 24
      Width = 169
      Height = 21
      CalAlignment = dtaLeft
      Date = 37620.6304562037
      Time = 37620.6304562037
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 0
    end
  end
  object querySTOKHAR: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'SELECT * FROM STOKHAR'
      'WHERE TARIH=:TARIH'
      'ORDER BY  STOK_KODU, BELGE_TURU desc')
    Left = 210
    Top = 6
    ParamData = <
      item
        DataType = ftDate
        Name = 'TARIH'
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
    end
    object querySTOKHARALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_FIYATI'
      DisplayFormat = '###,###,###,###.###'
    end
    object querySTOKHARALIS_TUTARI: TFloatField
      FieldName = 'ALIS_TUTARI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_TUTARI'
      DisplayFormat = '###,###,###,###.###'
    end
    object querySTOKHARSATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_FIYATI'
      DisplayFormat = '###,###,###,###.###'
    end
    object querySTOKHARKAR: TFloatField
      FieldName = 'KAR'
      Origin = 'ORTEG2002."stokhar.DB".KAR'
      DisplayFormat = '###,###,###,###.###'
    end
    object querySTOKHARSATIS_TUTARI: TFloatField
      FieldName = 'SATIS_TUTARI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_TUTARI'
      DisplayFormat = '###,###,###,###.###'
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
  object queryCIKTITOPLAMI: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      
        'select sum(ALIS_TUTARI) CIKTI_ALIS_TOPLAMI, sum(SATIS_TUTARI) CI' +
        'KTI_SATIS_TOPLAMI, sum(KAR) CIKTI_KAR_TOPLAMI  from stokhar'
      'where tarih <= :tarih and belge_turu!='#39'GIRDI'#39)
    Left = 240
    Top = 10
    ParamData = <
      item
        DataType = ftDateTime
        Name = 'tarih'
        ParamType = ptUnknown
      end>
    object queryCIKTITOPLAMICIKTI_ALIS_TOPLAMI: TFloatField
      FieldName = 'CIKTI_ALIS_TOPLAMI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_TUTARI'
    end
    object queryCIKTITOPLAMICIKTI_SATIS_TOPLAMI: TFloatField
      FieldName = 'CIKTI_SATIS_TOPLAMI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_TUTARI'
    end
    object queryCIKTITOPLAMICIKTI_KAR_TOPLAMI: TFloatField
      FieldName = 'CIKTI_KAR_TOPLAMI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_TUTARI'
    end
  end
  object queryGIRDITOPLAMI: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      
        'select sum(ALIS_TUTARI) GIRDI_ALIS_TOPLAMI, sum(SATIS_TUTARI) GI' +
        'RDI_SATIS_TOPLAMI, sum(KAR) GIRDI_KAR_TOPLAMI  from stokhar'
      'where tarih <= :tarih and belge_turu='#39'GIRDI'#39)
    Left = 240
    Top = 40
    ParamData = <
      item
        DataType = ftDateTime
        Name = 'tarih'
        ParamType = ptUnknown
      end>
    object queryGIRDITOPLAMIGIRDI_ALIS_TOPLAMI: TFloatField
      FieldName = 'GIRDI_ALIS_TOPLAMI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_TUTARI'
    end
    object queryGIRDITOPLAMIGIRDI_SATIS_TOPLAMI: TFloatField
      FieldName = 'GIRDI_SATIS_TOPLAMI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_TUTARI'
    end
    object queryGIRDITOPLAMIGIRDI_KAR_TOPLAMI: TFloatField
      FieldName = 'GIRDI_KAR_TOPLAMI'
      Origin = 'ORTEG2002."stokhar.DB".KAR'
    end
  end
end
