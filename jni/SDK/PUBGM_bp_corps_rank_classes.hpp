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

// ScriptBlueprintGeneratedClass bp_corps_rank.bp_corps_rank_C
// 0x00F4 (0x03C4 - 0x02D0)
class Abp_corps_rank_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_STRUCT_MyCorpsRankNumPro;                              // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsUinInfo                     BP_STRUCT_CorpsUinInfo;                                   // 0x02D8(0x0004) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CorpsUinInfo>             BP_ARRAY_Corps_RankUinList;                               // 0x02DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsRankInfo>            BP_ARRAY_Corps_RankInfoList;                              // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_STRUCT_MyCorpsRankNum;                                 // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_MyCorpsRankInfo                  BP_STRUCT_MyCorpsRankInfo;                                // 0x02F8(0x0030) (Edit, BlueprintVisible)
	int                                                BP_Corps_Rank_Trans_Begin_Index;                          // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Corps_Rank_Trans_End_Index;                            // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Crops_Rank_Now_Super_Type;                             // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Corps_Rank_Is_Lock_Uin;                                // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	struct FString                                     BP_Crops_Rank_Select_LeaderName;                          // 0x0338(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsRank_PlayerData             BP_STRUCT_CorpsRank_PlayerData;                           // 0x0344(0x0030) (Edit, BlueprintVisible)
	int                                                BP_Crops_Rank_Select_LeaderSex;                           // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Corps_Rank_Current_ID;                                 // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Crops_Rank_Now_Type;                                   // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Corps_Rank_Is_Lock_SelfInfo;                           // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	struct FString                                     BP_CorpsRankSelectItemUid;                                // 0x0384(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsRankInfo                    BP_STRUCT_CorpsRankInfo;                                  // 0x0390(0x0030) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_rank.bp_corps_rank_C");
		return pStaticClass;
	}


	void EventCorpsRankShowCorpsDetails_NoFetch();
	void EventCorpsRankShowCorpsDetails();
	void EventCorpsRankHideUI_NoFetch();
	void EventCorpsRankHideUI();
	void EventCorpsRankTypeChange_NoFetch();
	void EventCorpsRankTypeChange();
	void EventCorpsRankShowUI_NoFetch();
	void EventCorpsRankShowUI();
	void EventCorpsRankOnShow_NoFetch();
	void EventCorpsRankOnShow();
	void EventCorpsRankGetNextInfo_NoFetch();
	void EventCorpsRankGetNextInfo();
	void EventCorpsRankShowCorpsAvatar_NoFetch();
	void EventCorpsRankShowCorpsAvatar();
	void EventCorpsRankOnHide_NoFetch();
	void EventCorpsRankOnHide();
	void UserConstructionScript();
};


}

