#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Slate.ButtonWidgetStyle
// 0x01F8 (0x0218 - 0x0020)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                              // 0x0020(0x01F8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.CheckBoxWidgetStyle
// 0x0440 (0x0460 - 0x0020)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0020(0x0440) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ComboBoxWidgetStyle
// 0x0318 (0x0338 - 0x0020)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                            // 0x0020(0x0318) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ComboButtonWidgetStyle
// 0x02E0 (0x0300 - 0x0020)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0020(0x02E0) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.EditableTextBoxWidgetStyle
// 0x0620 (0x0640 - 0x0020)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0020(0x0620) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.EditableTextWidgetStyle
// 0x01A0 (0x01C0 - 0x0020)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0020(0x01A0) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ProgressWidgetStyle
// 0x0140 (0x0160 - 0x0020)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                         // 0x0020(0x0140) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ScrollBarWidgetStyle
// 0x03B0 (0x03D0 - 0x0020)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0020(0x03B0) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.ScrollBoxWidgetStyle
// 0x01A8 (0x01C8 - 0x0020)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x0020(0x01A8) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.SlateSettings
// 0x0004 (0x0020 - 0x001C)
class USlateSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.SlateSettings");
		return pStaticClass;
	}

};


// Class Slate.SpinBoxWidgetStyle
// 0x0240 (0x0260 - 0x0020)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                             // 0x0020(0x0240) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return pStaticClass;
	}

};


// Class Slate.TextBlockWidgetStyle
// 0x0178 (0x0198 - 0x0020)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                           // 0x0020(0x0178) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return pStaticClass;
	}

};


}

