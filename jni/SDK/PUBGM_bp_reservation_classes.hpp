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

// ScriptBlueprintGeneratedClass bp_reservation.bp_reservation_C
// 0x00F4 (0x03C4 - 0x02D0)
class Abp_reservation_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ReservationFriendProfile         BP_STRUCT_ReservationFriendProfile;                       // 0x02D4(0x00C4) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ReservationFriendProfile> BP_ARRAY_Reservation_Friend_Profile;                      // 0x0398(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ReservationMyPlyerCount;                               // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ReservationInviteFriendID;                             // 0x03A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Reservation_ClickHeadID;                               // 0x03B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_reservation.bp_reservation_C");
		return pStaticClass;
	}


	void EventReservationClickInviteFriendBtn_NoFetch();
	void EventReservationClickInviteFriendBtn();
	void EventReservationClickHeadReq_NoFetch();
	void EventReservationClickHeadReq();
	void EventReservationClickJoinBtn_NoFetch();
	void EventReservationClickJoinBtn();
	void UserConstructionScript();
};


}

