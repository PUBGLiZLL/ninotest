#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:48 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_roleinfo_tag.bp_roleinfo_tag_C
// 0x0034 (0x0304 - 0x02D0)
class Abp_roleinfo_tag_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_RoleInfoSelected_Count;                                // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_RoleInfoTag                      BP_STRUCT_RoleInfoTag;                                    // 0x02D8(0x0014) (Edit, BlueprintVisible)
	struct FBP_STRUCT_RoleInfoSelectTag                BP_STRUCT_RoleInfoSelectTag;                              // 0x02EC(0x0008) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_RoleInfoTag>              BP_ARRAY_RoleInfoTagList;                                 // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_tag.bp_roleinfo_tag_C");
		return pStaticClass;
	}


	void EventRoleInfoTagUIChg_NoFetch();
	void EventRoleInfoTagUIChg();
	void EventRoleInfoTagClose_NoFetch();
	void EventRoleInfoTagClose();
	void EventRoleInfoTagSelect_NoFetch();
	void EventRoleInfoTagSelect();
	void UserConstructionScript();
};


}

