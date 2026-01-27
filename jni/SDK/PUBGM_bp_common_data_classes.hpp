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

// ScriptBlueprintGeneratedClass bp_common_data.bp_common_data_C
// 0x0050 (0x0320 - 0x02D0)
class Abp_common_data_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_CommonItemData                   BP_STRUCT_CommonItemData;                                 // 0x02D4(0x003C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CommonItemData>           BP_ARRAY_CommonItemData;                                  // 0x0310(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x031C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_common_data.bp_common_data_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

