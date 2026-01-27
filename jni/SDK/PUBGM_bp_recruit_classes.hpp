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

// ScriptBlueprintGeneratedClass bp_recruit.bp_recruit_C
// 0x0070 (0x0340 - 0x02D0)
class Abp_recruit_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_ModelStr;                                              // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChannelName;                                           // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MySelfUID;                                                // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Recruit_IsLobbyTeam;                                   // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_HasJoinCorps;                                          // 0x02F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02FA(0x0002) MISSED OFFSET
	struct FString                                     BP_ModeNameYellow;                                        // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsUIShow;                                              // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	struct FString                                     BP_SendMessage;                                           // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatannelRoomID;                                       // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Recruit_TitleName;                                     // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CorpsRecruit;                                          // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_FrientRecruit;                                         // 0x0329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChannelRecruit;                                        // 0x032A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_WorldRecruit;                                          // 0x032B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ModelPLayCountStr;                                     // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsFinalFightMode;                                      // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFull;                                                   // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x033A(0x0002) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x033C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_recruit.bp_recruit_C");
		return pStaticClass;
	}


	void EventSendMessage_NoFetch();
	void EventSendMessage();
	void EventRecruit_Push_NoFetch();
	void EventRecruit_Push();
	void EventOnCheckStateChanged_World_NoFetch();
	void EventOnCheckStateChanged_World();
	void EventOnCheckStateChanged_Channel_NoFetch();
	void EventOnCheckStateChanged_Channel();
	void EventOnCheckStateChanged_Corps_NoFetch();
	void EventOnCheckStateChanged_Corps();
	void EventOnTextChanged_MessageBox_NoFetch();
	void EventOnTextChanged_MessageBox();
	void EventOnClicked_Send_NoFetch();
	void EventOnClicked_Send();
	void EventOnClicked_Close_NoFetch();
	void EventOnClicked_Close();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventHideUI_NoFetch();
	void EventHideUI();
	void UserConstructionScript();
};


}

