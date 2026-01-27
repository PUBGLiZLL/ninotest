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

// ScriptBlueprintGeneratedClass bp_market_recommend.bp_market_recommend_C
// 0x002C (0x02FC - 0x02D0)
class Abp_market_recommend_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_MarketRecommendAdvImageSelectIdx;                      // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketRecommendSelectIdx;                              // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketRecommend_ReloadDonotJump;                       // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	struct FString                                     BP_MarketRecommend_PageType;                              // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MarketRecommendAdvImageSelectJumpUrl;                  // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market_recommend.bp_market_recommend_C");
		return pStaticClass;
	}


	void EventMarketRecommendUISelectAdvImage_NoFetch();
	void EventMarketRecommendUISelectAdvImage();
	void EventMarketRecommendUISelect_NoFetch();
	void EventMarketRecommendUISelect();
	void EventMarketRecommendUIBuy_NoFetch();
	void EventMarketRecommendUIBuy();
	void UserConstructionScript();
};


}

