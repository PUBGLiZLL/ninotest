#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:42 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_setting_uielem.bp_setting_uielem_C
// 0x0028 (0x02F8 - 0x02D0)
class Abp_setting_uielem_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_Setting_SelectLayoutFileName;                          // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Setting_SelectLayoutName;                              // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Setting_SyncTimeTag;                                   // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_SelectLayoutIndex;                             // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting_uielem.bp_setting_uielem_C");
		return pStaticClass;
	}


	void EventTryDownloadSaveData_NoFetch();
	void EventTryDownloadSaveData();
	void EventShowSelectPanel_NoFetch();
	void EventShowSelectPanel();
	void EventUploadSaveData_NoFetch();
	void EventUploadSaveData();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

