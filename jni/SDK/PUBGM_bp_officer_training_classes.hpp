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

// ScriptBlueprintGeneratedClass bp_officer_training.bp_officer_training_C
// 0x0060 (0x0330 - 0x02D0)
class Abp_officer_training_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CurrentOperateOfficerTrainingId;                       // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_OfficerTrainingBoxInfo           BP_STRUCT_OfficerTrainingBoxInfo;                         // 0x02D8(0x0018) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_OfficerTrainingBoxInfo>   BP_ARRAY_OfficerTrainingBoxInfos;                         // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_OfficerTrainingItemCount;                              // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_OfficerTrainingInfo              BP_STRUCT_OfficerTrainingInfo;                            // 0x0300(0x000C) (Edit, BlueprintVisible)
	struct FString                                     BP_OfficerTrainingTipsString;                             // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_OfficerTrainingAnimationStatus;                        // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_OfficerTrainingInfo>      BP_ARRAY_OfficerTrainingInfos;                            // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CurrentOperateOfficerTrainingBoxId;                    // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x032C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_officer_training.bp_officer_training_C");
		return pStaticClass;
	}


	void EventOfficerTrainingUIClose_NoFetch();
	void EventOfficerTrainingUIClose();
	void EventOfficerTrainingOnRuleBtnClicked_NoFetch();
	void EventOfficerTrainingOnRuleBtnClicked();
	void EventOfficerTrainingOnChangeTaskClicked_NoFetch();
	void EventOfficerTrainingOnChangeTaskClicked();
	void EventOfficerTrainingOnGotAward_NoFetch();
	void EventOfficerTrainingOnGotAward();
	void EventOfficerTrainingOnShowAward_NoFetch();
	void EventOfficerTrainingOnShowAward();
	void EventOfficerTrainingOnGetAward_NoFetch();
	void EventOfficerTrainingOnGetAward();
	void UserConstructionScript();
};


}

