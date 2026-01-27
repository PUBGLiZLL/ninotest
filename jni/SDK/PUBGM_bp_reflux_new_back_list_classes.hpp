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

// ScriptBlueprintGeneratedClass bp_reflux_new_back_list.bp_reflux_new_back_list_C
// 0x0058 (0x0328 - 0x02D0)
class Abp_reflux_new_back_list_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_Reflux_New_Back_Friend_Info> BP_ARRAY_Reflux_New_Back_Friend_List;                     // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Reflux_New_Back_Friend_Info      BP_STRUCT_Reflux_New_Back_Friend_Info;                    // 0x02E0(0x0044) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0324(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_reflux_new_back_list.bp_reflux_new_back_list_C");
		return pStaticClass;
	}


	void EventUIRefluxNewBackListClose_NoFetch();
	void EventUIRefluxNewBackListClose();
	void UserConstructionScript();
};


}

