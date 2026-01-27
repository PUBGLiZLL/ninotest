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

// ScriptBlueprintGeneratedClass bp_popup_notice.bp_popup_notice_C
// 0x0074 (0x0344 - 0x02D0)
class Abp_popup_notice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_MessageBoxData>           BP_ARRAY_MessageBoxStack;                                 // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_PendingMessageBoxCallback;                             // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MessageBoxButton                 BP_STRUCT_MessageBoxButton;                               // 0x02EC(0x0018) (Edit, BlueprintVisible)
	struct FBP_STRUCT_MessageBoxData                   BP_STRUCT_MessageBoxData;                                 // 0x0304(0x0024) (Edit, BlueprintVisible)
	struct FString                                     BP_NoticeTitle;                                           // 0x0328(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_NoticeMsg;                                             // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_popup_notice.bp_popup_notice_C");
		return pStaticClass;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventShrinkMessageBoxStack_NoFetch();
	void EventShrinkMessageBoxStack();
	void EventShowOpenSpeakerAtFirst_Push_NoFetch();
	void EventShowOpenSpeakerAtFirst_Push();
	void EventCallPendingMessageBoxCallback_Push_NoFetch();
	void EventCallPendingMessageBoxCallback_Push();
	void EventPopupNoticeShowBox_Push_NoFetch();
	void EventPopupNoticeShowBox_Push();
	void UserConstructionScript();
};


}

