//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:51 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.ClientDropItem
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASTExtraPlayerController* Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemDefineID           itemDefine                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason          Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::ClientDropItem(class ASTExtraPlayerController* Controller, const struct FItemDefineID& itemDefine, int Count, EBattleItemDropReason Reason, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.ClientDropItem");

	UGlobalBattleUIFunctionLibrary_C_ClientDropItem_Params params;
	params.Controller = Controller;
	params.itemDefine = itemDefine;
	params.Count = Count;
	params.Reason = Reason;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.AddPostfixBattle
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 iconPath                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::AddPostfixBattle(const struct FString& iconPath, class UObject* __WorldContext, struct FString* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.AddPostfixBattle");

	UGlobalBattleUIFunctionLibrary_C_AddPostfixBattle_Params params;
	params.iconPath = iconPath;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SetCorpsRankLevelBattle
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  iconImage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              levelText                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            levelId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::SetCorpsRankLevelBattle(class UImage* iconImage, class UTextBlock* levelText, int levelId, int Style, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SetCorpsRankLevelBattle");

	UGlobalBattleUIFunctionLibrary_C_SetCorpsRankLevelBattle_Params params;
	params.iconImage = iconImage;
	params.levelText = levelText;
	params.levelId = levelId;
	params.Style = Style;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadDownloadUIElemLayoutSG
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsExist                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBP_SAVEGAME_UIElemLayout_C* SaveGameList                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::LoadDownloadUIElemLayoutSG(class UObject* __WorldContext, bool* IsExist, class UBP_SAVEGAME_UIElemLayout_C** SaveGameList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadDownloadUIElemLayoutSG");

	UGlobalBattleUIFunctionLibrary_C_LoadDownloadUIElemLayoutSG_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsExist != nullptr)
		*IsExist = params.IsExist;
	if (SaveGameList != nullptr)
		*SaveGameList = params.SaveGameList;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadAllUIElemLayoutSG
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UBP_SAVEGAME_UIElemLayout_C*> SaveGameList                   (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::LoadAllUIElemLayoutSG(class UObject* __WorldContext, TArray<class UBP_SAVEGAME_UIElemLayout_C*>* SaveGameList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadAllUIElemLayoutSG");

	UGlobalBattleUIFunctionLibrary_C_LoadAllUIElemLayoutSG_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGameList != nullptr)
		*SaveGameList = params.SaveGameList;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetRushTriggerLengthByType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGameObj                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RushTriggerLength              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetRushTriggerLengthByType(int LayoutIndex, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGameObj, float* RushTriggerLength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetRushTriggerLengthByType");

	UGlobalBattleUIFunctionLibrary_C_GetRushTriggerLengthByType_Params params;
	params.LayoutIndex = LayoutIndex;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGameObj != nullptr)
		*SaveGameObj = params.SaveGameObj;
	if (RushTriggerLength != nullptr)
		*RushTriggerLength = params.RushTriggerLength;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutDetailByType
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGameObj                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBP_UIENUM_UIElemTypes> ElemKey                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_UIElemLayoutDetail LayoutDetail                   (Parm, OutParm)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetLayoutDetailByType(int LayoutIndex, TEnumAsByte<EBP_UIENUM_UIElemTypes> ElemKey, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGameObj, struct FBP_STRUCT_UIElemLayoutDetail* LayoutDetail, bool* IsFound)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutDetailByType");

	UGlobalBattleUIFunctionLibrary_C_GetLayoutDetailByType_Params params;
	params.LayoutIndex = LayoutIndex;
	params.ElemKey = ElemKey;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGameObj != nullptr)
		*SaveGameObj = params.SaveGameObj;
	if (LayoutDetail != nullptr)
		*LayoutDetail = params.LayoutDetail;
	if (IsFound != nullptr)
		*IsFound = params.IsFound;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsWidgetVisible
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsWidgetVisible");

	UGlobalBattleUIFunctionLibrary_C_IsWidgetVisible_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetTimeByInt
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Second                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Time                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetTimeByInt(int Second, class UObject* __WorldContext, struct FString* Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetTimeByInt");

	UGlobalBattleUIFunctionLibrary_C_GetTimeByInt_Params params;
	params.Second = Second;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.CreateUAEUserWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.CreateUAEUserWidget");

	UGlobalBattleUIFunctionLibrary_C_CreateUAEUserWidget_Params params;
	params.Class = Class;
	params.Parent = Parent;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetLocalizeText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeText");

	UGlobalBattleUIFunctionLibrary_C_GetLocalizeText_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveUIElemLayoutSG
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*               SaveGameObject                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGlobalBattleUIFunctionLibrary_C::SaveUIElemLayoutSG(class UObject* __WorldContext, class USaveGame** SaveGameObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveUIElemLayoutSG");

	UGlobalBattleUIFunctionLibrary_C_SaveUIElemLayoutSG_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGameObject != nullptr)
		*SaveGameObject = params.SaveGameObject;

	return params.ReturnValue;
}


// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSG
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_SAVEGAME_UIElemLayout_C* UIElemSaveGame                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::LoadUIElemLayoutSG(class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** UIElemSaveGame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSG");

	UGlobalBattleUIFunctionLibrary_C_LoadUIElemLayoutSG_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UIElemSaveGame != nullptr)
		*UIElemSaveGame = params.UIElemSaveGame;
}


}

