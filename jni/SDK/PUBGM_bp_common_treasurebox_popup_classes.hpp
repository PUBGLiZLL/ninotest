#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:44 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_common_treasurebox_popup.bp_common_treasurebox_popup_C
// 0x0048 (0x0318 - 0x02D0)
class Abp_common_treasurebox_popup_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_RandomTitleName_String;                                // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_TitleName_String;                                      // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ActiveAwardItem                  BP_STRUCT_ActiveAwardItem;                                // 0x02EC(0x0018) (Edit, BlueprintVisible)
	struct FBP_STRUCT_DropItem                         BP_STRUCT_DropItem;                                       // 0x0304(0x0010) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0314(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_common_treasurebox_popup.bp_common_treasurebox_popup_C");
		return pStaticClass;
	}


	void EventCommonTreasureBoxPopupClosePanel_NoFetch();
	void EventCommonTreasureBoxPopupClosePanel();
	void UserConstructionScript();
};


}

