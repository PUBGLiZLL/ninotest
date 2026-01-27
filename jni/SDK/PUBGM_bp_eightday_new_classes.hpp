#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:45 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_eightday_new.bp_eightday_new_C
// 0x005C (0x032C - 0x02D0)
class Abp_eightday_new_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_String_EightDayNewUI_ActiveTime;                       // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_EightDayNewUI_Info               BP_STRUCT_EightDayNewUI_Info;                             // 0x02E0(0x0038) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_EightDayNewUI_Info>       BP_ARRAY_EightDayNewUI_ItemList;                          // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_STRUCT_EightDayNewUI_SignUpDay;                        // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_eightday_new.bp_eightday_new_C");
		return pStaticClass;
	}


	void EventEightDayNewClickItem_NoFetch();
	void EventEightDayNewClickItem();
	void EventEightDayNewClickClose_NoFetch();
	void EventEightDayNewClickClose();
	void UserConstructionScript();
};


}

