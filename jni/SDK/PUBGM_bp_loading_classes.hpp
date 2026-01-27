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

// ScriptBlueprintGeneratedClass bp_loading.bp_loading_C
// 0x0030 (0x0300 - 0x02D0)
class Abp_loading_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Loading_TipsEndIndex;                                  // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BP_Percent_f;                                             // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_InitPercent;                                           // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Loading_ImagePath;                                     // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Loading_DefaultImagePath;                              // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LoadingTo;                                             // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_loading.bp_loading_C");
		return pStaticClass;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventLoadingUIGetRandomImage_NoFetch();
	void EventLoadingUIGetRandomImage();
	void UserConstructionScript();
};


}

