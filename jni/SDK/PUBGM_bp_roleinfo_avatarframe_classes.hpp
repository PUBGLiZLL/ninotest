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

// ScriptBlueprintGeneratedClass bp_roleinfo_avatarframe.bp_roleinfo_avatarframe_C
// 0x0070 (0x0340 - 0x02D0)
class Abp_roleinfo_avatarframe_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_RoleInfoAvatarFrame              BP_STRUCT_RoleInfoAvatarFrame;                            // 0x02D4(0x0040) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_RoleInfoAvatarFrame>      BP_ARRAY_RoleInfoAvatarFrameList;                         // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     RoleInfoAvatarFrameSelfUrl;                               // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RoleInfoAvatarFrameCurUseId;                              // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     RoleInfoAvatarFrameSelfUid;                               // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x033C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_avatarframe.bp_roleinfo_avatarframe_C");
		return pStaticClass;
	}


	void EventRoleInfoAvatarFrameUse_NoFetch();
	void EventRoleInfoAvatarFrameUse();
	void EventRoleInfoAvatarFrameUIClose_NoFetch();
	void EventRoleInfoAvatarFrameUIClose();
	void EventRoleInfoAvatarFrameFetchInfo_NoFetch();
	void EventRoleInfoAvatarFrameFetchInfo();
	void UserConstructionScript();
};


}

