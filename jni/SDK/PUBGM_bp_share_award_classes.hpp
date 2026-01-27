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

// ScriptBlueprintGeneratedClass bp_share_award.bp_share_award_C
// 0x00A0 (0x0370 - 0x02D0)
class Abp_share_award_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_AwardNum2;                                             // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ShareAward_ActiveTime;                                 // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CurShareNum;                                           // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ShareAwardInfo>           BP_ARRAY_ShareAwardInfoList;                              // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_AwardNum1;                                             // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GetAwardIndex;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_AwardItem1;                                            // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_AwardTime1;                                            // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_AwardName2;                                            // 0x0304(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SelAwardIndex;                                         // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ShareAwardInfo                   BP_STRUCT_ShareAwardInfo;                                 // 0x0314(0x003C) (Edit, BlueprintVisible)
	int                                                BP_AwardTime2;                                            // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GetAwardID;                                            // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsTodayShareDone;                                      // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	struct FString                                     BP_AwardName1;                                            // 0x035C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_AwardItem2;                                            // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x036C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_award.bp_share_award_C");
		return pStaticClass;
	}


	void EventShareAwardSelPanelHide_Push_NoFetch();
	void EventShareAwardSelPanelHide_Push();
	void EventShareAwardShare_Push_NoFetch();
	void EventShareAwardShare_Push();
	void EventShareAwardSelAward_Push_NoFetch();
	void EventShareAwardSelAward_Push();
	void EventShareAwardUIHide_Push_NoFetch();
	void EventShareAwardUIHide_Push();
	void EventShareAwardGetOnAward_Push_NoFetch();
	void EventShareAwardGetOnAward_Push();
	void UserConstructionScript();
};


}

