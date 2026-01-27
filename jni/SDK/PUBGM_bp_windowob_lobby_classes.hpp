#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:46 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_windowob_lobby.bp_windowob_lobby_C
// 0x0074 (0x0344 - 0x02D0)
class Abp_windowob_lobby_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_OBLobbySpawnPlayerData           BP_STRUCT_OBLobbySpawnPlayerData;                         // 0x02D4(0x002C) (Edit, BlueprintVisible)
	struct FString                                     BP_Windowob_Lobby_Watching_UID;                           // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Windowob_Lobby_Watching_Flag;                          // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_OBPlayerData                     BP_STRUCT_OBPlayerData;                                   // 0x0310(0x0030) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_windowob_lobby.bp_windowob_lobby_C");
		return pStaticClass;
	}


	void EventOBEnterWatching_NoFetch();
	void EventOBEnterWatching();
	void EventOBEnterSetting_NoFetch();
	void EventOBEnterSetting();
	void EventOBEnterRoom_NoFetch();
	void EventOBEnterRoom();
	void EventOBWatchingPushValue_NoFetch();
	void EventOBWatchingPushValue();
	void UserConstructionScript();
};


}

