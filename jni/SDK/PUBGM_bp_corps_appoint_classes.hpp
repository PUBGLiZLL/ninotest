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

// ScriptBlueprintGeneratedClass bp_corps_appoint.bp_corps_appoint_C
// 0x010C (0x03DC - 0x02D0)
class Abp_corps_appoint_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x02D4(0x0040) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsAppoint_ListItemData        BP_STRUCT_CorpsAppoint_ListItemData;                      // 0x0314(0x0054) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsAppoint_PanelData           BP_STRUCT_CorpsAppoint_PanelData;                         // 0x0368(0x0054) (Edit, BlueprintVisible)
	int                                                BP_CorpsAppoint_ChangeType;                               // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_CorpsAppoint_PositionCountMax;                   // 0x03C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_CorpsAppoint_PositionCount;                      // 0x03CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_appoint.bp_corps_appoint_C");
		return pStaticClass;
	}


	void EventCorpsAppointOnClickClose_NoFetch();
	void EventCorpsAppointOnClickClose();
	void EventCorpsAppointOnClickConfirm_NoFetch();
	void EventCorpsAppointOnClickConfirm();
	void UserConstructionScript();
};


}

