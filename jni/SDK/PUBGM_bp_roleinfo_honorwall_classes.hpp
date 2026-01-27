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

// ScriptBlueprintGeneratedClass bp_roleinfo_honorwall.bp_roleinfo_honorwall_C
// 0x0044 (0x0314 - 0x02D0)
class Abp_roleinfo_honorwall_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_HonorInfo                        BP_STRUCT_HonorInfo;                                      // 0x02D4(0x002C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_HonorInfo>                BP_ARRAY_HonorInfoList;                                   // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_HonorWall_SelectID;                                    // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_honorwall.bp_roleinfo_honorwall_C");
		return pStaticClass;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventHonorWallButtonShare_NoFetch();
	void EventHonorWallButtonShare();
	void EventHonorWallHelp_NoFetch();
	void EventHonorWallHelp();
	void EventHonorWallUpdateSelect_NoFetch();
	void EventHonorWallUpdateSelect();
	void UserConstructionScript();
};


}

