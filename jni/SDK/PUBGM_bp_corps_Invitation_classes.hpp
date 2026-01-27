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

// ScriptBlueprintGeneratedClass bp_corps_Invitation.bp_corps_Invitation_C
// 0x0100 (0x03D0 - 0x02D0)
class Abp_corps_Invitation_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_CorpsSummary_Data                BP_STRUCT_CorpsSummary_Data;                              // 0x02D4(0x0064) (Edit, BlueprintVisible)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x0338(0x0040) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsInvitation_AvatarData       BP_STRUCT_CorpsInvitation_AvatarData;                     // 0x0378(0x0040) (Edit, BlueprintVisible)
	bool                                               BP_CorpsInvitation_IsShowCorpsWar;                        // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_BASE_INFO>                BP_ARRAY_CorpsInvitation_AmbassadorList;                  // 0x03BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsInvitation_ShowType;                              // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_Invitation.bp_corps_Invitation_C");
		return pStaticClass;
	}


	void EventCorpsInvitationUIClose_NoFetch();
	void EventCorpsInvitationUIClose();
	void EventCorpsInvitationUIConfirm_NoFetch();
	void EventCorpsInvitationUIConfirm();
	void EventCorpsInvitationReport_NoFetch();
	void EventCorpsInvitationReport();
	void EventCorpsInvitationApply_NoFetch();
	void EventCorpsInvitationApply();
	void UserConstructionScript();
};


}

