object frmSayimKontrol: TfrmSayimKontrol
  Left = 189
  Top = 282
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Depo [ Giriþ/Çýkýþ ] Ekraný'
  ClientHeight = 260
  ClientWidth = 547
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  Scaled = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = -4
    Width = 547
    Height = 243
    TabOrder = 0
    object PageControl1: TPageControl
      Left = 6
      Top = 12
      Width = 532
      Height = 223
      ActivePage = TabSheet1
      TabOrder = 0
      object TabSheet1: TTabSheet
        Caption = 'Genel'
        object GroupBox4: TGroupBox
          Left = 2
          Top = 128
          Width = 520
          Height = 65
          TabOrder = 2
          object staticFark: TStaticText
            Left = 9
            Top = 39
            Width = 502
            Height = 16
            Alignment = taCenter
            AutoSize = False
            BorderStyle = sbsSingle
            Caption = '56465464654'
            Color = clInactiveCaption
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindow
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = [fsBold]
            ParentColor = False
            ParentFont = False
            TabOrder = 1
          end
          object StaticText3: TStaticText
            Left = 9
            Top = 18
            Width = 502
            Height = 17
            Alignment = taCenter
            AutoSize = False
            BorderStyle = sbsSingle
            Caption = 'F A R K'
            Color = clInfoBk
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentColor = False
            ParentFont = False
            TabOrder = 0
          end
        end
        object GroupBox3: TGroupBox
          Left = 260
          Top = -1
          Width = 262
          Height = 136
          TabOrder = 1
          object Label7: TLabel
            Left = 10
            Top = 58
            Width = 58
            Height = 13
            Caption = 'Ýç Daðýtýmlar'
          end
          object Label8: TLabel
            Left = 9
            Top = 34
            Width = 28
            Height = 13
            Caption = 'Sayým'
          end
          object Label9: TLabel
            Left = 10
            Top = 106
            Width = 35
            Height = 13
            Caption = 'Toplam'
          end
          object Label10: TLabel
            Left = 10
            Top = 82
            Width = 83
            Height = 13
            Caption = 'Temizlik Tutanaðý'
          end
          object StaticText9: TStaticText
            Left = 100
            Top = 106
            Width = 151
            Height = 21
            AutoSize = False
            BorderStyle = sbsSingle
            Color = clBtnFace
            ParentColor = False
            TabOrder = 7
          end
          object StaticText8: TStaticText
            Left = 100
            Top = 82
            Width = 151
            Height = 21
            AutoSize = False
            BorderStyle = sbsSingle
            Color = clBtnFace
            ParentColor = False
            TabOrder = 6
          end
          object StaticText7: TStaticText
            Left = 100
            Top = 58
            Width = 151
            Height = 21
            AutoSize = False
            BorderStyle = sbsSingle
            Color = clBtnFace
            ParentColor = False
            TabOrder = 5
          end
          object StaticText2: TStaticText
            Left = 12
            Top = 12
            Width = 239
            Height = 17
            Alignment = taCenter
            AutoSize = False
            BorderStyle = sbsSingle
            Caption = 'Ç I K I Þ L A R'
            Color = clInfoBk
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentColor = False
            ParentFont = False
            TabOrder = 0
          end
          object editIcDagitimlar: TEdit
            Left = 101
            Top = 59
            Width = 149
            Height = 19
            BorderStyle = bsNone
            ReadOnly = True
            TabOrder = 1
          end
          object editSayim: TEdit
            Left = 100
            Top = 34
            Width = 151
            Height = 21
            TabOrder = 2
            OnChange = editSayimChange
          end
          object editCikislarToplami: TEdit
            Left = 101
            Top = 107
            Width = 149
            Height = 19
            BorderStyle = bsNone
            ReadOnly = True
            TabOrder = 3
          end
          object editTemizlikTutanagi: TEdit
            Left = 101
            Top = 83
            Width = 149
            Height = 19
            BorderStyle = bsNone
            ReadOnly = True
            TabOrder = 4
          end
        end
        object GroupBox2: TGroupBox
          Left = 2
          Top = -1
          Width = 262
          Height = 136
          TabOrder = 0
          object Label1: TLabel
            Left = 10
            Top = 58
            Width = 70
            Height = 13
            Caption = 'Fatura Toplamý'
          end
          object Label2: TLabel
            Left = 10
            Top = 34
            Width = 25
            Height = 13
            Caption = 'Devir'
          end
          object Label3: TLabel
            Left = 10
            Top = 83
            Width = 82
            Height = 13
            Caption = 'Ýade Ýç Daðýtýmlar'
          end
          object Label4: TLabel
            Left = 10
            Top = 107
            Width = 35
            Height = 13
            Caption = 'Toplam'
          end
          object StaticText6: TStaticText
            Left = 102
            Top = 106
            Width = 151
            Height = 21
            AutoSize = False
            BorderStyle = sbsSingle
            Color = clBtnFace
            ParentColor = False
            TabOrder = 7
          end
          object StaticText5: TStaticText
            Left = 102
            Top = 82
            Width = 151
            Height = 21
            AutoSize = False
            BorderStyle = sbsSingle
            Color = clBtnFace
            ParentColor = False
            TabOrder = 6
          end
          object StaticText4: TStaticText
            Left = 102
            Top = 58
            Width = 151
            Height = 21
            AutoSize = False
            BorderStyle = sbsSingle
            Color = clBtnFace
            ParentColor = False
            TabOrder = 5
          end
          object StaticText1: TStaticText
            Left = 9
            Top = 12
            Width = 244
            Height = 17
            Alignment = taCenter
            AutoSize = False
            BorderStyle = sbsSingle
            Caption = 'G Ý R Ý Þ L E R'
            Color = clInfoBk
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentColor = False
            ParentFont = False
            TabOrder = 0
          end
          object editDevir: TEdit
            Left = 102
            Top = 34
            Width = 151
            Height = 21
            TabOrder = 1
            OnChange = editDevirChange
          end
          object editFaturaToplami: TEdit
            Left = 103
            Top = 59
            Width = 149
            Height = 19
            BiDiMode = bdLeftToRight
            BorderStyle = bsNone
            ParentBiDiMode = False
            ReadOnly = True
            TabOrder = 2
          end
          object editIadeIcDagitimlar: TEdit
            Left = 103
            Top = 83
            Width = 149
            Height = 19
            BorderStyle = bsNone
            ReadOnly = True
            TabOrder = 3
          end
          object editGirisToplami: TEdit
            Left = 103
            Top = 107
            Width = 149
            Height = 19
            BorderStyle = bsNone
            ReadOnly = True
            TabOrder = 4
          end
        end
      end
      object TabSheet2: TTabSheet
        Caption = 'Fatura'
        ImageIndex = 1
        object DBGrid1: TDBGrid
          Left = 3
          Top = 3
          Width = 517
          Height = 190
          DataSource = dsrcFATURA
          Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          Columns = <
            item
              Expanded = False
              FieldName = 'TARIH'
              Title.Alignment = taCenter
              Title.Caption = 'Tarih'
              Width = 62
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'BELGE_NO'
              Title.Alignment = taCenter
              Title.Caption = 'Belge No'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'FIRMA_ADI'
              Title.Caption = 'Firma Adý'
              Width = 175
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ALIS_TOPLAMI'
              Title.Alignment = taRightJustify
              Title.Caption = 'Alýþ Toplamý'
              Width = 90
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'SATIS_TOPLAMI'
              Title.Alignment = taRightJustify
              Title.Caption = 'Satýþ Toplamý'
              Width = 90
              Visible = True
            end>
        end
      end
      object TabSheet3: TTabSheet
        Caption = 'Ýç Daðýtým'
        ImageIndex = 2
        object DBGrid2: TDBGrid
          Left = 3
          Top = 3
          Width = 517
          Height = 190
          DataSource = dsrcIC_DAGITIM
          Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          Columns = <
            item
              Expanded = False
              FieldName = 'TARIH'
              Title.Alignment = taCenter
              Title.Caption = 'Tarih'
              Width = 62
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'BELGE_NO'
              Title.Alignment = taCenter
              Title.Caption = 'Belge No'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'FIRMA_ADI'
              Title.Caption = 'Firma Adý'
              Width = 175
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ALIS_TOPLAMI'
              Title.Alignment = taRightJustify
              Title.Caption = 'Alýþ Toplamý'
              Width = 90
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'SATIS_TOPLAMI'
              Title.Alignment = taRightJustify
              Title.Caption = 'Satýþ Toplamý'
              Width = 90
              Visible = True
            end>
        end
      end
      object TabSheet4: TTabSheet
        Caption = 'Ýade Ýç Daðýtým'
        ImageIndex = 3
        object DBGrid3: TDBGrid
          Left = 3
          Top = 3
          Width = 517
          Height = 190
          DataSource = dsrcIADE_ICDAGITIM
          Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          Columns = <
            item
              Expanded = False
              FieldName = 'TARIH'
              Title.Alignment = taCenter
              Title.Caption = 'Tarih'
              Width = 62
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'BELGE_NO'
              Title.Alignment = taCenter
              Title.Caption = 'Belge No'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'FIRMA_ADI'
              Title.Caption = 'Firma Adý'
              Width = 175
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ALIS_TOPLAMI'
              Title.Alignment = taRightJustify
              Title.Caption = 'Alýþ Toplamý'
              Width = 90
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'SATIS_TOPLAMI'
              Title.Alignment = taRightJustify
              Title.Caption = 'Satýþ Toplamý'
              Width = 90
              Visible = True
            end>
        end
      end
      object TabSheet5: TTabSheet
        Caption = 'Temizlik Tutanaðý'
        ImageIndex = 4
        object DBGrid4: TDBGrid
          Left = 3
          Top = 3
          Width = 517
          Height = 190
          DataSource = dsrcTEMIZLIK
          Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          Columns = <
            item
              Expanded = False
              FieldName = 'TARIH'
              Title.Alignment = taCenter
              Title.Caption = 'Tarih'
              Width = 62
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'BELGE_NO'
              Title.Alignment = taCenter
              Title.Caption = 'Belge No'
              Width = 60
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'FIRMA_ADI'
              Title.Caption = 'Firma Adý'
              Width = 175
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ALIS_TOPLAMI'
              Title.Alignment = taRightJustify
              Title.Caption = 'Alýþ Toplamý'
              Width = 90
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'SATIS_TOPLAMI'
              Title.Alignment = taRightJustify
              Title.Caption = 'Satýþ Toplamý'
              Width = 90
              Visible = True
            end>
        end
      end
    end
    object comboDonem: TComboBox
      Left = 383
      Top = 9
      Width = 154
      Height = 21
      Style = csDropDownList
      ItemHeight = 13
      TabOrder = 1
      OnChange = comboDonemChange
    end
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 240
    Width = 547
    Height = 20
    Panels = <
      item
        Width = 315
      end
      item
        Alignment = taCenter
        Text = ' Ýþlem Durumu'
        Width = 80
      end
      item
        Width = 50
      end>
    SimplePanel = False
  end
  object ProgressBar1: TProgressBar
    Left = 396
    Top = 242
    Width = 151
    Height = 18
    Min = 0
    Max = 100
    Smooth = True
    TabOrder = 2
  end
  object quickrepRAPOR: TQuickRep
    Left = 129
    Top = 495
    Width = 794
    Height = 1123
    Frame.Color = clBlack
    Frame.DrawTop = False
    Frame.DrawBottom = False
    Frame.DrawLeft = False
    Frame.DrawRight = False
    AfterPrint = quickrepRAPORAfterPrint
    BeforePrint = quickrepRAPORBeforePrint
    DataSet = queryFATURA
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
      Height = 86
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
        227.541666666667
        1899.70833333333)
      BandType = rbPageHeader
      object QRLabel1: TQRLabel
        Left = 3
        Top = 67
        Width = 76
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          7.9375
          177.270833333333
          201.083333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'TARÝH'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel2: TQRLabel
        Left = 86
        Top = 67
        Width = 76
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          227.541666666667
          177.270833333333
          201.083333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'BELGE NO'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel3: TQRLabel
        Left = 167
        Top = 67
        Width = 293
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          441.854166666667
          177.270833333333
          775.229166666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'FÝRMA ADI'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel4: TQRLabel
        Left = 466
        Top = 67
        Width = 120
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1232.95833333333
          177.270833333333
          317.5)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'ALIÞ TOPLAMI'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel5: TQRLabel
        Left = 591
        Top = 67
        Width = 120
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = True
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1563.6875
          177.270833333333
          317.5)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'SATIÞ TOPLAMI'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel6: TQRLabel
        Left = 196
        Top = 1
        Width = 328
        Height = 19
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          50.2708333333333
          518.583333333333
          2.64583333333333
          867.833333333333)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'OCAK 2003 DÖNEMÝ '
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 11
      end
      object QRLabel7: TQRLabel
        Left = 195
        Top = 24
        Width = 329
        Height = 19
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          50.2708333333333
          515.9375
          63.5
          870.479166666667)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'FATURA DETAYI'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Arial'
        Font.Style = []
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 11
      end
      object QRLabel8: TQRLabel
        Left = 609
        Top = 3
        Width = 54
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1611.3125
          7.9375
          142.875)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Sayfa No'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRSysData1: TQRSysData
        Left = 666
        Top = 3
        Width = 46
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1762.125
          7.9375
          121.708333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = True
        Color = clWhite
        Data = qrsPageNumber
        Transparent = False
        FontSize = 10
      end
    end
    object DetailBand1: TQRBand
      Left = 38
      Top = 124
      Width = 718
      Height = 21
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AfterPrint = DetailBand1AfterPrint
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        55.5625
        1899.70833333333)
      BandType = rbDetail
      object QRDBText1: TQRDBText
        Left = 3
        Top = 1
        Width = 76
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          7.9375
          2.64583333333333
          201.083333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = queryFATURA
        DataField = 'TARIH'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRDBText2: TQRDBText
        Left = 84
        Top = 1
        Width = 79
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          222.25
          2.64583333333333
          209.020833333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = queryFATURA
        DataField = 'BELGE_NO'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRDBText3: TQRDBText
        Left = 168
        Top = 1
        Width = 292
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          444.5
          2.64583333333333
          772.583333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = queryFATURA
        DataField = 'FIRMA_ADI'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRDBText4: TQRDBText
        Left = 465
        Top = 1
        Width = 121
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1230.3125
          2.64583333333333
          320.145833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = queryFATURA
        DataField = 'ALIS_TOPLAMI'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRDBText5: TQRDBText
        Left = 591
        Top = 1
        Width = 121
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1563.6875
          2.64583333333333
          320.145833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Color = clWhite
        DataSet = queryFATURA
        DataField = 'SATIS_TOPLAMI'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
    object PageFooterBand1: TQRBand
      Left = 38
      Top = 145
      Width = 718
      Height = 30
      Frame.Color = clBlack
      Frame.DrawTop = True
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      BeforePrint = PageFooterBand1BeforePrint
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        79.375
        1899.70833333333)
      BandType = rbPageFooter
      object QRLabel9: TQRLabel
        Left = 402
        Top = 5
        Width = 54
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1063.625
          13.2291666666667
          142.875)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'TOPLAM'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelAlisToplami: TQRLabel
        Left = 466
        Top = 5
        Width = 118
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1232.95833333333
          13.2291666666667
          312.208333333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelAlisToplami'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelSatisToplami: TQRLabel
        Left = 591
        Top = 5
        Width = 121
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1563.6875
          13.2291666666667
          320.145833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelSatisToplami'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
  end
  object QuickRep1: TQuickRep
    Left = 540
    Top = 483
    Width = 794
    Height = 1123
    Frame.Color = clBlack
    Frame.DrawTop = False
    Frame.DrawBottom = False
    Frame.DrawLeft = False
    Frame.DrawRight = False
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
    object DetailBand2: TQRBand
      Left = 38
      Top = 38
      Width = 718
      Height = 386
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
        1021.29166666667
        1899.70833333333)
      BandType = rbDetail
      object QRShape1: TQRShape
        Left = 16
        Top = 15
        Width = 685
        Height = 352
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          931.333333333333
          42.3333333333333
          39.6875
          1812.39583333333)
        Shape = qrsRectangle
      end
      object QRShape4: TQRShape
        Left = 16
        Top = 95
        Width = 685
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          34.3958333333333
          42.3333333333333
          251.354166666667
          1812.39583333333)
        Shape = qrsHorLine
      end
      object QRLabel11: TQRLabel
        Left = 223
        Top = 48
        Width = 271
        Height = 19
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          50.2708333333333
          590.020833333333
          127
          717.020833333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'S A Y I M   K O N T R O L   R A P O R U'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -15
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 11
      end
      object QRShape2: TQRShape
        Left = 16
        Top = 66
        Width = 685
        Height = 13
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          34.3958333333333
          42.3333333333333
          174.625
          1812.39583333333)
        Shape = qrsHorLine
      end
      object QRLabel10: TQRLabel
        Left = 152
        Top = 79
        Width = 89
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          402.166666666667
          209.020833333333
          235.479166666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'G Ý R Ý Þ L E R'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel12: TQRLabel
        Left = 496
        Top = 79
        Width = 89
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1312.33333333333
          209.020833333333
          235.479166666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Ç I K I Þ L A R'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRShape3: TQRShape
        Left = 358
        Top = 73
        Width = 2
        Height = 233
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          616.479166666667
          947.208333333333
          193.145833333333
          5.29166666666667)
        Shape = qrsVertLine
      end
      object QRLabel13: TQRLabel
        Left = 30
        Top = 118
        Width = 40
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          79.375
          312.208333333333
          105.833333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'DEVÝR'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel14: TQRLabel
        Left = 30
        Top = 168
        Width = 112
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          79.375
          444.5
          296.333333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'FATURA TOPLAMI'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel15: TQRLabel
        Left = 30
        Top = 219
        Width = 128
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          79.375
          579.4375
          338.666666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'ÝADE ÝÇ DAÐITIMLAR'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel16: TQRLabel
        Left = 30
        Top = 269
        Width = 54
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          79.375
          711.729166666667
          142.875)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'TOPLAM'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel17: TQRLabel
        Left = 372
        Top = 118
        Width = 42
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          984.25
          312.208333333333
          111.125)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'SAYIM'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel18: TQRLabel
        Left = 372
        Top = 168
        Width = 94
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          984.25
          444.5
          248.708333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'ÝÇ DAÐITIMLAR'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel19: TQRLabel
        Left = 372
        Top = 219
        Width = 124
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          984.25
          579.4375
          328.083333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'TEMÝZLÝK TUTANAÐI'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel20: TQRLabel
        Left = 372
        Top = 269
        Width = 54
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          984.25
          711.729166666667
          142.875)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'TOPLAM'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRShape5: TQRShape
        Left = 16
        Top = 304
        Width = 685
        Height = 2
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          5.29166666666667
          42.3333333333333
          804.333333333333
          1812.39583333333)
        Shape = qrsHorLine
      end
      object qrlabelDevir: TQRLabel
        Left = 186
        Top = 118
        Width = 163
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          492.125
          312.208333333333
          431.270833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelDevir'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelFaturaToplami: TQRLabel
        Left = 186
        Top = 168
        Width = 163
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          492.125
          444.5
          431.270833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelFatýraToplami'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelIadeIcDagitimlar: TQRLabel
        Left = 186
        Top = 219
        Width = 163
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          492.125
          579.4375
          431.270833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelIadeIcDagitimlar'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelGirisToplami: TQRLabel
        Left = 186
        Top = 269
        Width = 163
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          492.125
          711.729166666667
          431.270833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelGirisToplami'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelSayim: TQRLabel
        Left = 525
        Top = 118
        Width = 163
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1389.0625
          312.208333333333
          431.270833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelSayim'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelIcDagitimlar: TQRLabel
        Left = 525
        Top = 168
        Width = 163
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1389.0625
          444.5
          431.270833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelIcDagitimlar'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelTemizlikTutanagi: TQRLabel
        Left = 525
        Top = 219
        Width = 163
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1389.0625
          579.4375
          431.270833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelTemizlikTutanagi'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelCikisToplami: TQRLabel
        Left = 525
        Top = 269
        Width = 163
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          1389.0625
          711.729166666667
          431.270833333333)
        Alignment = taRightJustify
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelCikisToplami'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRShape6: TQRShape
        Left = 16
        Top = 333
        Width = 685
        Height = 2
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          5.29166666666667
          42.3333333333333
          881.0625
          1812.39583333333)
        Shape = qrsHorLine
      end
      object QRLabel21: TQRLabel
        Left = 335
        Top = 312
        Width = 48
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          886.354166666667
          825.5
          127)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'F A R K'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelFark: TQRLabel
        Left = 24
        Top = 341
        Width = 664
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          63.5
          902.229166666667
          1756.83333333333)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'qrlabelFark'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object qrlabelDonem: TQRLabel
        Left = 222
        Top = 24
        Width = 271
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          587.375
          63.5
          717.020833333333)
        Alignment = taCenter
        AlignToBand = False
        AutoSize = False
        AutoStretch = False
        Caption = 'DONEM'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
  end
  object MainMenu1: TMainMenu
    Images = ImageList1
    Left = 593
    Top = 6
    object Rapot1: TMenuItem
      Caption = 'Rapor'
      ImageIndex = 4
      object KapakSayfas1: TMenuItem
        Caption = 'Kapak Sayfasý'
        OnClick = KapakSayfas1Click
      end
      object FaturaListesi1: TMenuItem
        Caption = 'Fatura Listesi'
        OnClick = FaturaListesi1Click
      end
      object DatmListesi1: TMenuItem
        Caption = 'Ýç Daðýtým Listesi'
        OnClick = DatmListesi1Click
      end
      object adeDatmListesi1: TMenuItem
        Caption = 'Ýade Ýç Daðýtým Listesi'
        OnClick = adeDatmListesi1Click
      end
      object TemizlikTutana1: TMenuItem
        Caption = 'Temizlik Tutanaðý'
        OnClick = TemizlikTutana1Click
      end
    end
  end
  object ImageList1: TImageList
    Left = 563
    Top = 6
    Bitmap = {
      494C01010B000E00040010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000004000000001001000000000000020
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      E07FEF3DFF7FFF7FFF7FFF7FFF7FE07F00000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F00000000000000000000000000000000
      E07FEF3DFF7FFF7FFF7FFF7FFF7FE07F00000000000000000000000000000000
      0000000000000000E07FE07FE07F000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000FF7FFF7F0000FF7F00000000FF7F00000000000000000000000000000000
      E07FEF3DFF7FFF7FFF7FFF7FFF7FE07F0000000000000000000000000000FF03
      FF03FF03000000000000EF3DEF3DEF3D00000000000000000000000000000000
      000000000000000000000000000000000000FF0300000000E07FFF7FE07FFF7F
      E07F0000FF7FFF7FFF7FFF7FFF7FFF7F00000000000000000000000000000000
      E07FEF3DFF7FFF7FFF7FFF7FFF7FE07F00000000007C007C007C0000EF3DEF3D
      EF3DEF3DEF3DEF3DEF3DEF3D0000FF7F00000000000000000000000000000000
      000000000000000000000000000000000000FF030000E07FFF7FE07FFF7F0000
      00000000FF7FFF7FFF7FFF7F0000FF7F00000000000000000000000000000000
      000000000000EF3DEF3D00000000EF3D00000000007C007C007C007C00000000
      00000000000000000000FF7F0000FF7F00000000000000000000000000000000
      000000000000000000000000000000000000FF030000FF7FE07FFF7FE07FFF7F
      E07FFF7F0000FF7F00000000FF7FFF7F00000000FF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7F000000000000EF3DEF3DE07F00000000FF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7F0000FF7F0000FF7F00000000000000000000000000000000
      000000000000000000000000000000000000FF030000E07FFF7FE07FFF7F0000
      0000000000000000E07F0000FF7FFF7F00000000FF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7F000000000000EF3DE07FE07F00000000FF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7F0000FF7F0000FF7F00000000000000000000000000000000
      000000000000000000000000000000000000FF030000FF7FE07FFF7FE07FFF7F
      E07FFF7FE07FFF7F0000FF7FFF7FFF7F00000000FF7F00000000FF7F00000000
      0000FF7F000000000000007C00000000EF3D0000FF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7F0000FF7F0000FF7F00000000000000000000000000000000
      000000000000000000000000000000000000FF030000E07FFF7F000000000000
      0000000000000000FF7FFF7FFF7FFF7F00000000FF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7F00000000007C007C007C000000000000FF7FEF3DEF3DFF7FEF3DEF3D
      FF7FEF3DFF7FFF7F0000FF7F0000FF7F00000000000000000000000000000000
      000000000000000000000000000000000000000000000000E07FFF7FE07F0000
      0000E07F0000FF7FFF7F00000000FF7F00000000FF7F0000000000000000FF7F
      0000FF7F0000007C007C007C007C007C00000000FF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7F0000FF7F0000FF7F00000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      E07F0000FF7FFF7FFF7FFF7FFF7FFF7F00000000FF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7F007C007C007C007C007C007C007C0000FF7FEF3DEF3DFF7FEF3DEF3D
      EF3DFF7FFF7FFF7F0000FF7F0000FF7F00000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000E07F
      0000FF7FFF7FFF7FFF7F00000000000000000000FF7F00000000FF7F00000000
      0000000000000000007C007C007C000000000000FF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7F0000FF7F0000FF7F00000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000E07F0000
      FF7FFF7F00000000FF7F0000FF7FFF7F00000000FF7FFF7FFF7FFF7F0000FF7F
      FF7F000000000000007C007C007C0000000000000000FF7F0000FF7F0000FF7F
      0000FF7F0000FF7F0000FF7F0000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000E07F00000000
      FF7FFF7FFF7FFF7FFF7F0000FF7F000000000000FF7F0000F75EFF7F0000FF7F
      000000000000EF3D007C007C007C0000000000000000EF3D0000EF3D0000EF3D
      0000EF3D0000EF3D000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000007C000000000000
      FF7FFF7FFF7FFF7FFF7F00000000000000000000FF7FFF7FFF7FFF7F00000000
      0000007C007C007C007C007C000000000000EF3D0000EF3D0000EF3D0000EF3D
      0000EF3D0000EF3D000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000FF7F0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000EF3D0F000F000F000F00EF3D0000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000EF3D0F000F000F00EF3DEF3D0F000F000F00EF3D00000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000FF7F00000000000000000000
      0000000000000000FF7F00000000000000000000000000000000000000000000
      00000000EF3D0F000F000F000F000F00000000000F000F000F000F000F00EF3D
      0000000000000000000000000000000000000000000000000000000000000000
      E07FE07FE07F0000000000000000000000000000FF7F00000000000000000000
      0000000000000000FF7F00000000000000000000000000000000000000000000
      EF3D0F000F000F000F000F000F0000000000000000000F000F000F000F000F00
      0F00EF3D00000000000000000000000000000000000000000000000000000000
      1042104210420000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000EF3D0F00
      0F000F000F000F000F000F00EF3D0000000000000000EF3D0F000F000F000F00
      0F000F000F00EF3D000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FF7F0000000000000000
      00000000FF7F000000000000000000000000000000000000EF3D0F000F000F00
      0F000F000F000F000F000F000000000000000000000000000F000F000F000F00
      0F000F000F000F000F00EF3D0000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FF7F0000000000000000
      00000000FF7F0000000000000000000000000000EF3D0F000F000F000F000F00
      0F000F000F000F000F00000000000000000000000000000000000F000F000F00
      0F000F000F000F000F000F000F00EF3D00000000000000000000000000000000
      00000000000000000000000000000000000000000000FF7F0000000000000000
      00000000FF7F000000000000000000000000007C007C007C007C007C007C007C
      007C007C007C007C007C007C007C007C007C007C007C007C007C007C007C007C
      007C007C007C007C007C007C007C007C007C000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7F000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000001F001F001F001F001F00
      1F001F001F001F001F00000000000000000000000000000000001F001F001F00
      1F001F001F001F001F001F001F00000000000000000000000000FF7F00000000
      000000000000FF7F00000000000000000000000000000000FF7F000000000000
      00000000FF7F00000000000000000000000000000000000000001F001F001F00
      1F001F001F001F001F001F000000000000000000000000001F001F001F001F00
      1F001F001F001F001F0000000000000000000000000000000000FF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000001F00
      1F001F001F001F001F001F000000000000000000000000001F001F001F001F00
      1F001F001F0000000000000000000000000000000000000000000000FF7F0000
      0000000000000000FF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00001F001F001F001F001F001F0000000000000000001F001F001F001F001F00
      1F000000000000000000000000000000000000000000000000000000FF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7F0000000000000000000000000000FF7F00000000
      000000000000FF7F000000000000000000000000000000000000000000000000
      0000000000001F001F001F001F001F00000000001F001F001F001F001F000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000001F001F001F00000000001F001F001F00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000001F001F001F001F0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000420042004200420042
      004200420042004200000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07F00000042004200420042
      004200420042004200420000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000FF7FE07F0000004200420042
      004200420042004200420042000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042004200420042
      0042004200420042004200420042000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07FFF7FE07F000000420042
      004200420042004200420042004200000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000420042000000000000000000000000000000000000
      0000000000000000000000000000000000000000FF7FE07FFF7FE07F00000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07FFF7FE07FFF7FE07FFF7F
      E07FFF7FE07F000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000FF7FE07FFF7FE07FFF7FE07F
      FF7FE07FFF7F000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07FFF7FE07F000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F00000000000000000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F0000FF7F000000000000000000000000000000420000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F00000000000000000000000000000000000000420000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000400000000100010000000000000200000000000000000000
      000000000000000000000000FFFFFF0000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000FC00FC00FFE30000FC00FC00FC410000
      2000FC00880000000000FC000000000000000000000000000000000000000000
      0000000000000000000000000000000000000023000000000000000100000000
      E000000000000000F800002300000000F000006300010000E00100C300010000
      C4030107000D0000EC0703FFD5530000FFFEFFFFFFFFFFFFC007FFFFFFF81FFF
      BFEB07C1FFE007FF000507C1FF8181FF7E3107C1FE03C07F7E350101F803C01F
      00060001E007E0077FEA0201800FF0018014020100000000C00A8003C00FF003
      E001C107F007E00FE007C107FC07E03FF007E38FFF03C0FFF003E38FFFC183FF
      F803E38FFFF18FFFFFFFFFFFFFFC3FFFFFFFFFFFFFFFFFFFFFFFC001FFFFFFFF
      C0078031EFFD001FC0078031C7FF000FC0078031C3FB0007C0078001E3F70003
      C0078001F1E70001C0078001F8CF0000C0078FF1FC1F001FC0078FF1FE3F001F
      C0078FF1FC1F001FC0078FF1F8CF8FF1C00F8FF1E1E7FFF9C01F8FF5C3F3FF75
      C03F8001C7FDFF8FFFFFFFFFFFFFFFFF00000000000000000000000000000000
      000000000000}
  end
  object dsrcFATURA: TDataSource
    DataSet = queryFATURA
    Left = 595
    Top = 205
  end
  object queryFATURA: TQuery
    DatabaseName = 'ORTEG2002'
    RequestLive = True
    SQL.Strings = (
      
        'select TARIH, BELGE_NO, FIRMA_ADI, SUM(ALIS_TUTARI) ALIS_TOPLAMI' +
        ', SUM(SATIS_TUTARI) SATIS_TOPLAMI from icdagitim'
      
        'WHERE DONEM=:DONEM AND FIRMA_KODU > -1 AND BELGE_TURU="GIRDI BEL' +
        'GESÝ" '
      'group by TARIH, BELGE_NO, FIRMA_ADI'
      'ORDER BY BELGE_NO')
    Left = 595
    Top = 175
    ParamData = <
      item
        DataType = ftString
        Name = 'DONEM'
        ParamType = ptUnknown
      end>
    object queryFATURATARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'ORTEG2002."icdagitim.DB".TARIH'
    end
    object queryFATURABELGE_NO: TStringField
      FieldName = 'BELGE_NO'
      Origin = 'ORTEG2002."icdagitim.DB".BELGE_NO'
      Size = 15
    end
    object queryFATURAFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Origin = 'ORTEG2002."icdagitim.DB".FIRMA_ADI'
      Size = 30
    end
    object queryFATURAALIS_TOPLAMI: TFloatField
      FieldName = 'ALIS_TOPLAMI'
      Origin = 'ORTEG2002."icdagitim.DB".ALIS_TUTARI'
      OnGetText = queryFATURAALIS_TOPLAMIGetText
      DisplayFormat = '###,###,###,###'
    end
    object queryFATURASATIS_TOPLAMI: TFloatField
      FieldName = 'SATIS_TOPLAMI'
      Origin = 'ORTEG2002."icdagitim.DB".SATIS_TUTARI'
      DisplayFormat = '###,###,###,###'
    end
  end
  object queryICDAGITIM: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      
        'select TARIH, BELGE_NO, FIRMA_ADI, SUM(ALIS_TUTARI) ALIS_TOPLAMI' +
        ', SUM(SATIS_TUTARI) SATIS_TOPLAMI from icdagitim'
      'WHERE DONEM=:DONEM AND BELGE_TURU="CIKTI BELGESÝ" '
      'group by TARIH, BELGE_NO, FIRMA_ADI'
      'ORDER BY BELGE_NO')
    Left = 625
    Top = 172
    ParamData = <
      item
        DataType = ftString
        Name = 'DONEM'
        ParamType = ptUnknown
      end>
    object queryICDAGITIMTARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'ORTEG2002."icdagitim.DB".TARIH'
    end
    object queryICDAGITIMBELGE_NO: TStringField
      FieldName = 'BELGE_NO'
      Origin = 'ORTEG2002."icdagitim.DB".BELGE_NO'
      Size = 15
    end
    object queryICDAGITIMFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Origin = 'ORTEG2002."icdagitim.DB".FIRMA_ADI'
      Size = 30
    end
    object queryICDAGITIMALIS_TOPLAMI: TFloatField
      FieldName = 'ALIS_TOPLAMI'
      Origin = 'ORTEG2002."icdagitim.DB".ALIS_TUTARI'
      OnGetText = queryICDAGITIMALIS_TOPLAMIGetText
      DisplayFormat = '###,###,###,###'
    end
    object queryICDAGITIMSATIS_TOPLAMI: TFloatField
      FieldName = 'SATIS_TOPLAMI'
      Origin = 'ORTEG2002."icdagitim.DB".SATIS_TUTARI'
      DisplayFormat = '###,###,###,###'
    end
  end
  object dsrcIC_DAGITIM: TDataSource
    DataSet = queryICDAGITIM
    Left = 625
    Top = 205
  end
  object queryIADE_ICDAGITIM: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      
        'select TARIH, BELGE_NO, FIRMA_ADI, SUM(ALIS_TUTARI) ALIS_TOPLAMI' +
        ', SUM(SATIS_TUTARI) SATIS_TOPLAMI from icdagitim'
      
        'WHERE DONEM=:DONEM AND FIRMA_KODU = -1 AND BELGE_TURU="IADE BELG' +
        'ESÝ" '
      'group by TARIH, BELGE_NO, FIRMA_ADI'
      'ORDER BY BELGE_NO')
    Left = 655
    Top = 175
    ParamData = <
      item
        DataType = ftString
        Name = 'DONEM'
        ParamType = ptUnknown
      end>
    object queryIADE_ICDAGITIMTARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'ORTEG2002."icdagitim.DB".TARIH'
    end
    object queryIADE_ICDAGITIMBELGE_NO: TStringField
      FieldName = 'BELGE_NO'
      Origin = 'ORTEG2002."icdagitim.DB".BELGE_NO'
      Size = 15
    end
    object queryIADE_ICDAGITIMFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Origin = 'ORTEG2002."icdagitim.DB".FIRMA_ADI'
      Size = 30
    end
    object queryIADE_ICDAGITIMALIS_TOPLAMI: TFloatField
      FieldName = 'ALIS_TOPLAMI'
      Origin = 'ORTEG2002."icdagitim.DB".ALIS_TUTARI'
      OnGetText = queryIADE_ICDAGITIMALIS_TOPLAMIGetText
      DisplayFormat = '###,###,###,###'
    end
    object queryIADE_ICDAGITIMSATIS_TOPLAMI: TFloatField
      FieldName = 'SATIS_TOPLAMI'
      Origin = 'ORTEG2002."icdagitim.DB".SATIS_TUTARI'
      DisplayFormat = '###,###,###,###'
    end
  end
  object dsrcIADE_ICDAGITIM: TDataSource
    DataSet = queryIADE_ICDAGITIM
    Left = 655
    Top = 205
  end
  object queryTEMIZLIK: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      
        'select TARIH, BELGE_NO, FIRMA_ADI, SUM(ALIS_TUTARI) ALIS_TOPLAMI' +
        ', SUM(SATIS_TUTARI) SATIS_TOPLAMI from icdagitim'
      'WHERE DONEM=:DONEM AND BELGE_TURU="TEMIZLIK TUTANAGI"'
      'group by TARIH, BELGE_NO, FIRMA_ADI'
      'ORDER BY BELGE_NO')
    Left = 685
    Top = 175
    ParamData = <
      item
        DataType = ftString
        Name = 'DONEM'
        ParamType = ptUnknown
      end>
    object queryTEMIZLIKTARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'ORTEG2002."icdagitim.DB".TARIH'
    end
    object queryTEMIZLIKBELGE_NO: TStringField
      FieldName = 'BELGE_NO'
      Origin = 'ORTEG2002."icdagitim.DB".BELGE_NO'
      Size = 15
    end
    object queryTEMIZLIKFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Origin = 'ORTEG2002."icdagitim.DB".FIRMA_ADI'
      Size = 30
    end
    object queryTEMIZLIKALIS_TOPLAMI: TFloatField
      FieldName = 'ALIS_TOPLAMI'
      Origin = 'ORTEG2002."icdagitim.DB".ALIS_TUTARI'
      OnGetText = queryTEMIZLIKALIS_TOPLAMIGetText
      DisplayFormat = '###,###,###,###'
    end
    object queryTEMIZLIKSATIS_TOPLAMI: TFloatField
      FieldName = 'SATIS_TOPLAMI'
      Origin = 'ORTEG2002."icdagitim.DB".SATIS_TUTARI'
      DisplayFormat = '###,###,###,###'
    end
  end
  object dsrcTEMIZLIK: TDataSource
    DataSet = queryTEMIZLIK
    Left = 685
    Top = 205
  end
  object queryGIRDITOPLAMI: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select sum(ALIS_TUTARI) GIRDI_TOPLAMI  from stokhar'
      'where tarih <= :tarih and belge_turu='#39'GIRDI'#39)
    Left = 564
    Top = 205
    ParamData = <
      item
        DataType = ftDateTime
        Name = 'tarih'
        ParamType = ptUnknown
      end>
    object queryGIRDITOPLAMIGIRDI_TOPLAMI: TFloatField
      FieldName = 'GIRDI_TOPLAMI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_TUTARI'
    end
  end
  object queryCIKTITOPLAMI: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select sum(ALIS_TUTARI) CIKTI_TOPLAMI  from stokhar'
      'where tarih <= :tarih and belge_turu!='#39'GIRDI'#39)
    Left = 564
    Top = 175
    ParamData = <
      item
        DataType = ftDateTime
        Name = 'tarih'
        ParamType = ptUnknown
      end>
    object queryCIKTITOPLAMICIKTI_TOPLAMI: TFloatField
      FieldName = 'CIKTI_TOPLAMI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_TUTARI'
    end
  end
end
