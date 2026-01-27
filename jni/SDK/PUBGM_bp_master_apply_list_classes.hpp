#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:46 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_master_apply_list.bp_master_apply_list_C
// 0x00F4 (0x03C4 - 0x02D0)
class Abp_master_apply_list_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_CurrentMasterApplistUID;                               // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MasterApplyInfo                  BP_STRUCT_MasterApplyInfo;                                // 0x02E0(0x00D0) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_MasterApplyInfo>          BP_ARRAY_Master_ApplyList;                                // 0x03B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CurrentMasterCheck;                                    // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MasterMasterApplistIsShow;                             // 0x03BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03BE(0x0002) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_master_apply_list.bp_master_apply_list_C");
		return pStaticClass;
	}


	void EventFetchMasterApplyList_NoFetch();
	void EventFetchMasterApplyList();
	void EventMasterApplyListUIHide_NoFetch();
	void EventMasterApplyListUIHide();
	void EventMasterApplyOk_NoFetch();
	void EventMasterApplyOk();
	void EventMasterApplyRefuse_NoFetch();
	void EventMasterApplyRefuse();
	void EventMasterApplyAddFriend_NoFetch();
	void EventMasterApplyAddFriend();
	void EventMasterApplyList_Push_NoFetch();
	void EventMasterApplyList_Push();
	void EventMasterApplyClickHead_NoFetch();
	void EventMasterApplyClickHead();
	void EventMasterApplyHarass_NoFetch();
	void EventMasterApplyHarass();
	void UserConstructionScript();
};


}

