#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:43 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_createrole.bp_createrole_C
// 0x00C0 (0x0390 - 0x02D0)
class Abp_createrole_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_CreateRole_AvatarInfo            BP_STRUCT_CreateRole_AvatarInfo;                          // 0x02D4(0x000C) (Edit, BlueprintVisible)
	int                                                BP_CreateRole_HairType;                                   // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRole_Sex;                                        // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRole_HeadId;                                     // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRole_Gold;                                       // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CreateRole_Name;                                       // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CreateRole_BuyAvatarInfo         BP_STRUCT_CreateRole_BuyAvatarInfo;                       // 0x02FC(0x001C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CreateRole_BuyAvatarInfo> BP_Array_CreateRole_BuyAvatars;                           // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CreateRole_AvatarInfo>    BP_ARRAY_CreateRole_Decorations;                          // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CreateRole_SelectTip             BP_STRUCT_CreateRole_SelectTip;                           // 0x0330(0x0028) (Edit, BlueprintVisible)
	int                                                BP_CreateRole_ModeCost;                                   // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRole_Mode;                                       // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRole_Decoration;                                 // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CreateRole_AvatarInfo>    BP_ARRAY_CreateRole_Races;                                // 0x0364(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CreateRole_LobbyToAvatar;                              // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRole_Race;                                       // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRole_HairColor;                                  // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CreateRole_AvatarInfo>    BP_ARRAY_CreateRole_Hairs;                                // 0x037C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CreateRole_HairID;                                     // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x038C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_createrole.bp_createrole_C");
		return pStaticClass;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSelectRace_NoFetch();
	void EventSelectRace();
	void EventSelectHairColor2_NoFetch();
	void EventSelectHairColor2();
	void EventSelectHairColor3_NoFetch();
	void EventSelectHairColor3();
	void EventGetCreateRoleHeadID_NoFetch();
	void EventGetCreateRoleHeadID();
	void EventOpenAvatarResetPanelInter_NoFetch();
	void EventOpenAvatarResetPanelInter();
	void EventShowAvatarResetBuyPanel_NoFetch();
	void EventShowAvatarResetBuyPanel();
	void EventCloseAvatarResetPanelInter_NoFetch();
	void EventCloseAvatarResetPanelInter();
	void EventCloseAvatarResetPanel_NoFetch();
	void EventCloseAvatarResetPanel();
	void EventSelectHairColor5_NoFetch();
	void EventSelectHairColor5();
	void EventBuyAvatar_NoFetch();
	void EventBuyAvatar();
	void EventFilterName_NoFetch();
	void EventFilterName();
	void EventSelectHairColor6_NoFetch();
	void EventSelectHairColor6();
	void EventGetCreateRoleHairID_NoFetch();
	void EventGetCreateRoleHairID();
	void EventGetCreateRoleHairColor_NoFetch();
	void EventGetCreateRoleHairColor();
	void EventGetCreateRoleSex_NoFetch();
	void EventGetCreateRoleSex();
	void EventEnterLobby_NoFetch();
	void EventEnterLobby();
	void EventRandomName_NoFetch();
	void EventRandomName();
	void EventOpenAvatarResetPanel_NoFetch();
	void EventOpenAvatarResetPanel();
	void EventSelectHairType_NoFetch();
	void EventSelectHairType();
	void EventSelectHairColor1_NoFetch();
	void EventSelectHairColor1();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventCancelAvatarReset_NoFetch();
	void EventCancelAvatarReset();
	void EventSelectFeMale_NoFetch();
	void EventSelectFeMale();
	void EventSelectMale_NoFetch();
	void EventSelectMale();
	void EventSelectDecoration_NoFetch();
	void EventSelectDecoration();
	void EventSelectHairColor4_NoFetch();
	void EventSelectHairColor4();
	void UserConstructionScript();
};


}

