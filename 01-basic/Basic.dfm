object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 253
  ClientWidth = 329
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 24
    Width = 298
    Height = 18
    Caption = 'Enter value and click button to calculate'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 72
    Width = 30
    Height = 13
    Caption = #1056#1091#1073#1083#1080
  end
  object Label3: TLabel
    Left = 8
    Top = 115
    Width = 46
    Height = 13
    Caption = #1044#1086#1083#1083#1072#1088#1099
  end
  object resultLabel: TLabel
    Left = 60
    Top = 200
    Width = 3
    Height = 13
  end
  object inputCurrency: TEdit
    Left = 60
    Top = 69
    Width = 193
    Height = 21
    TabOrder = 0
    Text = 'inputCurrency'
  end
  object outputCurrency: TEdit
    Left = 60
    Top = 112
    Width = 193
    Height = 21
    TabOrder = 1
    Text = 'outputCurrency'
  end
  object calcBtn: TButton
    Left = 60
    Top = 152
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 2
    OnClick = calcBtnClick
  end
  object exitBtn: TButton
    Left = 168
    Top = 152
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 3
    OnClick = exitBtnClick
  end
end
