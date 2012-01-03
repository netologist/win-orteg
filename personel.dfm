object frmImzaYetkilileri: TfrmImzaYetkilileri
  Left = 255
  Top = 135
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Ýmza Yekilileri'
  ClientHeight = 216
  ClientWidth = 470
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
    Width = 468
    Height = 217
    TabOrder = 0
    object DBNavigator1: TDBNavigator
      Left = 10
      Top = 13
      Width = 210
      Height = 22
      DataSource = datamoduleORTEG.dsrcPERSONEL
      TabOrder = 0
    end
    object DBGrid1: TDBGrid
      Left = 8
      Top = 40
      Width = 451
      Height = 168
      DataSource = datamoduleORTEG.dsrcPERSONEL
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      OnKeyPress = DBGrid1KeyPress
      Columns = <
        item
          Expanded = False
          FieldName = 'ADI_SOYADI'
          Title.Caption = 'Adý Soyadý'
          Width = 160
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'RUTBESI'
          Title.Caption = 'Rütbesi'
          Width = 105
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'GOREVI'
          Title.Caption = 'Görevi'
          Width = 147
          Visible = True
        end>
    end
  end
end
