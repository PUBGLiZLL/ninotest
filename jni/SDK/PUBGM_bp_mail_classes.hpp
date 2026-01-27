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

// ScriptBlueprintGeneratedClass bp_mail.bp_mail_C
// 0x0078 (0x0348 - 0x02D0)
class Abp_mail_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_INVITE_UID;                                            // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Mail_Sys_Unread_Count;                                    // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Mail_Filter_Type;                                         // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Mail_UpdateOneMailItem;                                   // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_InviteInfo>               BP_ARRAY_INVITE_INFO_LIST;                                // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Mail_Friend_Unread_Count;                                 // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Mail_PlayerInTeam;                                     // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_MailInfo>                 BP_ARRAY_MailList;                                        // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Mail_Select_ID;                                           // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Mail_OpenUrl;                                             // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MailClickHead_UID;                                     // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Mail_Count;                                               // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Mail_Notice_Unread_Count;                                 // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Mail_Max_Count;                                           // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Mail_ShowRecvAttachMailId;                                // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Mail_Gift_Unread_Count;                                   // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0344(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_mail.bp_mail_C");
		return pStaticClass;
	}


	void EventMailReceiveAttach_NoFetch();
	void EventMailReceiveAttach();
	void EventMailDeleteAll_NoFetch();
	void EventMailDeleteAll();
	void EventMailChangeFilterType_NoFetch();
	void EventMailChangeFilterType();
	void EventMailReceiveAll_NoFetch();
	void EventMailReceiveAll();
	void EventMailDelete_NoFetch();
	void EventMailDelete();
	void EventMailReadAll_NoFetch();
	void EventMailReadAll();
	void EventMailClose_NoFetch();
	void EventMailClose();
	void EventFetchMailInfo_NoFetch();
	void EventFetchMailInfo();
	void EventOnClickHead_Push_NoFetch();
	void EventOnClickHead_Push();
	void EventHideGiftMsgCenter_NoFetch();
	void EventHideGiftMsgCenter();
	void EventInviteFriend_NoFetch();
	void EventInviteFriend();
	void EventJoin_NoFetch();
	void EventJoin();
	void EventShowGiftMsgCenter_NoFetch();
	void EventShowGiftMsgCenter();
	void EventMailRequestList_NoFetch();
	void EventMailRequestList();
	void EventMailAddTestDatas_NoFetch();
	void EventMailAddTestDatas();
	void EventMailReceiveAllNext_NoFetch();
	void EventMailReceiveAllNext();
	void EventMailViewBtnClick_NoFetch();
	void EventMailViewBtnClick();
	void EventMailRead_NoFetch();
	void EventMailRead();
	void UserConstructionScript();
};


}

