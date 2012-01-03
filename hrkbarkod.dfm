object frmHarekettenBarkod: TfrmHarekettenBarkod
  Left = 487
  Top = 412
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Hareketten Barkod'
  ClientHeight = 119
  ClientWidth = 268
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
    Top = 0
    Width = 268
    Height = 118
    TabOrder = 0
    object DBGrid1: TDBGrid
      Left = 8
      Top = 14
      Width = 251
      Height = 94
      DataSource = datamoduleORTEG.dsrcBARKOD
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'BARKOD_NO'
          Width = 217
          Visible = True
        end>
    end
  end
end
