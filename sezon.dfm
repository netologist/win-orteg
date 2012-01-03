object frmSezonSecimi: TfrmSezonSecimi
  Left = 408
  Top = 237
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Sezon Seçimi'
  ClientHeight = 59
  ClientWidth = 253
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 1
    Top = -1
    Width = 173
    Height = 59
    TabOrder = 0
    object Label1: TLabel
      Left = 35
      Top = 19
      Width = 36
      Height = 26
      Alignment = taRightJustify
      Caption = 'Geçerli Sezon'
      WordWrap = True
    end
    object UpDown1: TUpDown
      Left = 118
      Top = 19
      Width = 16
      Height = 27
      Anchors = [akTop, akRight]
      Associate = editSezonYili
      Min = 2000
      Max = 2100
      Position = 2000
      TabOrder = 0
      Thousands = False
      Wrap = False
    end
    object editSezonYili: TEdit
      Left = 78
      Top = 19
      Width = 40
      Height = 27
      AutoSize = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Comic Sans MS'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      Text = '2000'
    end
  end
  object BitBtn1: TBitBtn
    Left = 177
    Top = 4
    Width = 75
    Height = 25
    Caption = 'Tamam'
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 177
    Top = 32
    Width = 75
    Height = 25
    Caption = 'Ýptal'
    TabOrder = 2
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
end
