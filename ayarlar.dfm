object frmAyarlar: TfrmAyarlar
  Left = 254
  Top = 146
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Ayarlar'
  ClientHeight = 255
  ClientWidth = 518
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
    Left = 1
    Top = -1
    Width = 432
    Height = 254
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 51
      Width = 44
      Height = 13
      Caption = 'Kar Oraný'
      WordWrap = True
    end
    object Label2: TLabel
      Left = 10
      Top = 124
      Width = 44
      Height = 13
      Caption = 'Kar Oraný'
      WordWrap = True
    end
    object Label3: TLabel
      Left = 10
      Top = 161
      Width = 69
      Height = 13
      Caption = 'Ýþletmeler Amiri'
    end
    object Label4: TLabel
      Left = 151
      Top = 161
      Width = 102
      Height = 13
      Caption = 'Muhasebe Kýsým Amiri'
    end
    object Label5: TLabel
      Left = 291
      Top = 161
      Width = 90
      Height = 13
      Caption = 'Anakiler Kýsým Amiri'
    end
    object Label6: TLabel
      Left = 256
      Top = 13
      Width = 119
      Height = 13
      Caption = 'Katsayýlý Yuvarlama Oraný'
    end
    object Label7: TLabel
      Left = 256
      Top = 61
      Width = 108
      Height = 13
      Caption = 'Küsüratý Sýfýrlama Oraný'
    end
    object Bevel1: TBevel
      Left = 247
      Top = 7
      Width = 2
      Height = 145
    end
    object Bevel2: TBevel
      Left = 6
      Top = 152
      Width = 418
      Height = 2
    end
    object Label9: TLabel
      Left = 256
      Top = 107
      Width = 112
      Height = 13
      Caption = 'Temizlik Çýkýlacak Ünite'
    end
    object dbeditTabldotKarOrani: TDBEdit
      Left = 58
      Top = 50
      Width = 180
      Height = 21
      DataField = 'TabldotKarOrani'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      TabOrder = 0
    end
    object dbeditUniteKarOrani: TDBEdit
      Left = 58
      Top = 124
      Width = 180
      Height = 21
      DataField = 'UniteKarOrani'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      TabOrder = 1
    end
    object dbeditKatsayiliYuvarlama: TDBEdit
      Left = 256
      Top = 30
      Width = 165
      Height = 21
      DataField = 'KatsayiYuvarlamaOrani'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      TabOrder = 2
    end
    object dbcomboIsletmelerAmiriAdi: TDBComboBox
      Left = 8
      Top = 177
      Width = 135
      Height = 21
      DataField = 'IsletmelerAmiriAdi'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      ItemHeight = 13
      TabOrder = 3
      OnChange = dbcomboIsletmelerAmiriAdiChange
    end
    object dbcomboMuhasebeKsAAdi: TDBComboBox
      Left = 149
      Top = 177
      Width = 135
      Height = 21
      DataField = 'MuhasebeKsAmiriAdi'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      ItemHeight = 13
      TabOrder = 4
      OnChange = dbcomboMuhasebeKsAAdiChange
    end
    object dbcomboAnakilerKsAAdi: TDBComboBox
      Left = 289
      Top = 177
      Width = 135
      Height = 21
      DataField = 'AnakilerKsAmiriAdi'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      ItemHeight = 13
      TabOrder = 5
      OnChange = dbcomboAnakilerKsAAdiChange
    end
    object dbeditIsletmelerAmiriRutbe: TDBEdit
      Left = 8
      Top = 200
      Width = 135
      Height = 21
      DataField = 'IsletmelerAmiriRutbesi'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      TabOrder = 6
    end
    object dbeditIsletmelerAmiriGorev: TDBEdit
      Left = 8
      Top = 224
      Width = 135
      Height = 21
      DataField = 'IsletmelerAmiriGorevi'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      TabOrder = 7
    end
    object dbeditMuhasebeKsARutbe: TDBEdit
      Left = 149
      Top = 201
      Width = 135
      Height = 21
      DataField = 'MuhasebeKsAmiriRutbesi'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      TabOrder = 8
    end
    object dbeditMuhasebeKsAGorev: TDBEdit
      Left = 149
      Top = 224
      Width = 135
      Height = 21
      DataField = 'MuhasebeKsAmiriGorevi'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      TabOrder = 9
    end
    object dbeditAnakilerKsARutbe: TDBEdit
      Left = 289
      Top = 200
      Width = 135
      Height = 21
      DataField = 'AnakilerKsAmiriRutbesi'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      TabOrder = 10
    end
    object dbeditAnakilerKsAGorev: TDBEdit
      Left = 289
      Top = 224
      Width = 135
      Height = 21
      DataField = 'AnakilerKsAmiriGorevi'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      TabOrder = 11
    end
    object dbeditKusuratliYuvarlama: TDBEdit
      Left = 256
      Top = 78
      Width = 165
      Height = 21
      DataField = 'KusuratYuvarlamaOrani'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      TabOrder = 12
    end
    object DBRadioGroup1: TDBRadioGroup
      Left = 7
      Top = 7
      Width = 232
      Height = 39
      Caption = ' Tabldot '
      Columns = 2
      DataField = 'TabldotYuvarlamaOrani'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      Items.Strings = (
        'Küsürata Yuvarla'
        'Katsayýya Yuvarla')
      TabOrder = 13
    end
    object DBRadioGroup2: TDBRadioGroup
      Left = 7
      Top = 81
      Width = 232
      Height = 39
      Caption = ' Ünite '
      Columns = 2
      DataField = 'UniteYuvarlamaOrani'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      Items.Strings = (
        'Küsürata Yuvarla'
        'Katsayýya Yuvarla')
      TabOrder = 14
    end
    object dbcomboTemizlikUnitesi: TDBComboBox
      Left = 256
      Top = 123
      Width = 165
      Height = 21
      DataField = 'TemizlikUnitesi'
      DataSource = datamoduleORTEG.dsrcAYARLAR
      ItemHeight = 13
      TabOrder = 15
    end
  end
  object BitBtn1: TBitBtn
    Left = 439
    Top = 5
    Width = 75
    Height = 25
    Caption = 'Tamam'
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 439
    Top = 35
    Width = 75
    Height = 25
    Caption = 'Ýptal'
    TabOrder = 2
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
end
