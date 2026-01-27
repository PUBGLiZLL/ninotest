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

// ScriptBlueprintGeneratedClass bp_corps_training.bp_corps_training_C
// 0x0118 (0x03E8 - 0x02D0)
class Abp_corps_training_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Train_CorpsScore;                                      // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsTrainAwardItem>      BP_ARRAY_CorpsTrainAward;                                 // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsTrainRankItem               BP_STRUCT_CorpsTrainRankItem;                             // 0x02E4(0x0050) (Edit, BlueprintVisible)
	int                                                BP_Train_GetCorpsAwardIndex;                              // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Train_CorpsProgress;                                   // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Train_SelfTarget;                                      // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Train_SelectIsFriend;                                  // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	int                                                BP_Train_SelfTaskID;                                      // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsTrainAwardItem              BP_STRUCT_CorpsTrainAwardItem;                            // 0x0348(0x0008) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsTrainRankItemSelf           BP_STRUCT_CorpsTrainRankItemSelf;                         // 0x0350(0x0050) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsTrainCorpsTask              BP_STRUCT_CorpsTrainCorpsTask;                            // 0x03A0(0x0010) (Edit, BlueprintVisible)
	int                                                BP_Train_TodayID;                                         // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Train_SelfStatus;                                      // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsTrainCorpsTask>      BP_ARRAY_CorpsTrainCorpsTask;                             // 0x03B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Train_SelfScore;                                       // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Train_SelectRankUid;                                   // 0x03C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Train_isReLoadRankList;                                // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_CorpsTrainRankItem>       BP_ARRAY_CorpsTrainRankList;                              // 0x03D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_training.bp_corps_training_C");
		return pStaticClass;
	}


	void EventCorpsTrainingUIShowRoleInfo_NoFetch();
	void EventCorpsTrainingUIShowRoleInfo();
	void EventCorpsTrainingUIAddFriend_NoFetch();
	void EventCorpsTrainingUIAddFriend();
	void EventCorpsTrainingUIHelp_NoFetch();
	void EventCorpsTrainingUIHelp();
	void EventCorpsTrainingUIHide_NoFetch();
	void EventCorpsTrainingUIHide();
	void EventCorpsTrainingUIGetCorpsAward_NoFetch();
	void EventCorpsTrainingUIGetCorpsAward();
	void EventCorpsTrainingUIItemMenu_NoFetch();
	void EventCorpsTrainingUIItemMenu();
	void EventCorpsTrainingUIUpdate_NoFetch();
	void EventCorpsTrainingUIUpdate();
	void EventCorpsTrainingUIChat_NoFetch();
	void EventCorpsTrainingUIChat();
	void EventCorpsTrainingUIGetSelfAward_NoFetch();
	void EventCorpsTrainingUIGetSelfAward();
	void EventCorpsTrainingUIOpenHisRank_NoFetch();
	void EventCorpsTrainingUIOpenHisRank();
	void UserConstructionScript();
};


}

