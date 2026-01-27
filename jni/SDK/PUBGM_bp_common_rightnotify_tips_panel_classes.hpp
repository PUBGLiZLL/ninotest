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

// ScriptBlueprintGeneratedClass bp_common_rightnotify_tips_panel.bp_common_rightnotify_tips_panel_C
// 0x0034 (0x0304 - 0x02D0)
class Abp_common_rightnotify_tips_panel_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_CommonRightNotify_Msg;                                 // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CommonRightNotify_TickState;                           // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CommonRightNotify_OKText;                              // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CommonRightNotify_CancelText;                          // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CommonRightNotify_TotalCount;                          // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_common_rightnotify_tips_panel.bp_common_rightnotify_tips_panel_C");
		return pStaticClass;
	}


	void EventRightNotifyOnOK_NoFetch();
	void EventRightNotifyOnOK();
	void EventRightNotifyOnAfterShow_NoFetch();
	void EventRightNotifyOnAfterShow();
	void EventRightNotifyOnAfterHide_NoFetch();
	void EventRightNotifyOnAfterHide();
	void EventRightNotifyOnCancel_NoFetch();
	void EventRightNotifyOnCancel();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

