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

// ScriptBlueprintGeneratedClass bp_roleinfo_corps.bp_roleinfo_corps_C
// 0x00FC (0x03CC - 0x02D0)
class Abp_roleinfo_corps_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_RoleInfo_CorpsData               BP_STRUCT_RoleInfo_CorpsData;                             // 0x02D4(0x0060) (Edit, BlueprintVisible)
	struct FBP_STRUCT_RoleInfo_Corps_AvatarData        BP_STRUCT_RoleInfo_Corps_AvatarData;                      // 0x0334(0x0040) (Edit, BlueprintVisible)
	struct FString                                     BP_RoleInfoCorpsMyCorpsID;                                // 0x0374(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_RoleInfoCorps_IsShowCorpsWar;                          // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	struct FBP_STRUCT_RoleInfo_CorpsAvatar             BP_STRUCT_RoleInfo_CorpsAvatar;                           // 0x0384(0x0040) (Edit, BlueprintVisible)
	bool                                               BP_RoleInfoCorpsCanJoint;                                 // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_corps.bp_roleinfo_corps_C");
		return pStaticClass;
	}


	void EventRoleInfoCorpsReport_NoFetch();
	void EventRoleInfoCorpsReport();
	void EventRoleInfoCorpsRefresh_NoFetch();
	void EventRoleInfoCorpsRefresh();
	void EventRoleInfoCorpsShow_NoFetch();
	void EventRoleInfoCorpsShow();
	void EventRoleInfoCorpsApplyJoinCorps_NoFetch();
	void EventRoleInfoCorpsApplyJoinCorps();
	void EventRoleInfoCorpsClose_NoFetch();
	void EventRoleInfoCorpsClose();
	void UserConstructionScript();
};


}

