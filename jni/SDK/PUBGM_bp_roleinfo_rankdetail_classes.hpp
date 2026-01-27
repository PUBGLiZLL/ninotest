#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:48 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C
// 0x0050 (0x0320 - 0x02D0)
class Abp_roleinfo_rankdetail_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_ItemMax;                                               // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_RoleRankDetailTypeInfo>   BP_ARRAY_RoleRankDetailTypeList;                          // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_RoleRankDetailSingleInfo> BP_ARRAY_RoleRankDetailSingleList;                        // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoleRankDetailSingleInfo         BP_STRUCT_RoleRankDetailSingleInfo;                       // 0x02F0(0x001C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_RoleRankDetailTypeInfo           BP_STRUCT_RoleRankDetailTypeInfo;                         // 0x030C(0x0010) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x031C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C");
		return pStaticClass;
	}


	void EventRankDetailRelease_NoFetch();
	void EventRankDetailRelease();
	void UserConstructionScript();
};


}

