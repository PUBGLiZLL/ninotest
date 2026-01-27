#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:52 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UICommonFunctionLibrary.UICommonFunctionLibrary_C
// 0x0000 (0x0020 - 0x0020)
class UUICommonFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass UICommonFunctionLibrary.UICommonFunctionLibrary_C");
		return pStaticClass;
	}


	static void SetAdaptation_ScreenHole(class UWidget* Widget, class UObject* __WorldContext);
	static void GetUIRectOffset_WithSetting(class UObject* __WorldContext, struct FString* RealOffset);
	static void SetAndroidPhoneAdaptation(class UCanvasPanelSlot* panel, class UObject* __WorldContext);
	static void SetAdaptation_Lobby(class UWidget* Widget, class UObject* __WorldContext);
	static void FormatSecondsToString(int Seconds, class UObject* __WorldContext, struct FText* Ret);
	static void SetSquareFixedScslr(class UWidget* Widget, class UObject* __WorldContext);
	static void SetAdaptation(class UWidget* Widget, class UObject* __WorldContext);
	static void SetTabStyle(bool isCheck, class UTextBlock* Text, class UImage* Icon, const struct FColor& onColor, const struct FColor& offColor, class UObject* __WorldContext);
};


}

