object frmDonem: TfrmDonem
  Left = 560
  Top = 111
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'frmDonem'
  ClientHeight = 210
  ClientWidth = 344
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
    Width = 342
    Height = 209
    TabOrder = 0
    object DBNavigator1: TDBNavigator
      Left = 7
      Top = 14
      Width = 210
      Height = 22
      DataSource = datamoduleORTEG.dsrcDONEM
      TabOrder = 0
    end
    object DBGrid1: TDBGrid
      Left = 7
      Top = 40
      Width = 327
      Height = 162
      DataSource = datamoduleORTEG.dsrcDONEM
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'DONEM_TANIMI'
          Title.Caption = 'Dönem Adý'
          Width = 137
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'BASLANGIC'
          Title.Alignment = taCenter
          Title.Caption = 'Baþlangýç'
          Width = 75
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'BITIS'
          Title.Alignment = taCenter
          Title.Caption = 'Bitiþ'
          Width = 75
          Visible = True
        end>
    end
  end
end
