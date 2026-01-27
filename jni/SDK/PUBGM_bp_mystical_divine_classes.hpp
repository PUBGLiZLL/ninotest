#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:45 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_mystical_divine.bp_mystical_divine_C
// 0x00F8 (0x03C8 - 0x02D0)
class Abp_mystical_divine_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_MysticalDivine_FriendInfo        BP_STRUCT_MysticalDivine_FriendInfo;                      // 0x02D4(0x0048) (Edit, BlueprintVisible)
	int                                                BP_MysticalDivine_LuckyShareItem_Id;                      // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_MysticalDivine_InviteFriendName;                       // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MysticalDivine_Current_Show_Time_Sec;                  // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_MysticalDivine_FriendInfo> BP_ARRAY_MysticalDivine_FriendInfoList;                   // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MysticalDivine_LeftLotteryTimes;                       // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MysticalDivine_Countdown_Sec;                          // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_MysticalDivine_TaskInfo          BP_STRUCT_MysticalDivine_TaskInfo;                        // 0x0344(0x0040) (Edit, BlueprintVisible)
	int                                                BP_MysticalDivine_AddtiveBuffParamter;                    // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_MysticalDivine_WelcomeTip_Str;                         // 0x0388(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MysticalDivine_NextOpen_CountDown_Sec;                 // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_MysticalDivine_TaskInfo>  BP_ARRAY_MysticalDivine_TaskInfoList;                     // 0x0398(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MysticalDivine_GetAwardCard_idx;                       // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MysticalDivine_Already_Share;                          // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_MysticalDivine_DiffTaskIdxList;                  // 0x03AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MysticalDivine_InviteFriendUid;                        // 0x03B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_mystical_divine.bp_mystical_divine_C");
		return pStaticClass;
	}


	void EventMysticalDivineLottery_NoFetch();
	void EventMysticalDivineLottery();
	void EventMysticalDivineGetAward_NoFetch();
	void EventMysticalDivineGetAward();
	void EventMysticalDivineLuckyShare_NoFetch();
	void EventMysticalDivineLuckyShare();
	void EventMysticalDivineClickOfflineShare_NoFetch();
	void EventMysticalDivineClickOfflineShare();
	void EventMysticalDivineClickInviteTeam_NoFetch();
	void EventMysticalDivineClickInviteTeam();
	void EventMysticalDivineClickIcon_NoFetch();
	void EventMysticalDivineClickIcon();
	void EventMysticalDivineActivityBegin_NoFetch();
	void EventMysticalDivineActivityBegin();
	void EventMysticalDivineShareHide_NoFetch();
	void EventMysticalDivineShareHide();
	void EventMysticalDivineHelpClicked_NoFetch();
	void EventMysticalDivineHelpClicked();
	void EventMysticalDivineLuckyFriendHideUI_NoFetch();
	void EventMysticalDivineLuckyFriendHideUI();
	void EventMysticalDivineHideUI_NoFetch();
	void EventMysticalDivineHideUI();
	void EventMysticalDivineShare_NoFetch();
	void EventMysticalDivineShare();
	void UserConstructionScript();
};


}

