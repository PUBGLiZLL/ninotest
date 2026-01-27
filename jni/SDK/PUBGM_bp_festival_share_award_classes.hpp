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

// ScriptBlueprintGeneratedClass bp_festival_share_award.bp_festival_share_award_C
// 0x0064 (0x0334 - 0x02D0)
class Abp_festival_share_award_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_FestivalShare_BgImage;                                 // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_FestivalShare_CurNum;                                  // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_FestivalShare_GetAwardIndex;                           // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_FestivalShareActInfo             BP_STRUCT_FestivalShareActInfo;                           // 0x02E8(0x002C) (Edit, BlueprintVisible)
	bool                                               BP_FestivalShare_IsTodayDone;                             // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	struct FString                                     BP_FestivalShare_ActiveTime;                              // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FestivalShareActInfo>     BP_ARRAY_FestivalShareActInfoList;                        // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_festival_share_award.bp_festival_share_award_C");
		return pStaticClass;
	}


	void EventFestivalShareActUpdateUI_NoFetch();
	void EventFestivalShareActUpdateUI();
	void EventFestivalShareActAwardReq_NoFetch();
	void EventFestivalShareActAwardReq();
	void EventFestivalShareActUIHide_NoFetch();
	void EventFestivalShareActUIHide();
	void EventFestivalShareActBtnShare_NoFetch();
	void EventFestivalShareActBtnShare();
	void UserConstructionScript();
};


}

