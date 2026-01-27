#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:48 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_room_modeselect.bp_room_modeselect_C
// 0x0048 (0x0318 - 0x02D0)
class Abp_room_modeselect_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_RoomModeSelectModeInfo>   BP_ARRAY_RoomModeSelectModeInfoList;                      // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoomModeSelectModeInfo           BP_STRUCT_RoomModeSelectModeInfo;                         // 0x02E0(0x002C) (Edit, BlueprintVisible)
	int                                                BP_RoomModeSelect_SelectID;                               // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_RoomModeSelect_NeedUnlockID;                           // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0314(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_room_modeselect.bp_room_modeselect_C");
		return pStaticClass;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventClickBtnOK_NoFetch();
	void EventClickBtnOK();
	void EventUnSelectAllItems_NoFetch();
	void EventUnSelectAllItems();
	void EventCheckUnlockRoomType_NoFetch();
	void EventCheckUnlockRoomType();
	void UserConstructionScript();
};


}

