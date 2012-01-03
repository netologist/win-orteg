object frmCinsi: TfrmCinsi
  Left = 361
  Top = 320
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Cinsi Tanýmlarý'
  ClientHeight = 218
  ClientWidth = 232
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
    Left = 1
    Top = -1
    Width = 230
    Height = 217
    TabOrder = 0
    object DBNavigator1: TDBNavigator
      Left = 9
      Top = 15
      Width = 210
      Height = 22
      DataSource = datamoduleORTEG.dsrcCINSI
      TabOrder = 0
    end
    object DBGrid1: TDBGrid
      Left = 9
      Top = 45
      Width = 211
      Height = 162
      DataSource = datamoduleORTEG.dsrcCINSI
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'CINSI_ADI'
          Title.Alignment = taCenter
          Title.Caption = 'Cinsi'
          Width = 175
          Visible = True
        end>
    end
  end
end
