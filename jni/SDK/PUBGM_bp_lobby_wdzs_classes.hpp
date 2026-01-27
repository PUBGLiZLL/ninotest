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

// ScriptBlueprintGeneratedClass bp_lobby_wdzs.bp_lobby_wdzs_C
// 0x0038 (0x0308 - 0x02D0)
class Abp_lobby_wdzs_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_WDZS_Level;                                            // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_WDZS_TypeName;                                         // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_WDZS_SeasonID;                                         // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_WDZS_IsShareAwardShow;                                 // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	struct FString                                     BP_WDZS_Date;                                             // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WDZS_Score;                                            // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0304(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lobby_wdzs.bp_lobby_wdzs_C");
		return pStaticClass;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventLobbyWDZSShowShareUI_NoFetch();
	void EventLobbyWDZSShowShareUI();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void UserConstructionScript();
};


}

