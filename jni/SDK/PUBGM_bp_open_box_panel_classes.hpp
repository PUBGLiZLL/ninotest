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

// ScriptBlueprintGeneratedClass bp_open_box_panel.bp_open_box_panel_C
// 0x0024 (0x02F4 - 0x02D0)
class Abp_open_box_panel_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_OpenBoxPanel_ItemData            BP_STRUCT_OpenBoxPanel_ItemData;                          // 0x02D4(0x001C) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_open_box_panel.bp_open_box_panel_C");
		return pStaticClass;
	}


	void EventAfterHideOpenBox_NoFetch();
	void EventAfterHideOpenBox();
	void EventOpenBoxBuyAgain_NoFetch();
	void EventOpenBoxBuyAgain();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventCheckOpenBox_NoFetch();
	void EventCheckOpenBox();
	void UserConstructionScript();
};


}

