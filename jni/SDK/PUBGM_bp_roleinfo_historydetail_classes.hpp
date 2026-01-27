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

// ScriptBlueprintGeneratedClass bp_roleinfo_historydetail.bp_roleinfo_historydetail_C
// 0x01EC (0x04BC - 0x02D0)
class Abp_roleinfo_historydetail_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_HistoryDetail_BattleIDString;                          // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoleInfoHistoryRecordDetail      BP_STRUCT_RoleInfoHistoryRecordDetail;                    // 0x02E0(0x00A8) (Edit, BlueprintVisible)
	struct FString                                     BP_HistoryDetail_AddFriendUID;                            // 0x0388(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_HistoryDetail_AddFriendGender;                         // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_HistoryDetail_SelfIconURL;                             // 0x0398(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_RoleInfoHistoryTeammateInfo> BP_ARRAY_RoleInfoHistoryTeammateInfoList;                 // 0x03A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_HistoryDetail_SelfFrameLevel;                          // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_HistoryDetail_TodayShareNum;                           // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_HistoryDetail_ShareGold;                               // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	struct FBP_STRUCT_RoleInfoHistoryTeammateInfo      BP_STRUCT_RoleInfoHistoryTeammateInfo;                    // 0x03BC(0x0060) (Edit, BlueprintVisible)
	int                                                BP_HistoryDetail_SelfGender;                              // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_HistoryDetail_SelfName;                                // 0x0420(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoleInfoHistoryRoleBasicInfo     BP_STRUCT_RoleInfoHistoryRoleBasicInfo;                   // 0x042C(0x002C) (Edit, BlueprintVisible)
	struct FString                                     BP_HistoryDetail_SelfID;                                  // 0x0458(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_HistoryDetail_SegmentProtectTips;                      // 0x0464(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoleInfoHistoryRadarInfo         BP_STRUCT_RoleInfoHistoryRadarInfo;                       // 0x0470(0x0048) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_historydetail.bp_roleinfo_historydetail_C");
		return pStaticClass;
	}


	void EventRoleInfoHistoryShareResults_NoFetch();
	void EventRoleInfoHistoryShareResults();
	void EventRoleInfoHistoryDetailReport_NoFetch();
	void EventRoleInfoHistoryDetailReport();
	void EventRoleInfoHistoryClickBlackRoom_NoFetch();
	void EventRoleInfoHistoryClickBlackRoom();
	void EventRoleInfoHistoryShareRanking_NoFetch();
	void EventRoleInfoHistoryShareRanking();
	void EventRoleInfoHistoryDetailAddFriend_NoFetch();
	void EventRoleInfoHistoryDetailAddFriend();
	void EventRoleInfoHistoryDetailRelease_NoFetch();
	void EventRoleInfoHistoryDetailRelease();
	void UserConstructionScript();
};


}

