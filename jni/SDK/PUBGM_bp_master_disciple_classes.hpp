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

// ScriptBlueprintGeneratedClass bp_master_disciple.bp_master_disciple_C
// 0x0258 (0x0528 - 0x02D0)
class Abp_master_disciple_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_MasterFriendProfile>      BP_ARRAY_RecommendDiscipleList;                           // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_Recommend_Search;                       // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MasterDisciple_RecommendType;                          // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_MasterDisciple_Empty_Master;                           // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_Recommend_Master;                       // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_Recommend_Disciple;                     // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_TitleText_RecommendMaster;              // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_InputString;                            // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MasterFriendProfile>      BP_ARRAY_RecommendMasterList;                             // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_Empty_Search;                           // 0x0338(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_ApplyToDiscipleDefaultMsg;              // 0x0344(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MasterDisciple_FriendPlatform;                         // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_MasterDisciple_Empty_Disciple;                         // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MasterFriendProfile              BP_STRUCT_MasterFriendProfile;                            // 0x0360(0x0168) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_MasterFriendProfile>      BP_ARRAY_ServerRecommendList;                             // 0x04C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MasterDisciple_ClickPlayerGender;                      // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_MasterDisciple_ClickPlayerId;                          // 0x04D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_ApplyToTeacherDefaultMsg;               // 0x04E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MasterFriendProfile>      BP_ARRAY_MasterDiscipleSearchList;                        // 0x04F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_TitleText_RecommendDisciple;            // 0x04FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_SelfUID;                                // 0x0508(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterDisciple_SegmentPostFix;                         // 0x0514(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_MasterDisciple_ShowSearch;                             // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0524(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_master_disciple.bp_master_disciple_C");
		return pStaticClass;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventClickMasterDiscipleSearch_NoFetch();
	void EventClickMasterDiscipleSearch();
	void EventClickMasterDiscipleOpenSearch_NoFetch();
	void EventClickMasterDiscipleOpenSearch();
	void EventClickMasterDiscipleHead_NoFetch();
	void EventClickMasterDiscipleHead();
	void EventClickMasterDiscipleApply_NoFetch();
	void EventClickMasterDiscipleApply();
	void EventMasterDiscipleCommentCheck_NoFetch();
	void EventMasterDiscipleCommentCheck();
	void EventMasterDiscipleShowSendAddFriendRequestTips_NoFetch();
	void EventMasterDiscipleShowSendAddFriendRequestTips();
	void EventClickMasterDiscipleAddFriend_NoFetch();
	void EventClickMasterDiscipleAddFriend();
	void UserConstructionScript();
};


}

