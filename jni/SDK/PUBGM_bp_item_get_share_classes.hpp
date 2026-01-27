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

// ScriptBlueprintGeneratedClass bp_item_get_share.bp_item_get_share_C
// 0x004C (0x031C - 0x02D0)
class Abp_item_get_share_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ItemGetShare_ShowInfo            BP_STRUCT_ItemGetShare_ShowInfo;                          // 0x02D4(0x0044) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0318(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_item_get_share.bp_item_get_share_C");
		return pStaticClass;
	}


	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventItemShareHide_NoFetch();
	void EventItemShareHide();
	void EventShowSharePanel_NoFetch();
	void EventShowSharePanel();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

