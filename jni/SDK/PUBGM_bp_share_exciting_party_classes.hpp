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

// ScriptBlueprintGeneratedClass bp_share_exciting_party.bp_share_exciting_party_C
// 0x0024 (0x02F4 - 0x02D0)
class Abp_share_exciting_party_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_ShareExcitingPartyPath;                                // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ShareExcitingPartyInfo           BP_STRUCT_ShareExcitingPartyInfo;                         // 0x02E0(0x0010) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_exciting_party.bp_share_exciting_party_C");
		return pStaticClass;
	}


	void EventExcitingPartyHideUI_NoFetch();
	void EventExcitingPartyHideUI();
	void EventExcitingPartyWXZoneBtn_NoFetch();
	void EventExcitingPartyWXZoneBtn();
	void EventExcitingPartyQQZoneBtn_NoFetch();
	void EventExcitingPartyQQZoneBtn();
	void EventShareExcitingPartyFetchInfo_NoFetch();
	void EventShareExcitingPartyFetchInfo();
	void EventExcitingPartyWXFriendBtn_NoFetch();
	void EventExcitingPartyWXFriendBtn();
	void EventExcitingPartyQQFriendBtn_NoFetch();
	void EventExcitingPartyQQFriendBtn();
	void EventShareExcitingParty_Push_NoFetch();
	void EventShareExcitingParty_Push();
	void UserConstructionScript();
};


}

