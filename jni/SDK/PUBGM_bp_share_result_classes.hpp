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

// ScriptBlueprintGeneratedClass bp_share_result.bp_share_result_C
// 0x005C (0x032C - 0x02D0)
class Abp_share_result_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_PlayerIcon;                                            // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PlayerCount;                                           // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerRank;                                            // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_KillNum;                                               // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerName;                                            // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ShareImagePath;                                        // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ShareResult_SelectedTitle;                             // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SHARE_RESULT_TYPE;                                     // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ShareResult_FamousId;                                  // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LoginChannel;                                          // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ShareResultTeamNum;                                    // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ShareResult_TeamShowSingle;                            // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	struct FString                                     BP_ModeKillInfo;                                          // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_result.bp_share_result_C");
		return pStaticClass;
	}


	void EventShareResult_BtnShareQQFriend_NoFetch();
	void EventShareResult_BtnShareQQFriend();
	void EventShareResult_BtnSave_NoFetch();
	void EventShareResult_BtnSave();
	void EventShareResult_BtnCaptureScreen_NoFetch();
	void EventShareResult_BtnCaptureScreen();
	void EventShareResultPanelClosed_NoFetch();
	void EventShareResultPanelClosed();
	void EventShareResult_ShowUI_Push_NoFetch();
	void EventShareResult_ShowUI_Push();
	void EventShareResult_BtnShareTimeLine_NoFetch();
	void EventShareResult_BtnShareTimeLine();
	void EventShareResult_BtnShareFriend_NoFetch();
	void EventShareResult_BtnShareFriend();
	void EventShareResult_BtnShareQQTribe_NoFetch();
	void EventShareResult_BtnShareQQTribe();
	void EventShareResult_BtnShareQQZone_NoFetch();
	void EventShareResult_BtnShareQQZone();
	void EventShareResultVariable_Push_NoFetch();
	void EventShareResultVariable_Push();
	void EventShareResult_BtnShareGameZone_NoFetch();
	void EventShareResult_BtnShareGameZone();
	void UserConstructionScript();
};


}

