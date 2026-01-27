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

// Class PandoraComponent.LuaBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class ULuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.LuaBlueprintLibrary");
		return pStaticClass;
	}


	static struct FString GetStringFromVar(const struct FLuaBPVar& Value, int Index);
	static class UObject* GetObjectFromVar(const struct FLuaBPVar& Value, int Index);
	static float GetNumberFromVar(const struct FLuaBPVar& Value, int Index);
	static int GetIntFromVar(const struct FLuaBPVar& Value, int Index);
	static bool GetBoolFromVar(const struct FLuaBPVar& Value, int Index);
	static struct FLuaBPVar CreateVarFromString(const struct FString& Value);
	static struct FLuaBPVar CreateVarFromObject(class UObject* Value);
	static struct FLuaBPVar CreateVarFromNumber(float Value);
	static struct FLuaBPVar CreateVarFromInt(int Value);
	static struct FLuaBPVar CreateVarFromBool(bool Value);
	static struct FLuaBPVar CallToLua(const struct FString& FunctionName, TArray<struct FLuaBPVar> Args);
};


// Class PandoraComponent.LuaDelegate
// 0x000C (0x0028 - 0x001C)
class ULuaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.LuaDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};


// Class PandoraComponent.LuaObject
// 0x000C (0x0028 - 0x001C)
class ULuaObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.LuaObject");
		return pStaticClass;
	}

};


// Class PandoraComponent.PandoraBpFunctionLibrary
// 0x0000 (0x0020 - 0x0020)
class UPandoraBpFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraBpFunctionLibrary");
		return pStaticClass;
	}


	static void Tnm2Test(const struct FString& errMsg, int iId, int iType, bool bSend);
	static void SetGameInstance(class UGameInstance* instance);
	static struct FString OnClickOpenPop();
	static struct FString OnClickInit();
	static struct FString OnClickClose();
	static void LogoutPandora();
	static bool InitPandora(const struct FString& InOpenId, const struct FString& InRoleId, const struct FString& InAppId, const struct FString& InPlatId, const struct FString& InAccType, const struct FString& InArea, const struct FString& InPartion, const struct FString& InCloudTest, const struct FString& InAccessToken, const struct FString& InSdkVersion, const struct FString& InGameVersion);
	static struct FString GetHappyMessage();
};


// Class PandoraComponent.PandoraInterface
// 0x0004 (0x0020 - 0x001C)
class UPandoraInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraInterface");
		return pStaticClass;
	}

};


// Class PandoraComponent.PandoraRichTextBox
// 0x0210 (0x02E0 - 0x00D0)
class UPandoraRichTextBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FScriptDelegate                             TextDelegate;                                             // 0x00D8(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x00E8(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x0139(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x013A(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              LineHeightPercentage;                                     // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x0154(0x000C) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x180];                                     // 0x0160(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraRichTextBox");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	struct FText GetText();
};


// Class PandoraComponent.PandoraSceneComponent
// 0x0000 (0x02C0 - 0x02C0)
class UPandoraSceneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraComponent.PandoraSceneComponent");
		return pStaticClass;
	}

};


}

