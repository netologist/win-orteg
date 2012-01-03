object frmBirimKarti: TfrmBirimKarti
  Left = 479
  Top = 253
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Birim Karti'
  ClientHeight = 217
  ClientWidth = 233
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
  object GroupBox1: TGroupBox
    Left = 2
    Top = -1
    Width = 230
    Height = 217
    TabOrder = 0
    object DBNavigator1: TDBNavigator
      Left = 9
      Top = 15
      Width = 210
      Height = 22
      DataSource = datamoduleORTEG.dsrcBIRIMI
      TabOrder = 0
    end
    object DBGrid1: TDBGrid
      Left = 9
      Top = 45
      Width = 211
      Height = 162
      DataSource = datamoduleORTEG.dsrcBIRIMI
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'BIRIMADI'
          Title.Alignment = taCenter
          Title.Caption = 'Birim Adý'
          Width = 175
          Visible = True
        end>
    end
  end
end
