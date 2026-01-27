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

// ScriptBlueprintGeneratedClass bp_versionupdate.bp_versionupdate_C
// 0x0080 (0x0350 - 0x02D0)
class Abp_versionupdate_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_IsExamin;                                              // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	int                                                BP_VersionUpdate_Last_Time;                               // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurPercent;                                            // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ShaderCompileCurPercent;                               // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_VersionUpdate_TimeAccBeginStamp;                       // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_VersionUpdate_Lock;                                    // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_VersionUpdate_Download_Speed;                          // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_VersionUpdateInfo                BP_STRUCT_VersionUpdateInfo;                              // 0x02F0(0x004C) (Edit, BlueprintVisible)
	struct FString                                     BP_CurStage;                                              // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_VersionUpdate_Last_File_Size;                          // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x034C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_versionupdate.bp_versionupdate_C");
		return pStaticClass;
	}


	void EventWindowsAppUpdate_NoFetch();
	void EventWindowsAppUpdate();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventWifiNotifyIOSAppUpdate_Push_NoFetch();
	void EventWifiNotifyIOSAppUpdate_Push();
	void EventWifiNotifyAndroidAppUpdate_Push_NoFetch();
	void EventWifiNotifyAndroidAppUpdate_Push();
	void EventNoConnectionStartUpdate_Push_NoFetch();
	void EventNoConnectionStartUpdate_Push();
	void EventShaderCompileProgress_NoFetch();
	void EventShaderCompileProgress();
	void EventNoWifiNotifyIOSAppUpdate_Push_NoFetch();
	void EventNoWifiNotifyIOSAppUpdate_Push();
	void UserConstructionScript();
};


}

