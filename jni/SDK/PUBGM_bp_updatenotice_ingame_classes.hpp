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

// ScriptBlueprintGeneratedClass bp_updatenotice_ingame.bp_updatenotice_ingame_C
// 0x0088 (0x0358 - 0x02D0)
class Abp_updatenotice_ingame_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_UNInGame_AwardItemInfo           BP_STRUCT_UNInGame_AwardItemInfo;                         // 0x02D4(0x000C) (Edit, BlueprintVisible)
	struct FString                                     BP_UpdateNoticeInGame_Scene;                              // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_UNInGame_NoticeIDList;                           // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_UNInGame_AwardItemInfo>   BP_ARRAY_UNInGame_AwardList;                              // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_UpdateNoticeInGame_IsSlapShow;                         // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	struct FString                                     BP_UpdateNoticeInGame_JumpMode;                           // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_UNINGame_AwardInfo               BP_STRUCT_UNINGame_AwardInfo;                             // 0x0314(0x0040) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0354(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_updatenotice_ingame.bp_updatenotice_ingame_C");
		return pStaticClass;
	}


	void EventJumpToMode_NoFetch();
	void EventJumpToMode();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventClickGoFinish_NoFetch();
	void EventClickGoFinish();
	void EventGetAward_NoFetch();
	void EventGetAward();
	void UserConstructionScript();
};


}

