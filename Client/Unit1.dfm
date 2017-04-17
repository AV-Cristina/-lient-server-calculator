object Form1: TForm1
  Left = 314
  Top = 144
  BorderStyle = bsSingle
  Caption = #1050#1083#1080#1077#1085#1090
  ClientHeight = 153
  ClientWidth = 298
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 297
    Height = 153
    TabOrder = 0
    object Label1: TLabel
      Left = 16
      Top = 48
      Width = 96
      Height = 13
      Caption = #1048#1084#1103' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
    end
    object Button1: TButton
      Left = 176
      Top = 112
      Width = 113
      Height = 25
      Caption = #1042#1093#1086#1076' '#1074' '#1089#1080#1089#1090#1077#1084#1091
      TabOrder = 0
      OnClick = Button1Click
    end
    object Edit1: TEdit
      Left = 120
      Top = 40
      Width = 169
      Height = 21
      TabOrder = 1
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 297
    Height = 153
    TabOrder = 1
    Visible = False
    object Label2: TLabel
      Left = 16
      Top = 24
      Width = 85
      Height = 13
      Caption = #1055#1077#1088#1074#1099#1081' '#1086#1087#1077#1088#1072#1085#1076
    end
    object Label3: TLabel
      Left = 16
      Top = 56
      Width = 81
      Height = 13
      Caption = #1042#1090#1086#1088#1086#1081' '#1086#1087#1077#1088#1072#1085#1076
    end
    object Label4: TLabel
      Left = 16
      Top = 80
      Width = 52
      Height = 13
      Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090
    end
    object Edit2: TEdit
      Left = 152
      Top = 16
      Width = 137
      Height = 21
      TabOrder = 0
      OnKeyPress = Edit2KeyPress
    end
    object Edit3: TEdit
      Left = 152
      Top = 48
      Width = 137
      Height = 21
      TabOrder = 1
      OnKeyPress = Edit3KeyPress
    end
    object Edit4: TEdit
      Left = 152
      Top = 80
      Width = 137
      Height = 21
      TabOrder = 2
    end
    object Button2: TButton
      Left = 8
      Top = 120
      Width = 89
      Height = 25
      Caption = #1057#1091#1084#1084#1080#1088#1086#1074#1072#1090#1100
      TabOrder = 3
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 104
      Top = 120
      Width = 89
      Height = 25
      Caption = #1042#1099#1095#1077#1089#1090#1100
      TabOrder = 4
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 200
      Top = 120
      Width = 89
      Height = 25
      Caption = #1059#1084#1085#1086#1078#1080#1090#1100
      TabOrder = 5
      OnClick = Button4Click
    end
  end
  object MainMenu1: TMainMenu
    object N1: TMenuItem
      Caption = #1042#1099#1093#1086#1076' '#1080#1079' '#1089#1080#1089#1090#1077#1084#1099
      object N2: TMenuItem
        Caption = #1042#1099#1093#1086#1076
        OnClick = N2Click
      end
    end
    object N3: TMenuItem
      Caption = #1057#1087#1088#1072#1074#1082#1072
      object N4: TMenuItem
        Caption = #1056#1091#1082#1086#1074#1086#1076#1089#1090#1086' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
        OnClick = N4Click
      end
      object N5: TMenuItem
        Caption = #1054#1090#1095#1077#1090
        OnClick = N5Click
      end
      object N6: TMenuItem
        Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
        OnClick = N6Click
      end
    end
  end
end
