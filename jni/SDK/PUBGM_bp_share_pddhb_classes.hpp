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

// ScriptBlueprintGeneratedClass bp_share_pddhb.bp_share_pddhb_C
// 0x0040 (0x0310 - 0x02D0)
class Abp_share_pddhb_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_PDDHBRemainNum;                                        // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PDDHB_DelayShowTime;                                   // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_PDDHB_VALID;                                           // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	struct FString                                     BP_PDDHB_QQBKIMG;                                         // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_PDDHB_WXBKIMG;                                         // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_PDDHBRoomId;                                           // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x030C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_pddhb.bp_share_pddhb_C");
		return pStaticClass;
	}


	void EventSharePDD_Push_NoFetch();
	void EventSharePDD_Push();
	void EventSharePDDFetchInfo_NoFetch();
	void EventSharePDDFetchInfo();
	void EventHidePDDHBUI_NoFetch();
	void EventHidePDDHBUI();
	void EventClickSharePDDBtn_NoFetch();
	void EventClickSharePDDBtn();
	void UserConstructionScript();
};


}

