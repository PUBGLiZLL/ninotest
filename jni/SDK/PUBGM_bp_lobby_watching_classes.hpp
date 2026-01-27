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

// ScriptBlueprintGeneratedClass bp_lobby_watching.bp_lobby_watching_C
// 0x0088 (0x0358 - 0x02D0)
class Abp_lobby_watching_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_FriendProfile_LobbyWatching      BP_STRUCT_FriendProfile_LobbyWatching;                    // 0x02D4(0x0054) (Edit, BlueprintVisible)
	struct FBP_STRUCT_FriendProfile_LobbyWatching_Select BP_STRUCT_FriendProfile_LobbyWatching_Select;             // 0x0328(0x0010) (Edit, BlueprintVisible)
	int                                                BP_LobbyWatching_CurPlayerItem_Idx;                       // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyWatching_FriendCutDownIdx;                        // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FriendProfile_LobbyWatching> BP_Array_LobbyWatching_FriendData;                        // 0x0340(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LobbyWatching_CurPanel_Type;                           // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyWatching_FriendCutDownTime;                       // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0354(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lobby_watching.bp_lobby_watching_C");
		return pStaticClass;
	}


	void EventEnterLobbyWatching_NoFetch();
	void EventEnterLobbyWatching();
	void EventSwitchPanelLightCallBack_NoFetch();
	void EventSwitchPanelLightCallBack();
	void EventLobbyWatchingClose_NoFetch();
	void EventLobbyWatchingClose();
	void EventLobbyWatchingRefreshCountDownTime_NoFetch();
	void EventLobbyWatchingRefreshCountDownTime();
	void UserConstructionScript();
};


}

