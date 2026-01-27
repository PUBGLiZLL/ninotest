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

// ScriptBlueprintGeneratedClass bp_master_privilege.bp_master_privilege_C
// 0x00C4 (0x0394 - 0x02D0)
class Abp_master_privilege_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_MasterPrivilegeGiftItem          BP_STRUCT_MasterPrivilegeGiftItem;                        // 0x02D4(0x0014) (Edit, BlueprintVisible)
	int                                                BP_CurrentLevel;                                          // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_MasterPrivilegeInfo              BP_STRUCT_MasterPrivilegeInfo;                            // 0x02EC(0x0038) (Edit, BlueprintVisible)
	struct FBP_STRUCT_MasterPrivilegeItem              BP_STRUCT_MasterPrivilegeItem;                            // 0x0324(0x0038) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_MasterPrivilegeDescItem>  BP_ARRAY_Master_Privilege_Desc;                           // 0x035C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_MasterPrivilegeIsShow;                                 // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	struct FBP_STRUCT_MasterPrivilegeDescItem          BP_STRUCT_MasterPrivilegeDescItem;                        // 0x036C(0x0018) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_MasterPrivilegeGiftItem>  BP_ARRAY_Master_Privilege_Gift;                           // 0x0384(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_master_privilege.bp_master_privilege_C");
		return pStaticClass;
	}


	void EventMasterPrivilegeGetGift_NoFetch();
	void EventMasterPrivilegeGetGift();
	void EventFetchMasterPrivilegeInfo_NoFetch();
	void EventFetchMasterPrivilegeInfo();
	void EventMasterPrivilege_Push_NoFetch();
	void EventMasterPrivilege_Push();
	void EventMasterPrivilegePagePre_NoFetch();
	void EventMasterPrivilegePagePre();
	void EventMasterPrivilegeUIHide_NoFetch();
	void EventMasterPrivilegeUIHide();
	void EventMasterPrivilegePageNext_NoFetch();
	void EventMasterPrivilegePageNext();
	void UserConstructionScript();
};


}

