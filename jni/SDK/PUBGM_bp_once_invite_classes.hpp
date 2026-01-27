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

// ScriptBlueprintGeneratedClass bp_once_invite.bp_once_invite_C
// 0x0074 (0x0344 - 0x02D0)
class Abp_once_invite_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_OnceInviteProfileInfo>    BP_ARRAY_OnceInviteMember;                                // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_OnceInviteProfileInfo            BP_STRUCT_OnceInviteProfileInfo;                          // 0x02E0(0x0050) (Edit, BlueprintVisible)
	int                                                BP_OnceInvite_Count_Down;                                 // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_OnceInvite_tips;                                       // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_once_invite.bp_once_invite_C");
		return pStaticClass;
	}


	void EventOnceInviteClickBtnNextTime_NoFetch();
	void EventOnceInviteClickBtnNextTime();
	void EventOnceInviteClickBtnMember2_NoFetch();
	void EventOnceInviteClickBtnMember2();
	void EventOnceInviteClickBtnMember1_NoFetch();
	void EventOnceInviteClickBtnMember1();
	void EventOnceInviteClickBtnMember3_NoFetch();
	void EventOnceInviteClickBtnMember3();
	void EventOnceInviteClickBtnInvite_NoFetch();
	void EventOnceInviteClickBtnInvite();
	void UserConstructionScript();
};


}

