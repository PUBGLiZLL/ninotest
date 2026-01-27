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

// ScriptBlueprintGeneratedClass bp_setting_quickmessage.bp_setting_quickmessage_C
// 0x0044 (0x0314 - 0x02D0)
class Abp_setting_quickmessage_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ItemVoicePkg                     BP_STRUCT_ItemVoicePkg;                                   // 0x02D4(0x0020) (Edit, BlueprintVisible)
	struct FBP_STRUCT_ItemQuickMsg                     BP_STRUCT_ItemQuickMsg;                                   // 0x02F4(0x0004) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ItemQuickMsg>             BP_ARRAY_SavedQuickMsgSetting;                            // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ItemVoicePkg>             BP_ARRAY_VoicePkg;                                        // 0x0304(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting_quickmessage.bp_setting_quickmessage_C");
		return pStaticClass;
	}


	void EventSetLocalSavedQuickMsg_Push_NoFetch();
	void EventSetLocalSavedQuickMsg_Push();
	void EventOnQuickMsgModifiFinished_Push_NoFetch();
	void EventOnQuickMsgModifiFinished_Push();
	void EventGetServerSavedQuickMsgInfo_NoFetch();
	void EventGetServerSavedQuickMsgInfo();
	void UserConstructionScript();
};


}

