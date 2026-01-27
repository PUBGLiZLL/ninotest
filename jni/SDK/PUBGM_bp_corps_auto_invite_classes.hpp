#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:50 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_corps_auto_invite.bp_corps_auto_invite_C
// 0x006C (0x033C - 0x02D0)
class Abp_corps_auto_invite_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_CorpsAutoInvitePlayerId;                               // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x02E0(0x0040) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_BASE_INFO>                BP_ARRAY_CorpsAutoInviteRoleInfos;                        // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_CorpsAutoInviteRole;                             // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_auto_invite.bp_corps_auto_invite_C");
		return pStaticClass;
	}


	void EventCorpsAutoInviteClick_NoFetch();
	void EventCorpsAutoInviteClick();
	void EventCorpsAutoInviteShowPlayerInfo_NoFetch();
	void EventCorpsAutoInviteShowPlayerInfo();
	void UserConstructionScript();
};


}

