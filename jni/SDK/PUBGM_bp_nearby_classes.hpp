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

// ScriptBlueprintGeneratedClass bp_nearby.bp_nearby_C
// 0x00FC (0x03CC - 0x02D0)
class Abp_nearby_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_NearByProfile                    BP_STRUCT_NearByProfile;                                  // 0x02D4(0x00A8) (Edit, BlueprintVisible)
	bool                                               BP_NearBy_LocationPermission;                             // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_NearBy_Location_Open;                                  // 0x037D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x037E(0x0002) MISSED OFFSET
	struct FString                                     BP_NearBy_ApplyUserId;                                    // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_NearBy_ApplyUserVerify;                                // 0x038C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_NearBy_ApplyUserIndex;                                 // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_NearBy_Gender_Filter;                                  // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_NearBy_ClickHeadID;                                    // 0x03A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_NearByProfile>            BP_ARRAY_Near_By_Gender_Filter_Profile;                   // 0x03AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_NearBy_ApplyUserGender;                                // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_NearByProfile>            BP_ARRAY_Near_By_Profile;                                 // 0x03BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_nearby.bp_nearby_C");
		return pStaticClass;
	}


	void EventNearByClickLocation_NoFetch();
	void EventNearByClickLocation();
	void EventNearByShowSendAddFriendRequestTips_NoFetch();
	void EventNearByShowSendAddFriendRequestTips();
	void EventNearbyClickHeadReq_NoFetch();
	void EventNearbyClickHeadReq();
	void EventFetchNewNearByPersonInfoList_NoFetch();
	void EventFetchNewNearByPersonInfoList();
	void EventNearBySelectGender_NoFetch();
	void EventNearBySelectGender();
	void EventNearByFriendApply_NoFetch();
	void EventNearByFriendApply();
	void UserConstructionScript();
};


}

