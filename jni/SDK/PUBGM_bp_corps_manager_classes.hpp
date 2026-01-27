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

// ScriptBlueprintGeneratedClass bp_corps_manager.bp_corps_manager_C
// 0x003C (0x030C - 0x02D0)
class Abp_corps_manager_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CorpsManager_IconID;                                   // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsManager_PanelData           BP_STRUCT_CorpsManager_PanelData;                         // 0x02D8(0x000C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsManager_PanelInfo           BP_STRUCT_CorpsManager_PanelInfo;                         // 0x02E4(0x000C) (Edit, BlueprintVisible)
	TArray<struct FString>                             BP_ARRAY_CorpsManager_SegmentOption;                      // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_CorpsManager_LevelOption;                        // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0308(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_manager.bp_corps_manager_C");
		return pStaticClass;
	}


	void EventCorpsManagerOnClickClose_NoFetch();
	void EventCorpsManagerOnClickClose();
	void EventCorpsManagerOnClickConfirm_NoFetch();
	void EventCorpsManagerOnClickConfirm();
	void EventCorpsManagerOnClickChangeIcon_NoFetch();
	void EventCorpsManagerOnClickChangeIcon();
	void UserConstructionScript();
};


}

