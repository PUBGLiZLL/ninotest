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

// ScriptBlueprintGeneratedClass bp_share_rank.bp_share_rank_C
// 0x004C (0x031C - 0x02D0)
class Abp_share_rank_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_ShareRank_HightLevel;                                  // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	struct FString                                     BP_ShareRank_Date;                                        // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ShareRank_SeasonID;                                    // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ShareRank_ShareInfo              BP_STRUCT_ShareRank_ShareInfo;                            // 0x02F0(0x0028) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0318(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_rank.bp_share_rank_C");
		return pStaticClass;
	}


	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventShareRankHide_NoFetch();
	void EventShareRankHide();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

