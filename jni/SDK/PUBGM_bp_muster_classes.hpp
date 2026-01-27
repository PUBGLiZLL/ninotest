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

// ScriptBlueprintGeneratedClass bp_muster.bp_muster_C
// 0x013C (0x040C - 0x02D0)
class Abp_muster_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_Muster_ActiveTime;                                     // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MusterAward                      BP_STRUCT_MusterAward;                                    // 0x02E0(0x0018) (Edit, BlueprintVisible)
	int                                                BP_Muster_TabIndex;                                       // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Muster_TodayGangUpNum;                                 // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_MusterAward>              BP_ARRAY_MusterAwardList;                                 // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Muster_TotalGangUpScore;                               // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_MusterPlayerInfo                 BP_STRUCT_MusterPlayerInfo;                               // 0x0310(0x0050) (Edit, BlueprintVisible)
	int                                                BP_Muster_GetAwardIndex;                                  // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Muster_TotalScore;                                     // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Muster_IsFriend;                                       // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Muster_IsBind;                                         // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x036A(0x0002) MISSED OFFSET
	struct FString                                     BP_Muster_BindCode;                                       // 0x036C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MusterTabInfo                    BP_STRUCT_MusterTabInfo;                                  // 0x0378(0x0010) (Edit, BlueprintVisible)
	struct FString                                     BP_Muster_FriendUid;                                      // 0x0388(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MusterPlayerInfo>         BP_ARRAY_MusterInviteList;                                // 0x0394(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MusterBindPlayer                 BP_STRUCT_MusterBindPlayer;                               // 0x03A0(0x0050) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_MusterTabInfo>            BP_ARRAY_MusterTabList;                                   // 0x03F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Muster_SelfInviteCode;                                 // 0x03FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0408(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_muster.bp_muster_C");
		return pStaticClass;
	}


	void EventMusterUIHelp_NoFetch();
	void EventMusterUIHelp();
	void EventMusterUIUpdate_NoFetch();
	void EventMusterUIUpdate();
	void EventMusterCopyCode_NoFetch();
	void EventMusterCopyCode();
	void EventMusterShowLog_NoFetch();
	void EventMusterShowLog();
	void EventMusterAddFriend_NoFetch();
	void EventMusterAddFriend();
	void EventMusterBind_NoFetch();
	void EventMusterBind();
	void EventMusterPasteCode_NoFetch();
	void EventMusterPasteCode();
	void EventMusterCheckFriend_NoFetch();
	void EventMusterCheckFriend();
	void EventMusterUIHide_NoFetch();
	void EventMusterUIHide();
	void EventMusterOpenShop_NoFetch();
	void EventMusterOpenShop();
	void EventMusterGetAward_NoFetch();
	void EventMusterGetAward();
	void EventMusterShare_NoFetch();
	void EventMusterShare();
	void UserConstructionScript();
};


}

