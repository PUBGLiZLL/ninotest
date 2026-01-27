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

// ScriptBlueprintGeneratedClass bp_share_honor_wall.bp_share_honor_wall_C
// 0x0034 (0x0304 - 0x02D0)
class Abp_share_honor_wall_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ShareHonorWall_ShareInfo         BP_STRUCT_ShareHonorWall_ShareInfo;                       // 0x02D4(0x002C) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_honor_wall.bp_share_honor_wall_C");
		return pStaticClass;
	}


	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventShareHonorWallHide_NoFetch();
	void EventShareHonorWallHide();
	void UserConstructionScript();
};


}

