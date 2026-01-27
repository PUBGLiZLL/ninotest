#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:51 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_corps_own_info.bp_corps_own_info_C
// 0x01F4 (0x04C4 - 0x02D0)
class Abp_corps_own_info_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_OperateMemberId;                                       // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_LogInfo>                  BP_ARRAY_LogInfos;                                        // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsInfoRankInfo                BP_STRUCT_CorpsInfoRankInfo;                              // 0x02EC(0x0040) (Edit, BlueprintVisible)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x032C(0x0040) (Edit, BlueprintVisible)
	struct FBP_STRUCT_InfoMemberInfo                   BP_STRUCT_InfoMemberInfo;                                 // 0x036C(0x008C) (Edit, BlueprintVisible)
	int                                                BP_CorpsInfo_ShowInfoState;                               // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsInfoMemberInfo_PageStart;                         // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsInfoMemberNum;                                    // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsCommander;                                           // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsOwn_SkipRecruit;                                  // 0x0405(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0406(0x0002) MISSED OFFSET
	TArray<struct FBP_STRUCT_InfoMemberInfo>           BP_ARRAY_PartMemberList;                                  // 0x0408(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_InfoCorpsInfo                    BP_STRUCT_InfoCorpsInfo;                                  // 0x0414(0x0028) (Edit, BlueprintVisible)
	struct FBP_STRUCT_LogInfo                          BP_STRUCT_LogInfo;                                        // 0x043C(0x0038) (Edit, BlueprintVisible)
	struct FString                                     BP_SelfRoleId;                                            // 0x0474(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_InviteRedDot;                                          // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ShowOp                           BP_STRUCT_ShowOp;                                         // 0x0481(0x0006) (Edit, BlueprintVisible)
	bool                                               BP_CorpsInfo_CorpsWarSystemSwitch;                        // 0x0487(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GROUP_INFO                       BP_STRUCT_GROUP_INFO;                                     // 0x0488(0x0020) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsInfoActiveHelpPos           BP_STRUCT_CorpsInfoActiveHelpPos;                         // 0x04A8(0x0008) (Edit, BlueprintVisible)
	int                                                BP_CorpsInfoMemberInfo_PageEnd;                           // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CorpsInfo_SeasonTimeStr;                               // 0x04B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_own_info.bp_corps_own_info_C");
		return pStaticClass;
	}


	void EventCorpsLogShow_NoFetch();
	void EventCorpsLogShow();
	void EventCorpsManageShow_NoFetch();
	void EventCorpsManageShow();
	void EventCorpsShowMemberOp_Push_NoFetch();
	void EventCorpsShowMemberOp_Push();
	void EventCorpsOpClickPlayerInfo_NoFetch();
	void EventCorpsOpClickPlayerInfo();
	void EventCorpsOpClickChat_NoFetch();
	void EventCorpsOpClickChat();
	void EventCorpsOpClickManage_NoFetch();
	void EventCorpsOpClickManage();
	void EventCorpsOpClickRecruit_NoFetch();
	void EventCorpsOpClickRecruit();
	void EventCorpsClickActiveHelp_NoFetch();
	void EventCorpsClickActiveHelp();
	void EventCorpsClickInfoHelp_NoFetch();
	void EventCorpsClickInfoHelp();
	void EventCorpsApplyListShow_NoFetch();
	void EventCorpsApplyListShow();
	void EventChangeInfoState_NoFetch();
	void EventChangeInfoState();
	void EventGetPartMember_NoFetch();
	void EventGetPartMember();
	void EventCorpsOpClickAddFriend_NoFetch();
	void EventCorpsOpClickAddFriend();
	void EventCorpsOwnExit_NoFetch();
	void EventCorpsOwnExit();
	void EventCorpsOpClickRemove_NoFetch();
	void EventCorpsOpClickRemove();
	void UserConstructionScript();
};


}

