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

// ScriptBlueprintGeneratedClass bp_login.bp_login_C
// 0x0044 (0x0314 - 0x02D0)
class Abp_login_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_SelectedShowServerInfo;                                // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_InputOpenId;                                           // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ServerInfo>               BP_ARRAY_ServerList_Info;                                 // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ServerInfo                       BP_STRUCT_ServerInfo;                                     // 0x02F0(0x0020) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_login.bp_login_C");
		return pStaticClass;
	}


	void EventOpenExampleUI_NoFetch();
	void EventOpenExampleUI();
	void EventHideScrollView_NoFetch();
	void EventHideScrollView();
	void EventConnectToGate_NoFetch();
	void EventConnectToGate();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventLogout_NoFetch();
	void EventLogout();
	void EventShowCurrentSelect_NoFetch();
	void EventShowCurrentSelect();
	void EventShowScrollView_NoFetch();
	void EventShowScrollView();
	void UserConstructionScript();
};


}

