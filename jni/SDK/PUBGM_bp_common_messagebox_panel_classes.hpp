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

// ScriptBlueprintGeneratedClass bp_common_messagebox_panel.bp_common_messagebox_panel_C
// 0x0040 (0x0310 - 0x02D0)
class Abp_common_messagebox_panel_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_CommonMessageBox_IsShowPlatform;                       // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	int                                                BP_CommonMessageBox_style;                                // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CommonMessageBox_msg;                                  // 0x02DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CommonMessageBox_OK;                                   // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CommonMessageBox_title;                                // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CommonMessageBox_Cancel;                               // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x030C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_common_messagebox_panel.bp_common_messagebox_panel_C");
		return pStaticClass;
	}


	void EventCommonMessageBoxTimerInvoke_NoFetch();
	void EventCommonMessageBoxTimerInvoke();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventCommonMessageBoxAfterHide_NoFetch();
	void EventCommonMessageBoxAfterHide();
	void EventCommonMessageBoxClickCancel_NoFetch();
	void EventCommonMessageBoxClickCancel();
	void EventCommonMessageBoxClickOK_NoFetch();
	void EventCommonMessageBoxClickOK();
	void UserConstructionScript();
};


}

