#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:50 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_activty.bp_activty_C
// 0x0288 (0x0558 - 0x02D0)
class Abp_activty_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_SubActivtyItemInfo>       BP_ARRAY_SubActivtyCostList;                              // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SubActivtyInfo                   BP_STRUCT_SubActivtyInfo;                                 // 0x02E0(0x0084) (Edit, BlueprintVisible)
	int                                                BP_CurrentActJumpID;                                      // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CurrentNoticeJumpArg;                                  // 0x0368(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_First_Act_ID;                                          // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_SubActivtyInfo>           BP_ARRAY_SubActivtyList;                                  // 0x0378(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_First_Act_3_ID;                                        // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ActivtyInfo                      BP_STRUCT_ActivtyInfo;                                    // 0x0388(0x0078) (Edit, BlueprintVisible)
	struct FBP_STRUCT_ActivtyInfo_Click                BP_STRUCT_ActivtyInfo_Click;                              // 0x0400(0x0010) (Edit, BlueprintVisible)
	struct FBP_STRUCT_ActButtonInfo                    BP_STRUCT_ActButtonInfo;                                  // 0x0410(0x002C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_ActivtyNoticeBtn_Select          BP_STRUCT_ActivtyNoticeBtn_Select;                        // 0x043C(0x000C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ActButtonInfo>            BP_ARRAY_ActButtonInfo;                                   // 0x0448(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                LAST_REPORT_ACT_NOTICE_ID;                                // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_First_Act_1_ID;                                        // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Current_Day_Num;                                       // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Current_Week_Num;                                      // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_NoticeButtonInfo                 BP_STRUCT_NoticeButtonInfo;                               // 0x0464(0x0024) (Edit, BlueprintVisible)
	struct FBP_STRUCT_NoticeInfo                       BP_STRUCT_NoticeInfo;                                     // 0x0488(0x0078) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_NoticeButtonInfo>         BP_ARRAY_NoticeButtonInfo;                                // 0x0500(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CurrentNoticeJumpMode;                                 // 0x050C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_SubActivtyItemInfo>       BP_ARRAY_SubActivtyDropList;                              // 0x0518(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ActivtyUISkin_Cfg                BP_STRUCT_ActivtyUISkin_Cfg;                              // 0x0524(0x0010) (Edit, BlueprintVisible)
	struct FBP_STRUCT_SubActivtyItemInfo               BP_STRUCT_SubActivtyItemInfo;                             // 0x0534(0x0010) (Edit, BlueprintVisible)
	int                                                BP_Panduola_RedPoint;                                     // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Duihuan_RedPoint_Num;                                  // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_First_Notice_ID;                                       // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_First_Act_2_ID;                                        // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0554(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_activty.bp_activty_C");
		return pStaticClass;
	}


	void EventActivtyOnShow_NoFetch();
	void EventActivtyOnShow();
	void EventActivtyUIOnClickGetBtn_NoFetch();
	void EventActivtyUIOnClickGetBtn();
	void EventActivtyUIOnClickCheckExchange_NoFetch();
	void EventActivtyUIOnClickCheckExchange();
	void EventActivtyUIOnNoticeJump_NoFetch();
	void EventActivtyUIOnNoticeJump();
	void EventActivtyUpdateLobbyRedPoint_NoFetch();
	void EventActivtyUpdateLobbyRedPoint();
	void EventNoticeClose_ToPDL_NoFetch();
	void EventNoticeClose_ToPDL();
	void EventActivtyUIOnClickJumpBtn_NoFetch();
	void EventActivtyUIOnClickJumpBtn();
	void EventActivtyClickOneBtn_NoFetch();
	void EventActivtyClickOneBtn();
	void EventNoticeOpen_ToPDL_NoFetch();
	void EventNoticeOpen_ToPDL();
	void EventActivtyOnClose_NoFetch();
	void EventActivtyOnClose();
	void UserConstructionScript();
};


}

