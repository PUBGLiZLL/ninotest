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

// ScriptBlueprintGeneratedClass bp_reflux_new.bp_reflux_new_C
// 0x01B4 (0x0484 - 0x02D0)
class Abp_reflux_new_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_Reflux_New_Task_Info>     BP_ARRAY_Reflux_New_Task_Infos;                           // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Reflux_New_Team_Friend>   BP_ARRAY_Reflux_New_Team_FriendList;                      // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Reflux_New_Task_ID;                                    // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Reflux_New_Task_Info             BP_STRUCT_Reflux_New_Task_Info;                           // 0x02F0(0x0040) (Edit, BlueprintVisible)
	struct FString                                     BP_Reflux_New_Call_Friend_UID;                            // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Reflux_New_Team_Friend           BP_STRUCT_Reflux_New_Team_Friend;                         // 0x033C(0x0048) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_Reflux_New_Award_Info>    BP_ARRAY_Reflux_New_Award_Infos;                          // 0x0384(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Reflux_New_Invite_Award_Status;                        // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	int                                                BP_Reflux_New_Total_Back_Count;                           // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Reflux_New_Friend_Count;                               // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Reflux_New_Open_Time;                                  // 0x039C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Reflux_New_TabIdx;                                     // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_RefluxNew_Team_CurrentID;                              // 0x03AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Reflux_New_Friend_Page_Idx;                            // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Reflux_New_Award_Index_Get;                            // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_Reflux_New_Friend_Info>   BP_ARRAY_Reflux_New_Friend_Infos;                         // 0x03C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Reflux_New_Task_Award_Status;                          // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	int                                                BP_Reflux_New_Team_Page_Idx;                              // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Reflux_New_Call_Friend_OpenID;                         // 0x03D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Reflux_New_Award_Info            BP_STRUCT_Reflux_New_Award_Info;                          // 0x03E0(0x0044) (Edit, BlueprintVisible)
	struct FString                                     BP_Reflux_New_Help_Content;                               // 0x0424(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Reflux_New_Friend_Info>   BP_ARRAY_Reflux_New_Register_Friend_Infos;                // 0x0430(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Reflux_New_Friend_Info           BP_STRUCT_Reflux_New_Friend_Info;                         // 0x043C(0x0044) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_reflux_new.bp_reflux_new_C");
		return pStaticClass;
	}


	void EventRefluxNewPrePage_NoFetch();
	void EventRefluxNewPrePage();
	void EventRefluxNewSelectFriend_NoFetch();
	void EventRefluxNewSelectFriend();
	void EventRefluxNewShare_NoFetch();
	void EventRefluxNewShare();
	void EventRefluxNewTabSelect_NoFetch();
	void EventRefluxNewTabSelect();
	void EventRefluxNewViewRegisterFriend_NoFetch();
	void EventRefluxNewViewRegisterFriend();
	void EventRefluxNewRule_NoFetch();
	void EventRefluxNewRule();
	void EventRefluxNewGetTaskAward_NoFetch();
	void EventRefluxNewGetTaskAward();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventRefluxNewViewBox_NoFetch();
	void EventRefluxNewViewBox();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventRefluxNewFriendInvite_NoFetch();
	void EventRefluxNewFriendInvite();
	void EventRefluxNewGetAward_NoFetch();
	void EventRefluxNewGetAward();
	void EventViewFriendAward_NoFetch();
	void EventViewFriendAward();
	void EventRefluxNewNextPage_NoFetch();
	void EventRefluxNewNextPage();
	void EventRefluxNewInviteButtonClicked_NoFetch();
	void EventRefluxNewInviteButtonClicked();
	void EventRefluxNewTeamNextPage_NoFetch();
	void EventRefluxNewTeamNextPage();
	void EventRefluxNewCloseUI_NoFetch();
	void EventRefluxNewCloseUI();
	void UserConstructionScript();
};


}

