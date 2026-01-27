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

// ScriptBlueprintGeneratedClass bp_watching_invite.bp_watching_invite_C
// 0x0028 (0x02F8 - 0x02D0)
class Abp_watching_invite_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_WatchingInviteUI_IgnoreTips;                           // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_InviteWnd_StayTime;                                    // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_WatchingInviteUI_Tips;                                 // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_WatchingInviteUI_IsReserved;                           // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_watching_invite.bp_watching_invite_C");
		return pStaticClass;
	}


	void EventWatchingInviteClickWatching_NoFetch();
	void EventWatchingInviteClickWatching();
	void EventWatchingInviteClickIgnore_NoFetch();
	void EventWatchingInviteClickIgnore();
	void EventWatchingInviteClickBook_NoFetch();
	void EventWatchingInviteClickBook();
	void UserConstructionScript();
};


}

