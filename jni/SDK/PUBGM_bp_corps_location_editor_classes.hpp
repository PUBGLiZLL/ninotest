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

// ScriptBlueprintGeneratedClass bp_corps_location_editor.bp_corps_location_editor_C
// 0x0028 (0x02F8 - 0x02D0)
class Abp_corps_location_editor_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FString>                             BP_ARRAY_CorpsHomepageLocationCity;                       // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsHomepageLocationSelectCity;                       // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             BP_ARRAY_CorpsHomepageLocationProvince;                   // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsHomepageLocationSelectProvince;                   // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_location_editor.bp_corps_location_editor_C");
		return pStaticClass;
	}


	void EventCorpsLocationEditorSelectProvince_NoFetch();
	void EventCorpsLocationEditorSelectProvince();
	void EventCorpsLocationEditorChange_NoFetch();
	void EventCorpsLocationEditorChange();
	void UserConstructionScript();
};


}

