#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:48 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_season_pass_collect_progress.bp_season_pass_collect_progress_C
// 0x0038 (0x0308 - 0x02D0)
class Abp_season_pass_collect_progress_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_CollectProgressRewardItem> BP_ARRAY_CollectProgressRewardItem;                       // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CollectProgressTitleInfo         BP_STRUCT_CollectProgressTitleInfo;                       // 0x02E0(0x0024) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0304(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_season_pass_collect_progress.bp_season_pass_collect_progress_C");
		return pStaticClass;
	}


	void EventSeasonPassCollectProgressOnClickClose_NoFetch();
	void EventSeasonPassCollectProgressOnClickClose();
	void UserConstructionScript();
};


}

