#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:51 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.ClientDropItem
struct UGlobalBattleUIFunctionLibrary_C_ClientDropItem_Params
{
	class ASTExtraPlayerController*                    Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FItemDefineID                               itemDefine;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemDropReason                              Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.AddPostfixBattle
struct UGlobalBattleUIFunctionLibrary_C_AddPostfixBattle_Params
{
	struct FString                                     iconPath;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SetCorpsRankLevelBattle
struct UGlobalBattleUIFunctionLibrary_C_SetCorpsRankLevelBattle_Params
{
	class UImage*                                      iconImage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  levelText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                levelId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadDownloadUIElemLayoutSG
struct UGlobalBattleUIFunctionLibrary_C_LoadDownloadUIElemLayoutSG_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsExist;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGameList;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadAllUIElemLayoutSG
struct UGlobalBattleUIFunctionLibrary_C_LoadAllUIElemLayoutSG_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UBP_SAVEGAME_UIElemLayout_C*>         SaveGameList;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetRushTriggerLengthByType
struct UGlobalBattleUIFunctionLibrary_C_GetRushTriggerLengthByType_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGameObj;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RushTriggerLength;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutDetailByType
struct UGlobalBattleUIFunctionLibrary_C_GetLayoutDetailByType_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGameObj;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBP_UIENUM_UIElemTypes>                ElemKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_UIElemLayoutDetail               LayoutDetail;                                             // (Parm, OutParm)
	bool                                               IsFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsWidgetVisible
struct UGlobalBattleUIFunctionLibrary_C_IsWidgetVisible_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetTimeByInt
struct UGlobalBattleUIFunctionLibrary_C_GetTimeByInt_Params
{
	int                                                Second;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Time;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.CreateUAEUserWidget
struct UGlobalBattleUIFunctionLibrary_C_CreateUAEUserWidget_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeText
struct UGlobalBattleUIFunctionLibrary_C_GetLocalizeText_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveUIElemLayoutSG
struct UGlobalBattleUIFunctionLibrary_C_SaveUIElemLayoutSG_Params
{
	class USaveGame*                                   SaveGameObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSG
struct UGlobalBattleUIFunctionLibrary_C_LoadUIElemLayoutSG_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_SAVEGAME_UIElemLayout_C*                 UIElemSaveGame;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

