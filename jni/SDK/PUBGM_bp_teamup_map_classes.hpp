#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:45 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_teamup_map.bp_teamup_map_C
// 0x01DC (0x04AC - 0x02D0)
class Abp_teamup_map_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_TeamUpMapInfo>            BP_ARRAY_TeamUpMapInfoList;                               // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_TeamUpMap_CurClickMapSelected;                         // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	int                                                BP_TeamUpMap_CurClickMapId;                               // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_TeamUpMap_CurMapSelectedHelpInfo;                      // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TeamUpMapInfo                    BP_STRUCT_TeamUpMapInfo;                                  // 0x02F4(0x0074) (Edit, BlueprintVisible)
	struct FBP_STRUCT_TeamUpRecommendMapInfo           BP_STRUCT_TeamUpRecommendMapInfo;                         // 0x0368(0x008C) (Edit, BlueprintVisible)
	bool                                               BP_TeamUpMap_CanSelectMap;                                // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	struct FString                                     BP_TeamUpMap_Title;                                       // 0x03F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUpMap_CurModelType;                                // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUpMap_CurModelPerspective;                         // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_TeamUpMap_LockSelectMap;                               // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	struct FBP_STRUCT_TeamUpMap_CurRecommendMapData    BP_STRUCT_TeamUpMap_CurRecommendMapData;                  // 0x0410(0x008C) (Edit, BlueprintVisible)
	struct FString                                     BP_TeamUpMap_Model;                                       // 0x049C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_teamup_map.bp_teamup_map_C");
		return pStaticClass;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventClickClose_Push_NoFetch();
	void EventClickClose_Push();
	void EventClickMapItem_Push_NoFetch();
	void EventClickMapItem_Push();
	void UserConstructionScript();
};


}

