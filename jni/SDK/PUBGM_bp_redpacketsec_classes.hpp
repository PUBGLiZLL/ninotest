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

// ScriptBlueprintGeneratedClass bp_redpacketsec.bp_redpacketsec_C
// 0x00E0 (0x03B0 - 0x02D0)
class Abp_redpacketsec_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_REDPACKETSEC_INDEX;                                    // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_REDPACKETSEC_QQTITLEIMG2;                              // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_QQTITLEIMG;                               // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_WXTITLEIMG2;                              // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_QQBKIMG2;                                 // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_WXTITLEIMG;                               // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_WXBKIMG2;                                 // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_REDPACKET_ACT_Info               BP_STRUCT_REDPACKET_ACT_Info;                             // 0x0320(0x0010) (Edit, BlueprintVisible)
	struct FString                                     BP_REDPACKETSEC_QQBKIMG;                                  // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Redpacket_Open_Time;                                   // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Redpacket_rule_Desc;                                   // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_GID;                                      // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_REDPACKET_ACT_Info>       BP_ARRAY_REDPACKET_ACT_Infos;                             // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_REDPACKET_SEC_Info               BP_STRUCT_REDPACKET_SEC_Info;                             // 0x036C(0x0028) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_REDPACKET_SEC_Info>       BP_ARRAY_REDPACKET_SEC_Infos;                             // 0x0394(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_REDPACKETSEC_WXBKIMG;                                  // 0x03A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_redpacketsec.bp_redpacketsec_C");
		return pStaticClass;
	}


	void EventHideRedPacketSecUI_NoFetch();
	void EventHideRedPacketSecUI();
	void EventClickRedPacketSecRuleBtn_NoFetch();
	void EventClickRedPacketSecRuleBtn();
	void EventClickRedPacketSecShareBtn_NoFetch();
	void EventClickRedPacketSecShareBtn();
	void EventRedPacketSec_Push_NoFetch();
	void EventRedPacketSec_Push();
	void EventRedPacketSecFetchInfo_NoFetch();
	void EventRedPacketSecFetchInfo();
	void UserConstructionScript();
};


}

