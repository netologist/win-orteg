object frmHareketOzellikleri: TfrmHareketOzellikleri
  Left = 301
  Top = 227
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Hareket Özellikleri'
  ClientHeight = 247
  ClientWidth = 516
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
    Left = 2
    Top = 0
    Width = 513
    Height = 211
    TabOrder = 0
    object Bevel1: TBevel
      Left = 243
      Top = 60
      Width = 262
      Height = 97
      Style = bsRaised
    end
    object Bevel2: TBevel
      Left = 8
      Top = 14
      Width = 227
      Height = 185
      Style = bsRaised
    end
    object Label1: TLabel
      Left = 17
      Top = 21
      Width = 50
      Height = 13
      Caption = 'Stok Kodu'
    end
    object Label2: TLabel
      Left = 17
      Top = 60
      Width = 40
      Height = 13
      Caption = 'Stok Adý'
    end
    object Label3: TLabel
      Left = 249
      Top = 112
      Width = 55
      Height = 13
      Caption = 'Hareket No'
    end
    object Label4: TLabel
      Left = 377
      Top = 112
      Width = 44
      Height = 13
      Caption = 'Belge No'
    end
    object Label5: TLabel
      Left = 249
      Top = 67
      Width = 63
      Height = 13
      Caption = 'Hareket Türü'
    end
    object Label6: TLabel
      Left = 245
      Top = 162
      Width = 64
      Height = 13
      Caption = 'Ýç Daðýtým No'
    end
    object Label7: TLabel
      Left = 378
      Top = 67
      Width = 67
      Height = 13
      Caption = 'Hareket Tarihi'
    end
    object Label9: TLabel
      Left = 243
      Top = 16
      Width = 61
      Height = 13
      Caption = 'Firma / Ünite'
    end
    object Label10: TLabel
      Left = 17
      Top = 105
      Width = 29
      Height = 13
      Caption = 'Miktar'
    end
    object Label11: TLabel
      Left = 125
      Top = 105
      Width = 24
      Height = 13
      Caption = 'Birimi'
    end
    object Label12: TLabel
      Left = 18
      Top = 149
      Width = 38
      Height = 13
      Caption = 'Miktar 2'
    end
    object Label13: TLabel
      Left = 124
      Top = 149
      Width = 31
      Height = 13
      Caption = 'Birim 2'
    end
    object Label8: TLabel
      Left = 376
      Top = 162
      Width = 76
      Height = 13
      Caption = 'Ýç Daðýtým Tarihi'
    end
    object dbeditStokKodu: TDBEdit
      Left = 17
      Top = 36
      Width = 94
      Height = 21
      Color = 15658734
      DataField = 'STOK_KODU'
      DataSource = dsrscSTOKHAR
      ReadOnly = True
      TabOrder = 0
    end
    object dbeditStokAdi: TDBEdit
      Left = 17
      Top = 75
      Width = 209
      Height = 21
      Color = 15658734
      DataField = 'STOK_ADI'
      DataSource = dsrscSTOKHAR
      ReadOnly = True
      TabOrder = 1
    end
    object dbeditFirma: TDBEdit
      Left = 243
      Top = 30
      Width = 259
      Height = 21
      Color = 15658734
      DataField = 'FIRMA_ADI'
      DataSource = dsrscSTOKHAR
      ReadOnly = True
      TabOrder = 2
    end
    object dbeditHareketTuru: TDBEdit
      Left = 249
      Top = 82
      Width = 121
      Height = 21
      Color = 15658734
      DataField = 'BELGE_TURU'
      DataSource = dsrscSTOKHAR
      ReadOnly = True
      TabOrder = 3
    end
    object dbeditHareketNo: TDBEdit
      Left = 249
      Top = 127
      Width = 121
      Height = 21
      Color = 15658734
      DataField = 'HAREKET_NO'
      DataSource = dsrscSTOKHAR
      ReadOnly = True
      TabOrder = 4
    end
    object dbeditIcDagitim: TDBEdit
      Left = 245
      Top = 177
      Width = 125
      Height = 21
      Color = 15658734
      DataField = 'IC_DAGITIM_NO'
      DataSource = dsrscSTOKHAR
      ReadOnly = True
      TabOrder = 5
    end
    object dbeditBelgeNo: TDBEdit
      Left = 376
      Top = 127
      Width = 121
      Height = 21
      Color = 15658734
      DataField = 'BELGE'
      DataSource = dsrscSTOKHAR
      ReadOnly = True
      TabOrder = 6
    end
    object dbeditHareketTarihi: TDBEdit
      Left = 375
      Top = 82
      Width = 121
      Height = 21
      Color = 15658734
      DataField = 'TARIH'
      DataSource = dsrscSTOKHAR
      ReadOnly = True
      TabOrder = 7
    end
    object dbeditMiktar: TDBEdit
      Left = 17
      Top = 120
      Width = 100
      Height = 21
      Color = 15658734
      DataField = 'MIKTAR'
      DataSource = dsrscSTOKHAR
      ReadOnly = True
      TabOrder = 8
    end
    object dbeditBirimi: TDBEdit
      Left = 124
      Top = 120
      Width = 100
      Height = 21
      Color = 15658734
      DataField = 'BIRIMI'
      DataSource = dsrscSTOKHAR
      ReadOnly = True
      TabOrder = 9
    end
    object dbeditBirim2: TDBEdit
      Left = 124
      Top = 164
      Width = 100
      Height = 21
      Color = 15658734
      DataField = 'BIRIM2'
      DataSource = dsrscSTOKHAR
      ReadOnly = True
      TabOrder = 10
    end
    object dbeditMiktar2: TDBEdit
      Left = 18
      Top = 164
      Width = 100
      Height = 21
      Color = 15658734
      DataField = 'MIKTAR2'
      DataSource = dsrscSTOKHAR
      ReadOnly = True
      TabOrder = 11
    end
    object dbeditTarih: TDBEdit
      Left = 376
      Top = 177
      Width = 125
      Height = 21
      Color = 15658734
      DataField = 'TARIH'
      DataSource = dsrcICDAGITIM
      ReadOnly = True
      TabOrder = 12
    end
  end
  object BitBtn1: TBitBtn
    Left = 216
    Top = 217
    Width = 85
    Height = 27
    Caption = 'Tamam'
    Default = True
    TabOrder = 1
    OnClick = BitBtn1Click
    Glyph.Data = {
      DE010000424DDE01000000000000760000002800000024000000120000000100
      0400000000006801000000000000000000001000000000000000000000000000
      80000080000000808000800000008000800080800000C0C0C000808080000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
      3333333333333333333333330000333333333333333333333333F33333333333
      00003333344333333333333333388F3333333333000033334224333333333333
      338338F3333333330000333422224333333333333833338F3333333300003342
      222224333333333383333338F3333333000034222A22224333333338F338F333
      8F33333300003222A3A2224333333338F3838F338F33333300003A2A333A2224
      33333338F83338F338F33333000033A33333A222433333338333338F338F3333
      0000333333333A222433333333333338F338F33300003333333333A222433333
      333333338F338F33000033333333333A222433333333333338F338F300003333
      33333333A222433333333333338F338F00003333333333333A22433333333333
      3338F38F000033333333333333A223333333333333338F830000333333333333
      333A333333333333333338330000333333333333333333333333333333333333
      0000}
    NumGlyphs = 2
  end
  object dsrscSTOKHAR: TDataSource
    DataSet = querySTOKHAR
    Left = 3
    Top = 216
  end
  object dsrcICDAGITIM: TDataSource
    DataSet = queryICDAGITIM
    Left = 78
    Top = 216
  end
  object queryICDAGITIM: TQuery
    DatabaseName = 'ORTEG2002'
    DataSource = dsrscSTOKHAR
    SQL.Strings = (
      'select * from icdagitim'
      'where hareket_no=:hareket_no')
    Left = 108
    Top = 216
    ParamData = <
      item
        DataType = ftFloat
        Name = 'hareket_no'
        ParamType = ptUnknown
      end>
  end
  object querySTOKHAR: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from stokhar'
      'where hareket_no=:hareket_no')
    Left = 30
    Top = 216
    ParamData = <
      item
        DataType = ftFloat
        Name = 'hareket_no'
        ParamType = ptUnknown
      end>
  end
end
