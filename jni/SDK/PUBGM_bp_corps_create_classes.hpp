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

// ScriptBlueprintGeneratedClass bp_corps_create.bp_corps_create_C
// 0x0040 (0x0310 - 0x02D0)
class Abp_corps_create_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CorpsCreate_Currency_Price;                            // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CorpsCreate_Name;                                      // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsCreate_Currency_Icon_ID;                          // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CorpsCreate_Currency_Own;                              // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CorpsCreate_City;                                      // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CorpsCreate_Announcement;                              // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x030C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_create.bp_corps_create_C");
		return pStaticClass;
	}


	void EventCorpsCreateHideUI_NoFetch();
	void EventCorpsCreateHideUI();
	void EventCorpsCreateShowUI_NoFetch();
	void EventCorpsCreateShowUI();
	void EventOpenCorpsIconSelectPanel_NoFetch();
	void EventOpenCorpsIconSelectPanel();
	void EventOnCorpsCreateButtonClicked_Push_NoFetch();
	void EventOnCorpsCreateButtonClicked_Push();
	void EventCorpsCreateUIFilterName_NoFetch();
	void EventCorpsCreateUIFilterName();
	void EventCorpsTaskHelpShow_NoFetch();
	void EventCorpsTaskHelpShow();
	void EventCorpsCreateLocate_NoFetch();
	void EventCorpsCreateLocate();
	void EventCorpsCreateFetchInfo_NoFetch();
	void EventCorpsCreateFetchInfo();
	void UserConstructionScript();
};


}

