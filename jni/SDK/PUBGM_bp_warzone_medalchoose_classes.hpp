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

// ScriptBlueprintGeneratedClass bp_warzone_medalchoose.bp_warzone_medalchoose_C
// 0x0080 (0x0350 - 0x02D0)
class Abp_warzone_medalchoose_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_WarZoneMedalChooseInfo>   BP_ARRAY_WarZoneMedalChooseInfoList;                      // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WarZoneMedalChooseType;                                // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_WarZoneStreetName;                                     // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_WarZoneStreetMedalRank;                          // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_WarZoneMedalChooseInfo           BP_STRUCT_WarZoneMedalChooseInfo;                         // 0x02FC(0x0048) (Edit, BlueprintVisible)
	int                                                BP_WarZoneMedalRank_Tab;                                  // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WarZoneStreetGetMedalCount;                            // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x034C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_warzone_medalchoose.bp_warzone_medalchoose_C");
		return pStaticClass;
	}


	void EventWarZoneMedalChooseClose_NoFetch();
	void EventWarZoneMedalChooseClose();
	void UserConstructionScript();
};


}

