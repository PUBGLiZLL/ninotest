#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:44 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_corps_lobby.bp_corps_lobby_C
// 0x0060 (0x0330 - 0x02D0)
class Abp_corps_lobby_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CorpsLobbyUI_Battle_EquipWeaponID;                     // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsLobbyUI_StartRemainSeconds;                       // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsLobbyUI_BattleRoomID;                             // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsLobby_PlayerData            BP_STRUCT_CorpsLobby_PlayerData;                          // 0x02E0(0x0024) (Edit, BlueprintVisible)
	int                                                BP_CorpsLobbyUI_BattleStutas;                             // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CorpsLobbyUI_Battle_EquipUID;                          // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsLobbyUI_EndRemainSeconds;                         // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsLobbyUI_EmoteResID;                               // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsLobbyUI_CurAddPlayerIdx;                          // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CorpsLobbyUI_EmotePlayerGID;                           // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x032C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_lobby.bp_corps_lobby_C");
		return pStaticClass;
	}


	void EventCorpsLobbyUIClose_NoFetch();
	void EventCorpsLobbyUIClose();
	void EventCorpsLobbyUIHelp_NoFetch();
	void EventCorpsLobbyUIHelp();
	void EventCorpsLobbyPushAddIdxValue_NoFetch();
	void EventCorpsLobbyPushAddIdxValue();
	void UserConstructionScript();
};


}

