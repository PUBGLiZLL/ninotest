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

// ScriptBlueprintGeneratedClass bp_reflux.bp_reflux_C
// 0x00F0 (0x03C0 - 0x02D0)
class Abp_reflux_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Reflux_Award_Index_Get;                                // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Reflux_Call_Friend_UID;                                // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Reflux_Friend_Info>       BP_ARRAY_Reflux_Friend_Infos;                             // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Reflux_Award_Info                BP_STRUCT_Reflux_Award_Info;                              // 0x02F0(0x0044) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Reflux_Friend_Info               BP_STRUCT_Reflux_Friend_Info;                             // 0x0334(0x0040) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_Reflux_Friend_Info>       BP_ARRAY_Reflux_Register_Friend_Infos;                    // 0x0374(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Reflux_Award_Info>        BP_ARRAY_Reflux_Award_Infos;                              // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Reflux_Friend_Count;                                   // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Reflux_Call_Friend_OpenID;                             // 0x0390(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Reflux_Open_Time;                                      // 0x039C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Reflux_Help_Content;                                   // 0x03A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Reflux_Friend_Page_Idx;                                // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Reflux_Total_Back_Count;                               // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_reflux.bp_reflux_C");
		return pStaticClass;
	}


	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventRefluxNextPage_NoFetch();
	void EventRefluxNextPage();
	void EventRefluxViewRegisterFriend_NoFetch();
	void EventRefluxViewRegisterFriend();
	void EventRefluxRule_NoFetch();
	void EventRefluxRule();
	void EventRefluxPrePage_NoFetch();
	void EventRefluxPrePage();
	void EventRefluxShare_NoFetch();
	void EventRefluxShare();
	void EventRefluxGetAward_NoFetch();
	void EventRefluxGetAward();
	void EventRefluxFriendInvite_NoFetch();
	void EventRefluxFriendInvite();
	void EventRefluxCloseUI_NoFetch();
	void EventRefluxCloseUI();
	void EventRefluxViewBox_NoFetch();
	void EventRefluxViewBox();
	void EventViewFriendAward_NoFetch();
	void EventViewFriendAward();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

