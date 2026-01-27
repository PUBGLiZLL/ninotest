#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:51 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C
// 0x0000 (0x0020 - 0x0020)
class UGlobalBattleUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C");
		return pStaticClass;
	}


	static void ClientDropItem(class ASTExtraPlayerController* Controller, const struct FItemDefineID& itemDefine, int Count, EBattleItemDropReason Reason, class UObject* __WorldContext);
	static void AddPostfixBattle(const struct FString& iconPath, class UObject* __WorldContext, struct FString* Result);
	static void SetCorpsRankLevelBattle(class UImage* iconImage, class UTextBlock* levelText, int levelId, int Style, class UObject* __WorldContext);
	static void LoadDownloadUIElemLayoutSG(class UObject* __WorldContext, bool* IsExist, class UBP_SAVEGAME_UIElemLayout_C** SaveGameList);
	static void LoadAllUIElemLayoutSG(class UObject* __WorldContext, TArray<class UBP_SAVEGAME_UIElemLayout_C*>* SaveGameList);
	static void GetRushTriggerLengthByType(int LayoutIndex, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGameObj, float* RushTriggerLength);
	static void GetLayoutDetailByType(int LayoutIndex, TEnumAsByte<EBP_UIENUM_UIElemTypes> ElemKey, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGameObj, struct FBP_STRUCT_UIElemLayoutDetail* LayoutDetail, bool* IsFound);
	static void IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible);
	static void GetTimeByInt(int Second, class UObject* __WorldContext, struct FString* Time);
	static void CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget);
	static void GetLocalizeText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text);
	static bool SaveUIElemLayoutSG(class UObject* __WorldContext, class USaveGame** SaveGameObject);
	static void LoadUIElemLayoutSG(class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** UIElemSaveGame);
};


}

