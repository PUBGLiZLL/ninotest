#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:47 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_update_notice.bp_update_notice_C
// 0x003C (0x030C - 0x02D0)
class Abp_update_notice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_Update_Notice_Tip_Scene;                               // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Update_Notice_Cancel_Text;                             // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Update_Notice_Ok_Text;                                 // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Update_Notice_Scene;                                   // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Update_Notice_Type;                                    // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0308(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_update_notice.bp_update_notice_C");
		return pStaticClass;
	}


	void EventUpdateNoticeClickHelp_NoFetch();
	void EventUpdateNoticeClickHelp();
	void EventUpdateNoticeClickCancel_NoFetch();
	void EventUpdateNoticeClickCancel();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventUpdateNoticeClickOk_NoFetch();
	void EventUpdateNoticeClickOk();
	void UserConstructionScript();
};


}

