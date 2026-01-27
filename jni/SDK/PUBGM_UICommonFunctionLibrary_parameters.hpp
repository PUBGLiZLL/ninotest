#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:52 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation_ScreenHole
struct UUICommonFunctionLibrary_C_SetAdaptation_ScreenHole_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.GetUIRectOffset_WithSetting
struct UUICommonFunctionLibrary_C_GetUIRectOffset_WithSetting_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RealOffset;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAndroidPhoneAdaptation
struct UUICommonFunctionLibrary_C_SetAndroidPhoneAdaptation_Params
{
	class UCanvasPanelSlot*                            panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation_Lobby
struct UUICommonFunctionLibrary_C_SetAdaptation_Lobby_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.FormatSecondsToString
struct UUICommonFunctionLibrary_C_FormatSecondsToString_Params
{
	int                                                Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Ret;                                                      // (Parm, OutParm)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetSquareFixedScslr
struct UUICommonFunctionLibrary_C_SetSquareFixedScslr_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetAdaptation
struct UUICommonFunctionLibrary_C_SetAdaptation_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UICommonFunctionLibrary.UICommonFunctionLibrary_C.SetTabStyle
struct UUICommonFunctionLibrary_C_SetTabStyle_Params
{
	bool                                               isCheck;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      onColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FColor                                      offColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

