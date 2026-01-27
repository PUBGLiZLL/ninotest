#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:51 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_InviteFriendProfile.BP_STRUCT_InviteFriendProfile
// 0x00C4
struct FBP_STRUCT_InviteFriendProfile
{
	struct FString                                     picUrl_0_C2A0DA014D486A1E164FC6ADDF9615F2;                // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     nickName_1_CBA2EEAC47380AB7B43B59A1D918CF45;              // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                maxTeamAmount_2_7C2BA22341F4811160C5BA9CB4307A36;         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                reserveState_3_051D52E94263E25D549480961FE9F175;          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamId_4_A9F5C20A4684AE8D08AFE4BB75166BCB;                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid_5_EBC0A4844251CAA3C6481CB5368F9028;                   // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ladder_6_213757F44E8953D42AA9C5B6DBD4AEA4;                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                showInviteIcon_7_977AF1E047CAEDD283C28AB877F89D8C;        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastOnlineTime_8_A04CBD694D9C62749F7F599F73120391;        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_avatar_box_id_10_703270D1415FBDD5678B04A466503D98;    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                op_13_18743CF042B141E7DECE6C92B8CC3333;                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                online_14_870602AE4F5501D4F28CDF91319BFC0A;               // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     applyMsg_15_C0485A1C4874CF848EEFE7A5D1563516;             // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                currentTeamAmount_16_A99659424539AA5B60C1078BD3921909;    // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     timeSinceGameBeginStr_17_F7D74A0F42696036AF1FBFA1C91040E6;// 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                sex_18_E732EEBD4DF6F264E840F4B6517A75B9;                  // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                timeSinceGameBegin_19_18447B0E49C944BC07097AA065539866;   // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     platName_20_3339B87A4625F424B6B34593169A65C0;             // 0x006C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                vipLevel_21_FBA0C34847C3807649FF969344AA81F6;             // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamState_22_0A4E7AA8416EA19A92FD4C93119FDF76;            // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_23_E7DFAE6E468B2ED7DD2907A6A82EA184;                // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                intimacy_24_D91CFD9243D7CD518E844A8401676245;             // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     remarks_name_25_E5CAFCE74EE05C87A786E1B5870ACE33;         // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                game_mode_26_E255212340E7EBD794645FAE5DE42690;            // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     gameModeStr_27_9E93F11E40B3CD8CFB296AB434059E8B;          // 0x0098(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                history_max_segment_level_28_1DD780D2440D9B56734B67B85F759406;// 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                watchUid_31_4651B18013FD19E832631C2403A09BB4;             // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                gameSubMode_32_1FCC95800017786E7062B0D10EA3F695;          // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isLuckyFriend_33_70B892401720580721AE1059040BD644;        // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                enableWatch_34_36143AC04704D7391145ADA006BE7DB8;          // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_max_segment_level_35_5264D140275A3DEB74F2667A094969FC;// 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                listIndex_36_0691704032C8034D68C72B1C0A1C6678;            // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ownerID_37_63FE5140581C8E1740A5AA560F7452F4;              // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

