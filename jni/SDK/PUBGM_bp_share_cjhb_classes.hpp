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

// ScriptBlueprintGeneratedClass bp_share_cjhb.bp_share_cjhb_C
// 0x0028 (0x02F8 - 0x02D0)
class Abp_share_cjhb_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_CJHBRoomId;                                            // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CJHB_VALID;                                            // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	struct FString                                     BP_CJHBRemainNum;                                         // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CJHB_DelayShowTime;                                    // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_cjhb.bp_share_cjhb_C");
		return pStaticClass;
	}


	void EventShareCJFinaly_Push_NoFetch();
	void EventShareCJFinaly_Push();
	void EventShareCJFinalyFetchInfo_NoFetch();
	void EventShareCJFinalyFetchInfo();
	void EventHideCJUI_NoFetch();
	void EventHideCJUI();
	void EventClickShareCJBtn_NoFetch();
	void EventClickShareCJBtn();
	void UserConstructionScript();
};


}

