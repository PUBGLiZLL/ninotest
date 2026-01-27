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

// ScriptBlueprintGeneratedClass bp_lobby_friend.bp_lobby_friend_C
// 0x07E4 (0x0AB4 - 0x02D0)
class Abp_lobby_friend_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Inner_Friend_Scroll_End;                               // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FriendPandoraLabelInfo>   BP_ARRAY_FriendPandoraLabels;                             // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Lobby_Friend_Search_Data         BP_STRUCT_Lobby_Friend_Search_Data;                       // 0x02E4(0x00F8) (Edit, BlueprintVisible)
	int                                                BP_Lobby_Friend_Plat_Num;                                 // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Friend_Search_Segment;                                 // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Recent_Teammate_Profile;                         // 0x03E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_FriendSystem_SelectedFriendGidAddQQFriend;             // 0x03F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Recent_Teammate_ScrollStart;                           // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Add_Friend_ID;                                         // 0x0400(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Platform;                                       // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Recent_Teammate_Detail_Profile;                  // 0x0410(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Search_Friend_Scroll_End;                              // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Friend_Intimacy_Gid;                                   // 0x0420(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Intimacy_DetailData>      BP_Array_Intimacy_DetailData;                             // 0x042C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Search_Friend_Scroll_Start;                            // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Friend_Search_PlayDate;                                // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_Lobby_Friend_Apply_Data>  BP_ARRAY_Apply_Friend_Detail_Profile;                     // 0x0440(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Search_Friend_Lite_Profile;                      // 0x044C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Search_Data                      BP_STRUCT_Search_Data;                                    // 0x0458(0x0014) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Plat_Friend_Detail_Profile;                      // 0x046C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Lobby_Friend_Inner_Num;                                // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Blacklist_Friend_Detail_Profile;                 // 0x047C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Delete_Friend_Name;                                    // 0x0488(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_BlackList_Friend_Scroll_Start;                         // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_NearBy_SelfUID;                                        // 0x0498(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_BlackList_Friend_Scroll_End;                           // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Lobby_Friend_Apply_Data          BP_STRUCT_Lobby_Friend_Apply_Data;                        // 0x04A8(0x00FC) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Lobby_Friend_Common_Data         BP_STRUCT_Lobby_Friend_Common_Data;                       // 0x05A4(0x00E0) (Edit, BlueprintVisible)
	struct FString                                     BP_FRIEND_PROFILE_ID;                                     // 0x0684(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Search_Gender;                                  // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Platform_Friend_Scroll_Start;                          // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Friend_UpdatePlatIndex;                                // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Inner_Friend_Profile;                            // 0x069C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_FRIEND_CHAT_ID;                                        // 0x06A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Search_PlayTime;                                // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Intimacy_Data                    BP_STRUCT_Intimacy_Data;                                  // 0x06B8(0x0058) (Edit, BlueprintVisible)
	int                                                BP_Friend_Intimacy_Relation;                              // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Friend_Intimacy_Op;                                    // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Inner_Friend_Lite_Profile;                       // 0x0718(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Apply_Friend_Profile;                            // 0x0724(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Friend_Intimacy_NickName;                              // 0x0730(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Friend_Intimacy_Delete_Gid;                            // 0x073C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Friend_Intimacy_Delete_NickName;                       // 0x0748(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Intimacy_Delete_State;                          // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Friend_Process_Add_Friend;                             // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0759(0x0003) MISSED OFFSET
	struct FBP_STRUCT_FriendLiteProfile                BP_STRUCT_FriendLiteProfile;                              // 0x075C(0x000C) (Edit, BlueprintVisible)
	bool                                               BP_Friend_Intimacy_Apply_Has_New;                         // 0x0768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0769(0x0003) MISSED OFFSET
	int                                                BP_Friend_Add_Index;                                      // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Delete_Friend_ID;                                      // 0x0770(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Blacklist_Friend_Lite_Profile;                   // 0x077C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_LobbyFriend_Master_RedPoint;                           // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Friend_Search_Is_Same_City;                            // 0x0789(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x078A(0x0002) MISSED OFFSET
	int                                                BP_Lobby_Friend_Enable_AddFri_Req;                        // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Verify_MaxWordCount;                                   // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Friend_SearchName;                                     // 0x0794(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_DELETE_FRIEND_BLACK_NAME;                              // 0x07A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Blacklist_Friend_Profile;                        // 0x07AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Plat_Friend_Lite_Profile;                        // 0x07B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Lobby_Friend_Enable_AddFri_CheckState;                 // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Recent_Teammate_Lite_Profile;                    // 0x07C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Platform_Friend_Scroll_End;                            // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Friend_Is_Show;                                        // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x07D9(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Inner_Friend_Detail_Profile;                     // 0x07DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Recent_Teammate_ScrollEnd;                             // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Friend_Jump_To_Label_Index;                            // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Apply_Friend_Scroll_Start;                             // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Intimacy_DetailData              BP_STRUCT_Intimacy_DetailData;                            // 0x07F4(0x0018) (Edit, BlueprintVisible)
	struct FString                                     BP_Add_Friend_Verify;                                     // 0x080C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Apply_Friend_Lite_Profile;                       // 0x0818(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Add_Friend_Gender;                                     // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_RSPAdd_OP;                                             // 0x0828(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_FRIEND_WATCH_ID;                                       // 0x0834(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Intimacy_Build_Relation;                        // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Add_Friend_Verify_Default;                             // 0x0844(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_UpdateInnerIndex;                               // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_Intimacy_Data>            BP_ARRAY_Intimacy_Data;                                   // 0x0854(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Friend_Intimacy_Build_Gid;                             // 0x0860(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FriendProfile                    BP_STRUCT_FriendProfile;                                  // 0x086C(0x01B0) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Search_Friend_Profile;                           // 0x0A1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Lobby_Friend_Search_Data> BP_ARRAY_Search_Friend_Detail_Profile;                    // 0x0A28(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Apply_Friend_Scroll_End;                               // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Inner_Friend_Scroll_Start;                             // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_XY_API_URL;                                            // 0x0A3C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FriendPandoraLabelInfo           BP_STRUCT_FriendPandoraLabelInfo;                         // 0x0A48(0x001C) (Edit, BlueprintVisible)
	int                                                BP_Friend_Intimacy_Delete_Relation;                       // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_DELETE_FRIEND_BLACK_ID;                                // 0x0A68(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RSPAdd_Friend_ID;                                      // 0x0A74(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Search_Data>              BP_Array_Search_Data;                                     // 0x0A80(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Search_Tendency;                                // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_FriendSystem_Present_Coin_Friend_ID;                   // 0x0A90(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Plat_Friend_Profile;                             // 0x0A9C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Panel_Tab_Index;                                // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_FRIEND_IS_WATCHING_OPEN;                               // 0x0AAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0AAD(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0AB0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lobby_friend.bp_lobby_friend_C");
		return pStaticClass;
	}


	void EventCheckWatchingSwitch_NoFetch();
	void EventCheckWatchingSwitch();
	void EventLobbyFriendApplyReq_NoFetch();
	void EventLobbyFriendApplyReq();
	void EventLobbyFriendLabelSearchReq_NoFetch();
	void EventLobbyFriendLabelSearchReq();
	void EventLobbyFriendChat_NoFetch();
	void EventLobbyFriendChat();
	void EventLobbyFriendScrollApplyList_NoFetch();
	void EventLobbyFriendScrollApplyList();
	void EventXYAPISetUrl_NoFetch();
	void EventXYAPISetUrl();
	void EventLobbyFriendAddFriendReqList_NoFetch();
	void EventLobbyFriendAddFriendReqList();
	void EventLobbyFriendWatch_NoFetch();
	void EventLobbyFriendWatch();
	void EventLobbyFriendAllowAddFriReq_NoFetch();
	void EventLobbyFriendAllowAddFriReq();
	void EventLobbyFriendDeleteReq_NoFetch();
	void EventLobbyFriendDeleteReq();
	void EventLobbyFriendScrollInnerList_NoFetch();
	void EventLobbyFriendScrollInnerList();
	void EventLobbyFriendGetBlackListReq_NoFetch();
	void EventLobbyFriendGetBlackListReq();
	void EventLobbyFriendProfileReq_NoFetch();
	void EventLobbyFriendProfileReq();
	void EventLobbyFriendUIHideClearData_NoFetch();
	void EventLobbyFriendUIHideClearData();
	void EventSetXYAPIShowRedPoint_NoFetch();
	void EventSetXYAPIShowRedPoint();
	void EventSetXYAPIHideRedPoint_NoFetch();
	void EventSetXYAPIHideRedPoint();
	void EventLobbyFriendFetchFriendList_NoFetch();
	void EventLobbyFriendFetchFriendList();
	void EventLobbyFriendReplyRelationReq_NoFetch();
	void EventLobbyFriendReplyRelationReq();
	void EventLobbyFriendBuildRelationReq_NoFetch();
	void EventLobbyFriendBuildRelationReq();
	void EventOpenMyCardPanelInFriendPanel_NoFetch();
	void EventOpenMyCardPanelInFriendPanel();
	void EventShowSendAddFriendRequestTips_NoFetch();
	void EventShowSendAddFriendRequestTips();
	void EventHideMasterPanel_NoFetch();
	void EventHideMasterPanel();
	void EventLobbyFriendMasterNotOpen_NoFetch();
	void EventLobbyFriendMasterNotOpen();
	void EventOpenNearByPanel_NoFetch();
	void EventOpenNearByPanel();
	void EventCheckAndHideNearByPanel_NoFetch();
	void EventCheckAndHideNearByPanel();
	void EventLobbyFriendOnOpenSearchPanel_NoFetch();
	void EventLobbyFriendOnOpenSearchPanel();
	void EventGetRecentTeammateList_NoFetch();
	void EventGetRecentTeammateList();
	void EventLobbyFriendBlackListScroll_NoFetch();
	void EventLobbyFriendBlackListScroll();
	void EventLobbyFriendIntimacyReq_NoFetch();
	void EventLobbyFriendIntimacyReq();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventLobbyFriendAddQQFriend_NoFetch();
	void EventLobbyFriendAddQQFriend();
	void EventLobbyPresentCoinReq_NoFetch();
	void EventLobbyPresentCoinReq();
	void EventLobbyFriendRespondApply_NoFetch();
	void EventLobbyFriendRespondApply();
	void EventOpenMasterPanel_NoFetch();
	void EventOpenMasterPanel();
	void EventLobbyFriendDeleteRelationReq_NoFetch();
	void EventLobbyFriendDeleteRelationReq();
	void EventOpenIntimacyDescriptionPanel_NoFetch();
	void EventOpenIntimacyDescriptionPanel();
	void EventLobbyFriendScrollPlatList_NoFetch();
	void EventLobbyFriendScrollPlatList();
	void EventOpenFriendRuleDescriptionPanel_NoFetch();
	void EventOpenFriendRuleDescriptionPanel();
	void EventRecentTeammateScrollApplyList_NoFetch();
	void EventRecentTeammateScrollApplyList();
	void EventLobbyFriendScrollSearchList_NoFetch();
	void EventLobbyFriendScrollSearchList();
	void EventLobbyFriendSearchReq_NoFetch();
	void EventLobbyFriendSearchReq();
	void EventLobbyFriendRespondApplyOneKey_NoFetch();
	void EventLobbyFriendRespondApplyOneKey();
	void EventLobbyFriendDeleteBlackReq_NoFetch();
	void EventLobbyFriendDeleteBlackReq();
	void UserConstructionScript();
};


}

