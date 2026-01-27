#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:44 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_corps_apply_list.bp_corps_apply_list_C
// 0x00BC (0x038C - 0x02D0)
class Abp_corps_apply_list_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x02D4(0x0040) (Edit, BlueprintVisible)
	int                                                BP_Corps_ApplyList_ShowType;                              // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsApplyList_ItemData>  BP_ARRAY_Corps_ApplyList;                                 // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CorpsApplyList_PlayerDetailUID;                        // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Corps_ApplyList_OptionID;                              // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsApplyList_ItemData          BP_STRUCT_CorpsApplyList_ItemData;                        // 0x033C(0x004C) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0388(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_apply_list.bp_corps_apply_list_C");
		return pStaticClass;
	}


	void EventCorpsOnClickAgreeMemberJoin_NoFetch();
	void EventCorpsOnClickAgreeMemberJoin();
	void EventCorpsOnClickRefuseMemberJoin_NoFetch();
	void EventCorpsOnClickRefuseMemberJoin();
	void EventCorpsApplyListClose_NoFetch();
	void EventCorpsApplyListClose();
	void EventCorpsOnClickPlayerDetail_NoFetch();
	void EventCorpsOnClickPlayerDetail();
	void UserConstructionScript();
};


}

