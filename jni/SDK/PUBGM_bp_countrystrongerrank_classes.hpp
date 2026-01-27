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

// ScriptBlueprintGeneratedClass bp_countrystrongerrank.bp_countrystrongerrank_C
// 0x00B4 (0x0384 - 0x02D0)
class Abp_countrystrongerrank_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_Strongerlist_Type_Icon_Path;                           // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_UpRank_Data_Str;                                       // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Strongerlist_RankSystemType;                           // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_RankCountryStrongerInfo          BP_STRUCT_RankCountryStrongerInfo;                        // 0x02F0(0x005C) (Edit, BlueprintVisible)
	struct FString                                     BP_CountryStrongerRankUIShowRoleUid;                      // 0x034C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Strongerlist_Type_Icon_Frame_Path;                     // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Strongerlist_CurrentCorpsID;                           // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_RankCountryStrongerInfo>  BP_ARRAY_CountryRankStrongerList;                         // 0x0368(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Strongerlist_Type_Name;                                // 0x0374(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0380(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_countrystrongerrank.bp_countrystrongerrank_C");
		return pStaticClass;
	}


	void EventCountryStrongerRankUIShowRole_NoFetch();
	void EventCountryStrongerRankUIShowRole();
	void EventCountryStrongerShowCorpsDetail_NoFetch();
	void EventCountryStrongerShowCorpsDetail();
	void UserConstructionScript();
};


}

