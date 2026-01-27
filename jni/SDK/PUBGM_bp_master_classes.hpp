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

// ScriptBlueprintGeneratedClass bp_master.bp_master_C
// 0x0144 (0x0414 - 0x02D0)
class Abp_master_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_Master_RedPoint_HasPrivilege;                          // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	struct FBP_STRUCT_MASTER_SAME_DISCIPLE_ITEM        BP_STRUCT_MASTER_SAME_DISCIPLE_ITEM;                      // 0x02D8(0x0078) (Edit, BlueprintVisible)
	int                                                BP_MASTER_MAIN_select_item_gender;                        // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Master_RedPoint_HasTask;                               // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_HasMasterOrDisciple;                                   // 0x0355(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0356(0x0002) MISSED OFFSET
	TArray<struct FBP_STRUCT_MASTER_SAME_DISCIPLE_ITEM> BP_ARRAY_MASTER_SAME_DISCIPLE;                            // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MASTER_DISCIPLE_ITEM>     BP_ARRAY_MASTER_DISCIPLE;                                 // 0x0364(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Master_Master_Tips;                                    // 0x0370(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MASTER_MAIN_select_item_uid;                           // 0x037C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MASTER_DISCIPLE_ITEM             BP_STRUCT_MASTER_DISCIPLE_ITEM;                           // 0x0388(0x0078) (Edit, BlueprintVisible)
	bool                                               BP_Master_RedPoint_HasApply;                              // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	struct FString                                     BP_Master_Disciple_Tips;                                  // 0x0404(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_master.bp_master_C");
		return pStaticClass;
	}


	void EventClickMasterApplyList_NoFetch();
	void EventClickMasterApplyList();
	void EventClickMasterHelper_NoFetch();
	void EventClickMasterHelper();
	void EventClickMasterTask_NoFetch();
	void EventClickMasterTask();
	void EventClickMasterToMaster_NoFetch();
	void EventClickMasterToMaster();
	void EventClickMasterToDisciple_NoFetch();
	void EventClickMasterToDisciple();
	void EventClickMasterPrivilege_NoFetch();
	void EventClickMasterPrivilege();
	void EventMasterDismissMasterRelationShip_NoFetch();
	void EventMasterDismissMasterRelationShip();
	void EventMasterShowSendAddFriendRequestTips_NoFetch();
	void EventMasterShowSendAddFriendRequestTips();
	void EventMasterChatToFriend_NoFetch();
	void EventMasterChatToFriend();
	void EventMasterMainClickHeadBtn_NoFetch();
	void EventMasterMainClickHeadBtn();
	void EventMasterAddFriend_NoFetch();
	void EventMasterAddFriend();
	void UserConstructionScript();
};


}

