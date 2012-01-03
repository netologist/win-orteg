object frmFirma: TfrmFirma
  Left = 334
  Top = 157
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Firma Kartý'
  ClientHeight = 241
  ClientWidth = 483
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object ToolBar1: TToolBar
    Left = 0
    Top = 0
    Width = 483
    Height = 29
    Caption = 'ToolBar1'
    Flat = True
    Images = ImageList1
    TabOrder = 0
    object tbtnYENI: TToolButton
      Left = 0
      Top = 0
      Caption = 'Yeni'
      ImageIndex = 0
      MenuItem = Yeni1
    end
    object tbtnKAYDET: TToolButton
      Left = 23
      Top = 0
      Caption = 'Kaydet'
      ImageIndex = 1
      MenuItem = Kaydet1
    end
    object tbtnSIL: TToolButton
      Left = 46
      Top = 0
      Caption = 'Sil'
      ImageIndex = 2
      MenuItem = Sil1
    end
    object ToolButton4: TToolButton
      Left = 69
      Top = 0
      Width = 8
      Caption = 'ToolButton4'
      ImageIndex = 3
      Style = tbsSeparator
    end
    object tbtnAC: TToolButton
      Left = 77
      Top = 0
      Caption = 'Aç'
      ImageIndex = 3
      MenuItem = A1
    end
  end
  object PageControl1: TPageControl
    Left = 0
    Top = 28
    Width = 483
    Height = 213
    ActivePage = TabSheet1
    TabOrder = 1
    OnChange = PageControl1Change
    object TabSheet1: TTabSheet
      Caption = 'Firma Kartý'
      object GroupBox1: TGroupBox
        Left = 3
        Top = -1
        Width = 469
        Height = 184
        TabOrder = 0
        object Label1: TLabel
          Left = 11
          Top = 15
          Width = 53
          Height = 13
          Caption = 'Firma Kodu'
        end
        object Label2: TLabel
          Left = 11
          Top = 44
          Width = 43
          Height = 13
          Caption = 'Firma Adý'
        end
        object Label3: TLabel
          Left = 11
          Top = 74
          Width = 27
          Height = 13
          Caption = 'Adres'
        end
        object Label6: TLabel
          Left = 306
          Top = 16
          Width = 59
          Height = 13
          Caption = 'Vergi Dairesi'
        end
        object Label7: TLabel
          Left = 306
          Top = 64
          Width = 41
          Height = 13
          Caption = 'Vergi No'
        end
        object Label4: TLabel
          Left = 11
          Top = 126
          Width = 36
          Height = 13
          Caption = 'Telefon'
        end
        object Label5: TLabel
          Left = 11
          Top = 153
          Width = 23
          Height = 13
          Caption = 'Faks'
        end
        object Bevel1: TBevel
          Left = 297
          Top = 6
          Width = 2
          Height = 175
        end
        object dbeditFirmaKodu: TDBEdit
          Left = 71
          Top = 15
          Width = 103
          Height = 21
          CharCase = ecUpperCase
          DataField = 'FIRMA_KODU'
          DataSource = datamoduleORTEG.dsrcFIRMA
          TabOrder = 0
          OnKeyPress = dbeditFirmaKoduKeyPress
        end
        object dbeditFirmaAdi: TDBEdit
          Left = 71
          Top = 43
          Width = 179
          Height = 21
          CharCase = ecUpperCase
          DataField = 'FIRMA_ADI'
          DataSource = datamoduleORTEG.dsrcFIRMA
          TabOrder = 1
          OnKeyPress = dbeditFirmaAdiKeyPress
        end
        object dbeditAdres1: TDBEdit
          Left = 71
          Top = 71
          Width = 215
          Height = 21
          CharCase = ecUpperCase
          DataField = 'ADRES_1'
          DataSource = datamoduleORTEG.dsrcFIRMA
          TabOrder = 2
          OnKeyPress = dbeditAdres1KeyPress
        end
        object dbeditAdres2: TDBEdit
          Left = 71
          Top = 98
          Width = 215
          Height = 21
          CharCase = ecUpperCase
          DataField = 'ADRES_2'
          DataSource = datamoduleORTEG.dsrcFIRMA
          TabOrder = 3
          OnKeyPress = dbeditAdres2KeyPress
        end
        object dbeditVD: TDBEdit
          Left = 306
          Top = 33
          Width = 154
          Height = 21
          CharCase = ecUpperCase
          DataField = 'VD'
          DataSource = datamoduleORTEG.dsrcFIRMA
          TabOrder = 6
          OnKeyPress = dbeditVDKeyPress
        end
        object dbeditVN: TDBEdit
          Left = 306
          Top = 81
          Width = 152
          Height = 21
          CharCase = ecUpperCase
          DataField = 'VN'
          DataSource = datamoduleORTEG.dsrcFIRMA
          TabOrder = 7
          OnKeyPress = dbeditVNKeyPress
        end
        object dbeditTelefon: TDBEdit
          Left = 71
          Top = 126
          Width = 179
          Height = 21
          CharCase = ecUpperCase
          DataField = 'TELEFON'
          DataSource = datamoduleORTEG.dsrcFIRMA
          TabOrder = 4
          OnKeyPress = dbeditTelefonKeyPress
        end
        object dbeditFaks: TDBEdit
          Left = 71
          Top = 154
          Width = 179
          Height = 21
          CharCase = ecUpperCase
          DataField = 'FAKS'
          DataSource = datamoduleORTEG.dsrcFIRMA
          TabOrder = 5
          OnKeyPress = dbeditFaksKeyPress
        end
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Yetkililer'
      ImageIndex = 1
      object DBGrid1: TDBGrid
        Left = 2
        Top = 3
        Width = 471
        Height = 178
        DataSource = dsrcYETKILI
        PopupMenu = popupYETKILI
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'MS Sans Serif'
        TitleFont.Style = []
        OnKeyPress = DBGrid1KeyPress
        Columns = <
          item
            Expanded = False
            FieldName = 'ADI'
            Title.Caption = 'Adý Soyadý'
            Width = 165
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'GOREVI'
            Title.Caption = 'Görevi'
            Width = 110
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'TELEFON'
            Title.Caption = 'Telefonu'
            Width = 100
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'DAHILI'
            Title.Caption = 'Dahili'
            Width = 55
            Visible = True
          end>
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'Firmadan Gelen'
      ImageIndex = 2
      object DBGrid2: TDBGrid
        Left = 2
        Top = 2
        Width = 470
        Height = 179
        DataSource = dsrcGIRISLERI
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
            Width = 60
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'BELGE'
            Title.Caption = 'Blg. No'
            Width = 43
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'STOK_ADI'
            Title.Alignment = taCenter
            Title.Caption = 'Cinsi'
            Width = 103
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'MIKTAR'
            Title.Alignment = taRightJustify
            Title.Caption = 'Miktar'
            Width = 50
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'BIRIMI'
            Title.Alignment = taCenter
            Title.Caption = 'Birim'
            Width = 34
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'ALIS_FIYATI'
            Title.Alignment = taRightJustify
            Title.Caption = 'Alýþ Fiyatý'
            Width = 70
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'SATIS_FIYATI'
            Title.Alignment = taRightJustify
            Title.Caption = 'Satýþ Fiyatý'
            Width = 70
            Visible = True
          end>
      end
    end
    object TabSheet4: TTabSheet
      Caption = 'Firmaya Ýade Edilen'
      ImageIndex = 3
      object DBGrid3: TDBGrid
        Left = 2
        Top = 2
        Width = 470
        Height = 179
        DataSource = dsrcIADELERI
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
            Width = 60
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'BELGE'
            Title.Caption = 'Blg. No'
            Width = 43
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'STOK_ADI'
            Title.Alignment = taCenter
            Title.Caption = 'Cinsi'
            Width = 103
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'MIKTAR'
            Title.Alignment = taRightJustify
            Title.Caption = 'Miktar'
            Width = 50
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'BIRIMI'
            Title.Alignment = taCenter
            Title.Caption = 'Birim'
            Width = 34
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'ALIS_FIYATI'
            Title.Alignment = taRightJustify
            Title.Caption = 'Alýþ Fiyatý'
            Width = 70
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'SATIS_FIYATI'
            Title.Alignment = taRightJustify
            Title.Caption = 'Satýþ Fiyatý'
            Width = 70
            Visible = True
          end>
      end
    end
  end
  object ImageList1: TImageList
    Left = 342
    Top = 168
    Bitmap = {
      494C010106000900040010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000003000000001001000000000000018
      0000000000000000000000000000000000009B377F0A2F710A39E30934730A39
      E819AF780331F80F207F822F7B13A07C0731741426788635EA11B07218387C06
      29680C34710B2F6F0338EA13AA770D32F518A67E8C33FD13297C0335700F2A74
      9934FE0AA76B0F3272063F699C36E60CA8739D336F122C7D85357B11257C8331
      7714297A86346411256C002FF411BE6C8931277C932EFB09BA7F932C7F08B67F
      972FFF0BA17F1731FE0A207E932EFB0ABE7F9A30FF0FA77F1D337E0EA87B1B34
      740C297817356E0BAB779535730BAB7B98357C0FB17F9533750DAC791937680E
      347080224400A9541879FF0AFC799E666A00BD3F44565E133944906C611BFB7F
      87667000283F002EC6163F6C1F3A770E326E7F008B4B00235214BF798336710F
      3A771230FF17BB7F13237014A27F00307412AB780D3D74001F5900105309A66E
      843A760ABF75982E7411A37F1F2E7F10BA7F872F7F13A07C0D36EC12A86D001C
      4B008950913569163E731B32FC17367C162EFF1BBE7F8526F90FAA76A63C7F14
      2173982D70000E4F0027DE04A16B18366E0C9831FF0A257D1133F808A77C1233
      FE08A57F0E30FF0BA77F8C2EFF08247E9534710CB27400234D002C581B79FF0D
      FB7A07656C003C403955D80D37411A75F115F47F07687600AB44802DCF13356D
      1E37E10E2D759F36F00D2D7A0F377309AB788431ED133D7887307F11BB7F842C
      FF12B97F052D7E123D7B8432EF10AE7499371A519032F906BB6E1D32F413AA7F
      1D2D780D347A862EFE14A77A89386005BD5C802BD300385B122E621BB3739333
      6A17BF780B30FD0BAE78032D791DB27F9739750BBC668022C101A55C80315C03
      2B6790366207A7768D2EF606BC7F922E7F09A07F9330FF08247E9332FA07237C
      0F30F707A07E1531FF0CA57F1A31FF0CA37F7F15FD7C176772054145B656D60B
      B94019757114F47F856779002946002C551430709C32E50DA3769D31760C247D
      1033FA08237C032EF513B77A9E2AFC0C317E002A7E14BC7F882EFA0FBB759A30
      600E2F6E84316000A34C8026C50FBC6F8B2CF109B16E2A3DFF0BA27591317F1B
      AF7F172C6310A971153471002C5600295400001B5200A95A1132FE053F700E31
      7F002E5F80164905AD588E43532DF77E903F4F00215080225800A15400286D08
      BE731730F009BF761B346D0D2B759C36660CAC711834E50B27751D34F410A77F
      002F7F10BD7F9F2F7F0EA07F1A31FC0CA37F1931FF0CBF7F942BFF0DBD7F112A
      7F0CBC7F1B327411AF7680235200AF5A8779BF7F9030FF0ABF7E062D7B15B97B
      042F730DB974002EEC14A4779E2EFD022B5E80254600BB50802C4D296579063C
      4700314793355F00A5589124EE14BB749E2AE009326980195F00B153002EDE10
      C65EB85F78003F4F002E4C0024530023D908BB6C813268122575972A7900A057
      00265000A04788527116456B00233F002D4AF714327E08377E0E24799E336D0F
      AB741F37E30E2D719C34E30DA7741F337311A47F032E7F11BA7F012E7F0FBE7F
      1D307D0E217F9B2F7F0DBE7F992BFF0FBC7F16297F0EBA7F1F32771330760025
      4F00B15908777F16F97B9C65F2064045B556520BB93E19766E15F47F07677A00
      2847002A5814AB729E2F690FBD799E2EFB0DB368F3043F57801D4700104B182B
      F810397304316C063468801E4200A7490033DC255D73407A7F17416A802A5C00
      1D4B801F4C03B9691F36EB122D780C287100104C002F5708D95CAD71FF2FF27F
      1A4D6500A951802154009F510133FA07BA79913C70003A62001A46002D529F57
      6B2AE77DB766F00D415B801E48001A4E0F2EA07D1B31F90C227D18307F0CBE7F
      1B2EFF10A17F172BFF0EBF7F1F347212B47200274600335503757A13F3781262
      6A0239412E574E08BB3C11776D12F77F81677A00284880295A1229749D30700E
      BE7C1D2FFF0CBF7F0D317F09A17F052E7F15BE7F85337C0CBE761B306D12A877
      952E7900255800215500B5470F55F039F37F4F00B9610334E9092F7F8E317908
      A07C943077013F6D801FCB0F53711D717F23E87F8D5B7200AA4B802CDD02246E
      80367700297D802F6C03B5790036720038518B65F528F17FB677FF1B5A6F8029
      5100B0630033F913AA7F9F2E7F0BB77F9C2F7C0E247C1E33F30D26781B31720C
      BE7B9C2EFF0FBD7F022DFF10BA7F9E2EFF0E8902090E8C09607088008803D413
      2116023E04002422C705B434287C6E4AEC0EC160F67A92197A2706004912383A
      7D68B700E711CE00BD2A054A011809629317E54914400D2664511060D8454E44
      CA444F4A950864163D5B204CAC61C56B9C3F96174C380729C035A4292A18872C
      672435599243EA30E17F2674FF2DFC7F802DD42601188D79D949E96A11134463
      03091004E0321155800B1423CB2A23744478250C002A020F8820A01D140C5141
      3A0202487259201900319A2C3803E01000120240301ADA6313050D6630537967
      1301012486546003E01D6B362C240758811B8C0606401E003A2620072027C003
      A00C804D3348033A99300B29B97D5B05C3389F767809012E5B518E0297670973
      A5400214F3139260F02D09346A110101291C756C357E8E2B1F223729964D3B04
      716A8408E147FE1DE7617617597002645D00000081059325154B0348712F1060
      BD4EE761A910C2333839E750000CF60B810C51627A4B036135163F0754268F08
      AC761A30E00CFA4F0067C64702296845C03522604F7084109E1D70098505A801
      1234E4498941B61A01542160191E52634E2E1A21780513013558A22445567012
      521B280200137C4D2C139267E00BC04C1B3E631C8E67AD62096F0D14450FC84C
      7402082720676760357BE166437246406458157C15612823005F28066A444820
      19568E6E72287C27D415C5689A62040245010000000000000000000000000000
      00000000000000000000000000000000FF7F0000000000000000000000000000
      000000000000000000000000000000000000FC01D006B03020430C26E814410E
      8C4962709052081350631A4ADE04803328338505E5071601C974657F27115D50
      13308841314160762D247E036D659003201D0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000D74765378A06C32340053E052101
      62260F49A9603228077C6D12785FA8707A288F714D40D6300075A1121C3FE00E
      6716DD3CD563582EC1393A06103D8460074F0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000006E10C11281000172F07C98724621
      7F40000001059321901B0C43517D1A01A00A2B72D44564247720CD72007D4844
      A14CC2581F215804E3420D1F822F724293770000000000000000000000000000
      0000000000000000000000000000000000000000FF7F00000000000000000000
      0000000000000000FF7F00000000000000001B2333230600500352258910C01E
      8D1DB009531C83406142B803A4132130B740F00156271D24601C99235D47433B
      03008700096047791876877B0C19522B01730000000000000000000000000000
      E07FE07FE07F0000000000000000000000000000FF7F00000000000000000000
      0000000000000000FF7F0000000000000000112953004924680D5E5860154E2B
      012F040B08150240341A105F500A1E6E8A174D14C24D9F619417601D06406370
      187090535A3C2A781E1306329C0B140FAE510000000000000000000000000000
      1042104210420000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000734E4A5C681548339C62D400C120
      4512137B98258146AC3766601A00DC1A050304025A2C512417601A062E724229
      31684C5338007E16010CF46285633D33186E0000000000000000000000000000
      00000000000000000000000000000000000000000000FF7F0000000000000000
      00000000FF7F000000000000000000000000000001700901FF7FFF7FFF7FFF7F
      FF7FFF7F7F308E0709267802646608189260AD35624C0E64AA24100980600C09
      130C9A0542115C46B14EB633331DCF48D7330000000000000000000000000000
      00000000000000000000000000000000000000000000FF7F0000000000000000
      00000000FF7F0000000000000000000000000921800BB10AC11C5A0AD700E327
      6222B6016659C55BE26ABF18E00DA72811106149571A383837469C5D1861BF55
      C740272F0323A1050F41056E294CF123FC490000000000000000000000000000
      00000000000000000000000000000000000000000000FF7F0000000000000000
      00000000FF7F000000000000000000000000710B01062805E17EA61DD8556752
      053CCD05860F7B3D0143A1718830D944C14F0D39BF74FC606D0323404A290768
      6122384D5E6033540F46186CCC48C01B7937000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7F000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000263ECE014E1DB8218F1FE27B9918
      737D0204A00C1F583D546B39B4268D7C830960628C18697A2630286190300C06
      5E33AF282823A21D1B728448BA22907099480000000000000000FF7F00000000
      000000000000FF7F00000000000000000000000000000000FF7F000000000000
      00000000FF7F000000000000000000000000032A406E8110030A136060006571
      60510300AB65690A5D78840C4843750C0618A224A91659201D36B345D0027218
      0F32DE00D336FC04FC288C314F13C75C7A130000000000000000FF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000002017006E903CC0509110D9005916
      C230A02906507064100860040100680260403000DC0070076019003900665800
      F8120D643C038007D802B93262491418426400000000000000000000FF7F0000
      0000000000000000FF7F00000000000000000000000000000000000000000000
      0000000000000000000000000000000000005D6CB9325E0C0870397CFF2C9D13
      8007E4289C51303D401CC90D5A1C3350BB4D9817DA52F7735838D01DC73EC544
      0075F918AE630C21C866006C1743932E465000000000000000000000FF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7F0000000000000000000000000000FF7F00000000
      000000000000FF7F000000000000000000008274471E1C68193CC9447168701D
      75544E6039741614501F8870042CC904142C0E5F0768D86040122162E025044C
      7834020142208012422031382E01111F48540000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000003370780118008000880D20182004
      A0577802000DC012E309D803CE0C5C5EE411267F181432508C644030520C8279
      BA01346304016430162263580E422C0F10030000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000443A465C0F2CB8507A242220B040
      24691E2C500D2469211207249A188811DA6258448A4AC6499A3CE003046A2C14
      6E15057A26009874D26707685D06A84F060A0000000000000000000000000000
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
      2800000040000000300000000100010000000000800100000000000000000000
      000000000000000000000000FFFFFF00B9B07E07E76376336959949A87A87B9A
      5C65C37537565665DD59759138E4523665592AC547BD25661E8298360C58D635
      744D13330CD7017087A98599599B87B8492B81B80A24A249978A78A7887884A2
      449EC1A6651A594AA6ADAB9A9C67AF4BB96F6055B1754290886364D918061AE6
      B8688582AB3AB9869E59D7B57C516B16FFFEFFFFA42B43B4C007FFFFC571525C
      BFEB07C19DB7E969000507C14ABEAF5E7E3107C1EB956A657E35010181AD2AD8
      000600019C89D9687FEA02017589768780140201C65990E4C00A80031E7D875F
      E001C1072115FD7FE007C107DCC08CE3F007E38F98967B67F003E38F8A5AA4B5
      F803E38F8768787AFFFFFFFF5E289874FFFFFFFFFFFFFFFFFFFFC001FFFFFFFF
      C0078031EFFD001FC0078031C7FF000FC0078031C3FB0007C0078001E3F70003
      C0078001F1E70001C0078001F8CF0000C0078FF1FC1F001FC0078FF1FE3F001F
      C0078FF1FC1F001FC0078FF1F8CF8FF1C00F8FF1E1E7FFF9C01F8FF5C3F3FF75
      C03F8001C7FDFF8FFFFFFFFFFFFFFFFF00000000000000000000000000000000
      000000000000}
  end
  object MainMenu1: TMainMenu
    Images = ImageList1
    Left = 375
    Top = 168
    object Dosya1: TMenuItem
      Caption = 'Dosya'
      object Yeni1: TMenuItem
        Caption = 'Yeni'
        ImageIndex = 0
        ShortCut = 16462
        OnClick = Yeni1Click
      end
      object Kaydet1: TMenuItem
        Caption = 'Kaydet'
        ImageIndex = 1
        ShortCut = 16467
        OnClick = Kaydet1Click
      end
      object Sil1: TMenuItem
        Caption = 'Sil'
        ImageIndex = 2
        ShortCut = 16452
        OnClick = Sil1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object A1: TMenuItem
        Caption = 'Aç'
        ImageIndex = 3
        ShortCut = 16463
        OnClick = A1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object k1: TMenuItem
        Caption = 'Çýkýþ'
      end
    end
    object Rapor1: TMenuItem
      Caption = 'Rapor'
      object KartDkm1: TMenuItem
        Caption = 'Kart Dökümü'
      end
    end
    object Yardm1: TMenuItem
      Caption = 'Yardým'
      object erik1: TMenuItem
        Caption = 'Ýçerik'
        HelpContext = 4
        ShortCut = 112
        OnClick = erik1Click
      end
    end
  end
  object dsrcYETKILI: TDataSource
    DataSet = tblYETKILI
    Left = 407
    Top = 169
  end
  object tblYETKILI: TTable
    BeforePost = tblYETKILIBeforePost
    DatabaseName = 'ORTEG2002'
    TableName = 'yetkili.db'
    Left = 437
    Top = 169
    object tblYETKILIFIRMA_KODU: TFloatField
      FieldName = 'FIRMA_KODU'
    end
    object tblYETKILIADI: TStringField
      FieldName = 'ADI'
    end
    object tblYETKILIGOREVI: TStringField
      FieldName = 'GOREVI'
      Size = 25
    end
    object tblYETKILIDAHILI: TStringField
      FieldName = 'DAHILI'
      Size = 10
    end
    object tblYETKILITELEFON: TStringField
      FieldName = 'TELEFON'
      EditMask = '(# ###) ### ## ##;1;_'
      Size = 25
    end
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 100
    OnTimer = Timer1Timer
    Left = 342
    Top = 200
  end
  object queryFIRMAKODU: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from firma'
      'order by firma_kodu desc')
    Left = 375
    Top = 200
    object queryFIRMAKODUFIRMA_KODU: TFloatField
      FieldName = 'FIRMA_KODU'
      Origin = 'ORTEG2002."firma.DB".FIRMA_KODU'
    end
    object queryFIRMAKODUFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Origin = 'ORTEG2002."firma.DB".FIRMA_ADI'
      Size = 30
    end
    object queryFIRMAKODUADRES_1: TStringField
      FieldName = 'ADRES_1'
      Origin = 'ORTEG2002."firma.DB".ADRES_1'
      Size = 50
    end
    object queryFIRMAKODUADRES_2: TStringField
      FieldName = 'ADRES_2'
      Origin = 'ORTEG2002."firma.DB".ADRES_2'
      Size = 50
    end
    object queryFIRMAKODUTELEFON: TStringField
      FieldName = 'TELEFON'
      Origin = 'ORTEG2002."firma.DB".TELEFON'
      Size = 25
    end
    object queryFIRMAKODUFAKS: TStringField
      FieldName = 'FAKS'
      Origin = 'ORTEG2002."firma.DB".FAKS'
      Size = 25
    end
  end
  object queryYETKILISIL: TQuery
    DatabaseName = 'ORTEG2002'
    SQL.Strings = (
      'select * from yetkili')
    Left = 438
    Top = 201
  end
  object popupYETKILI: TPopupMenu
    Images = ImageList1
    Left = 408
    Top = 201
    object Yeni2: TMenuItem
      Caption = 'Yeni'
      ImageIndex = 0
      OnClick = Yeni2Click
    end
    object Kaydet2: TMenuItem
      Caption = 'Kaydet'
      ImageIndex = 1
      OnClick = Kaydet2Click
    end
    object Sil2: TMenuItem
      Caption = 'Sil'
      ImageIndex = 2
      OnClick = Sil2Click
    end
    object N3: TMenuItem
      Caption = '-'
    end
    object Btnyetkililerisil1: TMenuItem
      Caption = 'Bütün yetkilileri sil'
      OnClick = Btnyetkililerisil1Click
    end
  end
  object dsrcGIRISLERI: TDataSource
    DataSet = queryGIRISLERI
    Left = 277
    Top = 201
  end
  object dsrcIADELERI: TDataSource
    DataSet = queryIADELERI
    Left = 310
    Top = 201
  end
  object queryIADELERI: TQuery
    DatabaseName = 'ORTEG2002'
    DataSource = datamoduleORTEG.dsrcFIRMA
    SQL.Strings = (
      'select * from stokhar'
      'where belge_turu='#39'CIKTI'#39' and firma_kodu=:firma_kodu'
      'order by tarih desc')
    Left = 307
    Top = 168
    ParamData = <
      item
        DataType = ftFloat
        Name = 'FIRMA_KODU'
        ParamType = ptUnknown
      end>
    object queryIADELERIBELGE_TURU: TStringField
      FieldName = 'BELGE_TURU'
      Origin = 'ORTEG2002."stokhar.DB".BELGE_TURU'
      Size = 10
    end
    object queryIADELERIFIRMA_KODU: TFloatField
      FieldName = 'FIRMA_KODU'
      Origin = 'ORTEG2002."stokhar.DB".FIRMA_KODU'
    end
    object queryIADELERIFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Origin = 'ORTEG2002."stokhar.DB".FIRMA_ADI'
      Size = 35
    end
    object queryIADELERITARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'ORTEG2002."stokhar.DB".TARIH'
    end
    object queryIADELERIBELGE: TStringField
      FieldName = 'BELGE'
      Origin = 'ORTEG2002."stokhar.DB".BELGE'
      Size = 15
    end
    object queryIADELERIIC_DAGITIM_NO: TStringField
      FieldName = 'IC_DAGITIM_NO'
      Origin = 'ORTEG2002."stokhar.DB".IC_DAGITIM_NO'
      Size = 15
    end
    object queryIADELERISTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      Origin = 'ORTEG2002."stokhar.DB".STOK_ADI'
      Size = 30
    end
    object queryIADELERIBIRIMI: TStringField
      FieldName = 'BIRIMI'
      Origin = 'ORTEG2002."stokhar.DB".BIRIMI'
      Size = 15
    end
    object queryIADELERIMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      Origin = 'ORTEG2002."stokhar.DB".MIKTAR'
    end
    object queryIADELERIBIRIM2: TStringField
      FieldName = 'BIRIM2'
      Origin = 'ORTEG2002."stokhar.DB".BIRIM2'
      Size = 15
    end
    object queryIADELERIMIKTAR2: TFloatField
      FieldName = 'MIKTAR2'
      Origin = 'ORTEG2002."stokhar.DB".MIKTAR2'
    end
    object queryIADELERIALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_FIYATI'
      DisplayFormat = '###,###,###,###,###'
    end
    object queryIADELERIALIS_TUTARI: TFloatField
      FieldName = 'ALIS_TUTARI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_TUTARI'
      DisplayFormat = '###,###,###,###,###'
    end
    object queryIADELERISATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_FIYATI'
      DisplayFormat = '###,###,###,###,###'
    end
    object queryIADELERISATIS_TUTARI: TFloatField
      FieldName = 'SATIS_TUTARI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_TUTARI'
      DisplayFormat = '###,###,###,###,###'
    end
    object queryIADELERIKAR: TFloatField
      FieldName = 'KAR'
      Origin = 'ORTEG2002."stokhar.DB".KAR'
      DisplayFormat = '###,###,###,###,###'
    end
    object queryIADELERISTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
      Origin = 'ORTEG2002."stokhar.DB".STOK_KODU'
    end
    object queryIADELERINET_FIYAT: TFloatField
      FieldName = 'NET_FIYAT'
      Origin = 'ORTEG2002."stokhar.DB".NET_FIYAT'
    end
    object queryIADELERIKDV: TFloatField
      FieldName = 'KDV'
      Origin = 'ORTEG2002."stokhar.DB".KDV'
    end
    object queryIADELERIISKONTO: TFloatField
      FieldName = 'ISKONTO'
      Origin = 'ORTEG2002."stokhar.DB".ISKONTO'
    end
    object queryIADELERIBIRIM_KATSAYISI: TFloatField
      FieldName = 'BIRIM_KATSAYISI'
      Origin = 'ORTEG2002."stokhar.DB".BIRIM_KATSAYISI'
    end
    object queryIADELERIHAREKET_NO: TIntegerField
      FieldName = 'HAREKET_NO'
      Origin = 'ORTEG2002."stokhar.DB".HAREKET_NO'
    end
  end
  object queryGIRISLERI: TQuery
    DatabaseName = 'ORTEG2002'
    DataSource = datamoduleORTEG.dsrcFIRMA
    SQL.Strings = (
      'select * from stokhar'
      'where belge_turu='#39'GIRDI'#39' and firma_kodu=:firma_kodu'
      'order by tarih desc')
    Left = 277
    Top = 168
    ParamData = <
      item
        DataType = ftFloat
        Name = 'FIRMA_KODU'
        ParamType = ptUnknown
      end>
    object queryGIRISLERIBELGE_TURU: TStringField
      FieldName = 'BELGE_TURU'
      Origin = 'ORTEG2002."stokhar.DB".BELGE_TURU'
      Size = 10
    end
    object queryGIRISLERIFIRMA_KODU: TFloatField
      FieldName = 'FIRMA_KODU'
      Origin = 'ORTEG2002."stokhar.DB".FIRMA_KODU'
    end
    object queryGIRISLERIFIRMA_ADI: TStringField
      FieldName = 'FIRMA_ADI'
      Origin = 'ORTEG2002."stokhar.DB".FIRMA_ADI'
      Size = 35
    end
    object queryGIRISLERITARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'ORTEG2002."stokhar.DB".TARIH'
    end
    object queryGIRISLERIBELGE: TStringField
      FieldName = 'BELGE'
      Origin = 'ORTEG2002."stokhar.DB".BELGE'
      Size = 15
    end
    object queryGIRISLERIIC_DAGITIM_NO: TStringField
      FieldName = 'IC_DAGITIM_NO'
      Origin = 'ORTEG2002."stokhar.DB".IC_DAGITIM_NO'
      Size = 15
    end
    object queryGIRISLERISTOK_ADI: TStringField
      FieldName = 'STOK_ADI'
      Origin = 'ORTEG2002."stokhar.DB".STOK_ADI'
      Size = 30
    end
    object queryGIRISLERIBIRIMI: TStringField
      FieldName = 'BIRIMI'
      Origin = 'ORTEG2002."stokhar.DB".BIRIMI'
      Size = 15
    end
    object queryGIRISLERIMIKTAR: TFloatField
      FieldName = 'MIKTAR'
      Origin = 'ORTEG2002."stokhar.DB".MIKTAR'
    end
    object queryGIRISLERIBIRIM2: TStringField
      FieldName = 'BIRIM2'
      Origin = 'ORTEG2002."stokhar.DB".BIRIM2'
      Size = 15
    end
    object queryGIRISLERIMIKTAR2: TFloatField
      FieldName = 'MIKTAR2'
      Origin = 'ORTEG2002."stokhar.DB".MIKTAR2'
    end
    object queryGIRISLERIALIS_FIYATI: TFloatField
      FieldName = 'ALIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_FIYATI'
      DisplayFormat = '###,###,###,###,###'
    end
    object queryGIRISLERIALIS_TUTARI: TFloatField
      FieldName = 'ALIS_TUTARI'
      Origin = 'ORTEG2002."stokhar.DB".ALIS_TUTARI'
      DisplayFormat = '###,###,###,###,###'
    end
    object queryGIRISLERISATIS_FIYATI: TFloatField
      FieldName = 'SATIS_FIYATI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_FIYATI'
      DisplayFormat = '###,###,###,###,###'
    end
    object queryGIRISLERISATIS_TUTARI: TFloatField
      FieldName = 'SATIS_TUTARI'
      Origin = 'ORTEG2002."stokhar.DB".SATIS_TUTARI'
      DisplayFormat = '###,###,###,###,###'
    end
    object queryGIRISLERIKAR: TFloatField
      FieldName = 'KAR'
      Origin = 'ORTEG2002."stokhar.DB".KAR'
      DisplayFormat = '###,###,###,###,###'
    end
    object queryGIRISLERISTOK_KODU: TFloatField
      FieldName = 'STOK_KODU'
      Origin = 'ORTEG2002."stokhar.DB".STOK_KODU'
    end
    object queryGIRISLERINET_FIYAT: TFloatField
      FieldName = 'NET_FIYAT'
      Origin = 'ORTEG2002."stokhar.DB".NET_FIYAT'
    end
    object queryGIRISLERIKDV: TFloatField
      FieldName = 'KDV'
      Origin = 'ORTEG2002."stokhar.DB".KDV'
    end
    object queryGIRISLERIISKONTO: TFloatField
      FieldName = 'ISKONTO'
      Origin = 'ORTEG2002."stokhar.DB".ISKONTO'
    end
    object queryGIRISLERIBIRIM_KATSAYISI: TFloatField
      FieldName = 'BIRIM_KATSAYISI'
      Origin = 'ORTEG2002."stokhar.DB".BIRIM_KATSAYISI'
    end
    object queryGIRISLERIHAREKET_NO: TIntegerField
      FieldName = 'HAREKET_NO'
      Origin = 'ORTEG2002."stokhar.DB".HAREKET_NO'
    end
  end
end
