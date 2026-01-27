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

// ScriptBlueprintGeneratedClass bp_share_warzone_title.bp_share_warzone_title_C
// 0x0080 (0x0350 - 0x02D0)
class Abp_share_warzone_title_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_ShareWarZoneTitle_KillNum;                             // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ShareWarZoneTitle_Id;                                  // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ShareWarZoneTitle_Success;                             // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	struct FString                                     BP_ShareWarZoneTitle_IconPath;                            // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ShareWarZoneTitle_KillTxt;                             // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ShareWarZoneTitle_RankName;                            // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ShareWarZoneTitle_Type;                                // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ShareWarZoneTitle_RankStr;                             // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ShareWarZoneTitle_SubType;                             // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ShareWarZoneTitle_FailTxt;                             // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ShareWarZoneTitle_PetalPath;                           // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ShareWarZoneTitle_Str;                                 // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_WarZoneShare_Corp_Info           BP_STRUCT_WarZoneShare_Corp_Info;                         // 0x033C(0x0010) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x034C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_warzone_title.bp_share_warzone_title_C");
		return pStaticClass;
	}


	void EventShowShareWarZoneTitleUI_Push_NoFetch();
	void EventShowShareWarZoneTitleUI_Push();
	void UserConstructionScript();
};


}

