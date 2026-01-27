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

// ScriptBlueprintGeneratedClass bp_promotion.bp_promotion_C
// 0x00BC (0x038C - 0x02D0)
class Abp_promotion_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_Promotion_Award_Info             BP_STRUCT_Promotion_Award_Info;                           // 0x02D4(0x0020) (Edit, BlueprintVisible)
	struct FString                                     BP_Promotion_Open_Time;                                   // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Promotion_Download_Image_URL;                          // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Promotion_Friend_Info>    BP_ARRAY_Promotion_Friend_Infos;                          // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Promotion_Friend_Info>    BP_ARRAY_Promotion_Register_Friend_Infos;                 // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Promotion_Award_Info>     BP_ARRAY_Promotion_Award_Infos;                           // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Promotion_Invite_Friend_OpenID;                        // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Promotion_Friend_Page_Idx;                             // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Promotion_Friend_Count;                                // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Promotion_Award_Index_Get;                             // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Promotion_Friend_Info            BP_STRUCT_Promotion_Friend_Info;                          // 0x0348(0x0028) (Edit, BlueprintVisible)
	struct FString                                     BP_Promotion_Help_Content;                                // 0x0370(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Promotion_Activity_Desc;                               // 0x037C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0388(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_promotion.bp_promotion_C");
		return pStaticClass;
	}


	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventPromotionCloseUI_NoFetch();
	void EventPromotionCloseUI();
	void EventPromotionShare_NoFetch();
	void EventPromotionShare();
	void EventPromotionRule_NoFetch();
	void EventPromotionRule();
	void EventPromotionNextPage_NoFetch();
	void EventPromotionNextPage();
	void EventPromotionGetAward_NoFetch();
	void EventPromotionGetAward();
	void EventPromotionPrePage_NoFetch();
	void EventPromotionPrePage();
	void EventPromotionViewRegisterFriend_NoFetch();
	void EventPromotionViewRegisterFriend();
	void EventPromotionFriendInvite_NoFetch();
	void EventPromotionFriendInvite();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

