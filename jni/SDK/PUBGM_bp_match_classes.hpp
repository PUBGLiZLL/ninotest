#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:43 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_match.bp_match_C
// 0x002C (0x02FC - 0x02D0)
class Abp_match_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Estimate_time;                                         // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_MatchPopUI_CurLevel;                                   // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsMatchNoticeShowed;                                   // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	int                                                BP_PassedTime;                                            // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerStatus;                                          // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Show_BpAndExp_Buff;                                    // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsTeamLeader;                                          // 0x02F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Teamup_Show_WeakGuide;                                 // 0x02F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02F6(0x0002) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_match.bp_match_C");
		return pStaticClass;
	}


	void EventShowMatchFailedNotice_NoFetch();
	void EventShowMatchFailedNotice();
	void EventMatchPopupUITick_NoFetch();
	void EventMatchPopupUITick();
	void EventStartMatch_NoFetch();
	void EventStartMatch();
	void EventCancelReady_NoFetch();
	void EventCancelReady();
	void EventCancelMatch_NoFetch();
	void EventCancelMatch();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

