#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:50 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_regionstrongerrank.bp_regionstrongerrank_C
// 0x00C8 (0x0398 - 0x02D0)
class Abp_regionstrongerrank_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_RankRegionStrongerInfo           BP_STRUCT_RankRegionStrongerInfo;                         // 0x02D4(0x008C) (Edit, BlueprintVisible)
	struct FString                                     BP_Region_Name;                                           // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Region_People_Number;                                  // 0x036C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Region_CurrentCorpsID;                                 // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_RankRegionStrongerInfo>   BP_ARRAY_RankStrongerList;                                // 0x037C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RegionStrongerRankUIShowRoleUid;                       // 0x0388(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0394(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_regionstrongerrank.bp_regionstrongerrank_C");
		return pStaticClass;
	}


	void EventOnWindowHide_NoFetch();
	void EventOnWindowHide();
	void EventRegionStrongerRankUIShowRole_NoFetch();
	void EventRegionStrongerRankUIShowRole();
	void EventRegionStrongerShowCorpsDetail_NoFetch();
	void EventRegionStrongerShowCorpsDetail();
	void UserConstructionScript();
};


}

