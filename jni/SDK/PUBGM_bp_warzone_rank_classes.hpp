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

// ScriptBlueprintGeneratedClass bp_warzone_rank.bp_warzone_rank_C
// 0x0304 (0x05D4 - 0x02D0)
class Abp_warzone_rank_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_WarZoneRankCurrentCorpsID;                             // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_WarZoneRankSelectItemUid;                              // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WarZoneRankScrollPos;                                  // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_CurProvinceList;                                 // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_WarZoneMedalInfo                 BP_STRUCT_WarZoneMedalInfo;                               // 0x02F4(0x0054) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_WarZoneRankInfo>          BP_ARRAY_WarZoneRankList;                                 // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_WarZoneRankCorpsRankPreparing;                         // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_CurDistrictList;                                 // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ShowRegionStrongerBtn;                                 // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	int                                                BP_WarZoneRankSelectID;                                   // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_WarZoneRankUpdateItemInfo        BP_STRUCT_WarZoneRankUpdateItemInfo;                      // 0x036C(0x0088) (Edit, BlueprintVisible)
	int                                                BP_WarZoneRankListCount;                                  // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_WarZoneRank_RoleInfo             BP_STRUCT_WarZoneRank_RoleInfo;                           // 0x03F8(0x002C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_WarZoneRankInfo                  BP_STRUCT_WarZoneRankInfo;                                // 0x0424(0x0088) (Edit, BlueprintVisible)
	int                                                BP_WarZoneRankUpdateIdx;                                  // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_WarZoneRankSelectItemCorpsName;                        // 0x04B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WarZoneStreetPkIndex;                                  // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_CurCityList;                                     // 0x04C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_WarZoneStreetCdTime;                                   // 0x04CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WarZoneStreetLastLocationTime;                         // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WarZoneRankSelectDistrictIndex;                        // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WarZoneRankSelectCityIndex;                            // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_WarZoneRankShowRoleUid;                                // 0x04E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_WarZoneRank_PlayerNumShowStatus;                       // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	int                                                BP_WarZoneRankSelectID_Me;                                // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             BP_ARRAY_WarZoneStreetNameList;                           // 0x04F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_WarZoneRankSelfHasCorps;                               // 0x0504(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0505(0x0003) MISSED OFFSET
	int                                                BP_WarZoneRank_Tab;                                       // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WarZoneRankSelectType;                                 // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_WarZoneRank_PlayerData           BP_STRUCT_WarZoneRank_PlayerData;                         // 0x0510(0x0030) (Edit, BlueprintVisible)
	struct FBP_STRUCT_WarZoneRankInfoMe                BP_STRUCT_WarZoneRankInfoMe;                              // 0x0540(0x0088) (Edit, BlueprintVisible)
	int                                                BP_WarZoneRankSelectProvinceIndex;                        // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WarZoneRankSystemType;                                 // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_warzone_rank.bp_warzone_rank_C");
		return pStaticClass;
	}


	void EventWarZoneSelectOneStreet_NoFetch();
	void EventWarZoneSelectOneStreet();
	void EventWarZoneChangeType_NoFetch();
	void EventWarZoneChangeType();
	void EventWarZoneRefreshCityTable_NoFetch();
	void EventWarZoneRefreshCityTable();
	void EventOpenCountryStrongerUI_NoFetch();
	void EventOpenCountryStrongerUI();
	void EventWarZoneRankScrollPos_NoFetch();
	void EventWarZoneRankScrollPos();
	void EventWarZoneRankSelectID_NoFetch();
	void EventWarZoneRankSelectID();
	void EventWarZoneSelectProvince_NoFetch();
	void EventWarZoneSelectProvince();
	void EventShowMedalChoose_NoFetch();
	void EventShowMedalChoose();
	void EventShareWarZoneTitle_NoFetch();
	void EventShareWarZoneTitle();
	void EventWarZoneSelectDistrict_NoFetch();
	void EventWarZoneSelectDistrict();
	void EventWarZoneRuleButtonClick_NoFetch();
	void EventWarZoneRuleButtonClick();
	void EventWarZoneLBSShowStreetList_NoFetch();
	void EventWarZoneLBSShowStreetList();
	void EventWarzoneCantShowStreetList_NoFetch();
	void EventWarzoneCantShowStreetList();
	void EventWarZoneNeedRefreshStreetList_NoFetch();
	void EventWarZoneNeedRefreshStreetList();
	void EventOpenRegionStrongerUI_NoFetch();
	void EventOpenRegionStrongerUI();
	void EventWarZoneLBSCantShareButtonClick_NoFetch();
	void EventWarZoneLBSCantShareButtonClick();
	void EventWarZoneShowCorpsDetail_NoFetch();
	void EventWarZoneShowCorpsDetail();
	void EventWarZoneRankShowRole_NoFetch();
	void EventWarZoneRankShowRole();
	void EventWarZoneLBSButtonClick_NoFetch();
	void EventWarZoneLBSButtonClick();
	void EventWarZoneChangeRankTab_NoFetch();
	void EventWarZoneChangeRankTab();
	void EventWarZoneSelectItem_NoFetch();
	void EventWarZoneSelectItem();
	void EventWarZoneSelectCity_NoFetch();
	void EventWarZoneSelectCity();
	void EventWarZoneRankClose_NoFetch();
	void EventWarZoneRankClose();
	void UserConstructionScript();
};


}

