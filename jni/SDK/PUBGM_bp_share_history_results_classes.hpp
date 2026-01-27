#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:49 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_share_history_results.bp_share_history_results_C
// 0x0144 (0x0414 - 0x02D0)
class Abp_share_history_results_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ShareHistoryResults_DetailInfo   BP_STRUCT_ShareHistoryResults_DetailInfo;                 // 0x02D4(0x0088) (Edit, BlueprintVisible)
	struct FBP_STRUCT_ShareHistoryResults_TeammateInfo BP_STRUCT_ShareHistoryResults_TeammateInfo;               // 0x035C(0x0060) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ShareHistoryResults_TeammateInfo> BP_ARRAY_ShareHistoryResults_TeammateInfoList;            // 0x03BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ShareHistoryResults_RadarInfo    BP_STRUCT_ShareHistoryResults_RadarInfo;                  // 0x03C8(0x0048) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_history_results.bp_share_history_results_C");
		return pStaticClass;
	}


	void EventShareHistoryResultsHide_NoFetch();
	void EventShareHistoryResultsHide();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

