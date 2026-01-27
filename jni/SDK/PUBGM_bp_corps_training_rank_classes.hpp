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

// ScriptBlueprintGeneratedClass bp_corps_training_rank.bp_corps_training_rank_C
// 0x00F4 (0x03C4 - 0x02D0)
class Abp_corps_training_rank_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_CorpsTrainRankItemMe             BP_STRUCT_CorpsTrainRankItemMe;                           // 0x02D4(0x0050) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsTrainRankTabInfo            BP_STRUCT_CorpsTrainRankTabInfo;                          // 0x0324(0x0018) (Edit, BlueprintVisible)
	int                                                BP_CorpsTrainRank_TabIndex;                               // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsTrainRank_IsReLoadList;                           // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	struct FString                                     BP_CorpsTrainRank_SelectUid;                              // 0x0344(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsTrainRankItem               BP_STRUCT_CorpsTrainRankItem;                             // 0x0350(0x0050) (Edit, BlueprintVisible)
	int                                                BP_CorpsTrainRank_TrainID;                                // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsTrainRankItem>       BP_ARRAY_CorpsTrainRankItemList;                          // 0x03A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsTrainRankTabInfo>    BP_ARRAY_CorpsTrainRankTabList;                           // 0x03B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CorpsTrainRank_SelectIsFriend;                         // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_training_rank.bp_corps_training_rank_C");
		return pStaticClass;
	}


	void EventCorpsTrainingRankUIShowRoleInfo_NoFetch();
	void EventCorpsTrainingRankUIShowRoleInfo();
	void EventCorpsTrainingRankUIUpdate_NoFetch();
	void EventCorpsTrainingRankUIUpdate();
	void EventCorpsTrainingRankUIChat_NoFetch();
	void EventCorpsTrainingRankUIChat();
	void EventCorpsTrainingRankUIHide_NoFetch();
	void EventCorpsTrainingRankUIHide();
	void EventCorpsTrainingRankUIItemMenu_NoFetch();
	void EventCorpsTrainingRankUIItemMenu();
	void EventCorpsTrainingRankUIAddFriend_NoFetch();
	void EventCorpsTrainingRankUIAddFriend();
	void UserConstructionScript();
};


}

