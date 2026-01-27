#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:47 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_newyear.bp_newyear_C
// 0x0060 (0x0330 - 0x02D0)
class Abp_newyear_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_NewYear_Info                     BP_STRUCT_NewYear_Info;                                   // 0x02D4(0x0030) (Edit, BlueprintVisible)
	bool                                               BP_NewYear_HasShareTody;                                  // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_NewYear_AwardItemData>    BP_ARRAY_NewYear_ItemsData;                               // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_NewYear_ItemClickAwardIdx;                             // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_NewYear_AwardItemData            BP_STRUCT_NewYear_AwardItemData;                          // 0x0318(0x0014) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x032C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_newyear.bp_newyear_C");
		return pStaticClass;
	}


	void EventNewYearOnBtnUseClicked_NoFetch();
	void EventNewYearOnBtnUseClicked();
	void EventNewYearOnItemClicked_NoFetch();
	void EventNewYearOnItemClicked();
	void EventNewYearOnBtnCloseClicked_NoFetch();
	void EventNewYearOnBtnCloseClicked();
	void EventNewYearOnBtnNotice_NoFetch();
	void EventNewYearOnBtnNotice();
	void EventNewYearOnBtnShare_NoFetch();
	void EventNewYearOnBtnShare();
	void UserConstructionScript();
};


}

