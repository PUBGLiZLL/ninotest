#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:46 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_first_recharge.bp_first_recharge_C
// 0x0020 (0x02F0 - 0x02D0)
class Abp_first_recharge_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_FirstRecharge_Item               BP_STRUCT_FirstRecharge_Item;                             // 0x02D4(0x000C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_FirstRecharge_Item>       BP_Array_First_Recharge_Data;                             // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_first_recharge.bp_first_recharge_C");
		return pStaticClass;
	}


	void EventFirstRechargeAward_NoFetch();
	void EventFirstRechargeAward();
	void EventFirstRechargeShowRechargeUI_NoFetch();
	void EventFirstRechargeShowRechargeUI();
	void UserConstructionScript();
};


}

