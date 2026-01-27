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

// ScriptBlueprintGeneratedClass bp_scrollnotice.bp_scrollnotice_C
// 0x0074 (0x0344 - 0x02D0)
class Abp_scrollnotice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_ScrollNoticeMsgData>      BP_ARRAY_ScrollNoticeMsgData;                             // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ScrollMsg_CurrentMsgId;                                // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ScrollNoticeMsgData              BP_STRUCT_ScrollNoticeMsgData;                            // 0x02E4(0x0024) (Edit, BlueprintVisible)
	bool                                               BP_ScrollMsg_IsRolling;                                   // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	int                                                BP_ScrollMsg_CurrentRound;                                // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ScrollMsg_ShowEnd;                                     // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ScrollMsg_Cannotshow;                                  // 0x0311(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0312(0x0002) MISSED OFFSET
	struct FString                                     BP_ScrollMsgUrl;                                          // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CurrentScrollNoticeMsgData       BP_STRUCT_CurrentScrollNoticeMsgData;                     // 0x0320(0x0014) (Edit, BlueprintVisible)
	struct FString                                     BP_ScrollMsg_CurrentRealMsg;                              // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_scrollnotice.bp_scrollnotice_C");
		return pStaticClass;
	}


	void EventShowNextMsg_NoFetch();
	void EventShowNextMsg();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventOneMsgRollEnd_NoFetch();
	void EventOneMsgRollEnd();
	void UserConstructionScript();
};


}

