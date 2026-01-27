#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:49 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_share_result_miniapp.bp_share_result_miniapp_C
// 0x00DC (0x03AC - 0x02D0)
class Abp_share_result_miniapp_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Result_TitleNum;                                       // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_Result_TitleList;                                // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Result_Rank;                                           // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Result_PlayerCount;                                    // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Result_RandomTips;                                     // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Result_KillNum;                                        // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Result_FinalLevel;                                     // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Result_ShowTitle;                                      // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Result_TopTips;                                        // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BP_Result_Score_f;                                        // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Result_RADAR                     BP_STRUCT_Result_RADAR;                                   // 0x031C(0x0050) (Edit, BlueprintVisible)
	struct FString                                     BP_Result_ShareImg;                                       // 0x036C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Result_BgImg3;                                         // 0x0378(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Result_BgImg1;                                         // 0x0384(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Result_BgImg2;                                         // 0x0390(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Result_RandomTips1;                                    // 0x039C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_result_miniapp.bp_share_result_miniapp_C");
		return pStaticClass;
	}


	void EventShareResultMiniAppShare_NoFetch();
	void EventShareResultMiniAppShare();
	void UserConstructionScript();
};


}

