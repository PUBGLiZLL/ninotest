#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:47 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_reflux_training_list.bp_reflux_training_list_C
// 0x0024 (0x02F4 - 0x02D0)
class Abp_reflux_training_list_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_BP_RefluxTrainingListDataList_type> BP_ARRAY_BP_RefluxTrainingListDataList;                   // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RefluxTrainingListCurrentID;                           // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_RefluxTrainingListCurrentPanelIndex;                   // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_reflux_training_list.bp_reflux_training_list_C");
		return pStaticClass;
	}


	void EventRefluxTrainingListJoinButtonClicked_NoFetch();
	void EventRefluxTrainingListJoinButtonClicked();
	void EventRefluxTrainingListInviteButtonClicked_NoFetch();
	void EventRefluxTrainingListInviteButtonClicked();
	void EventRefluxTrainingListUIClose_NoFetch();
	void EventRefluxTrainingListUIClose();
	void EventRefluxTrainingListHeadIconClicked_NoFetch();
	void EventRefluxTrainingListHeadIconClicked();
	void UserConstructionScript();
};


}

