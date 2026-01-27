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

// UserDefinedStruct BP_STRUCT_CorpsMemberFriendProfile.BP_STRUCT_CorpsMemberFriendProfile
// 0x00C4
struct FBP_STRUCT_CorpsMemberFriendProfile
{
	struct FString                                     nickName_0_0A8EE8C0738FE7C9196C55690669FDB5;              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     gid_1_15F12C400DEF5CF3440C0B050F7BA164;                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                cur_avatar_box_id_2_70695E406EF64BAF16AD5DA506F83494;     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sex_3_131AB34043C5FA9F4433F1B90F7BB558;                   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                timeSinceGameBegin_4_0405FF404D388D1F180759DF06B6ED9E;    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                vipLevel_5_24D3710003F7A6620BBE3EBA09C577AC;              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_max_segment_level_6_57A84D401A3D775D079AA2AF0AE4D4DC; // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentTeamAmount_7_67ECFEC05086EACD7EF34868009D97C4;     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamState_8_0945E9400B6319CB4228BECC09511E85;             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isLuckyFriend_9_61EC0E40075BCFAF310AFACA012439D4;         // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FString                                     remarks_name_10_09C83C80292BD4CE4FB2459E09D78975;         // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                history_max_segment_level_11_07D0FF4035E4DFB9621CF8DC0F4E97BC;// 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                enableWatch_12_3843B6C00C790FEF260C245209055398;          // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                gameSubMode_13_21FC11807FA9C2A245652D420118D975;          // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                watchUid_14_4A7B2D807BB986865309A516015E60E4;             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     picUrl_15_7B155B003C56972075AE504B0BA67B3C;               // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     platName_16_450BABC06C4D0EA35892C6360B80FD85;             // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                listIndex_17_15BCEC407737AB852EF72AEB05F5F558;            // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                online_18_2E89A0807CE70BD419F4D4F70BAED9F5;               // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                intimacy_19_6BEF96C07B6E641349A39E510C598DE9;             // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     gameModeStr_20_6DC6554052143E11384EFDFB09FB5642;          // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     timeSinceGameBeginStr_21_7F812D80242EDA7A192AA9170EDA51D2;// 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                teamId_22_302DB440465497F1019CA47C0B629644;               // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                game_mode_23_079F86C058EC82150738F3650CEFA455;            // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     applyMsg_24_4A439280502F5DFE1C98502E0EA47ED7;             // 0x0098(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                lastOnlineTime_25_459A69400C3A9ECF533FE6150F2BB0F5;       // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_26_34B305400CE6771B7F9FAB820BBE53CC;                // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                op_27_4260B7004C88B6D0022CA6A409F7BBA0;                   // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                reserveState_28_5664DE804578AFB41A6451AC07EFC385;         // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                showInviteIcon_29_6EC6ED8071CA42701B30CB370835A8FE;       // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ladder_30_66365A402B0BE6BD6CF955060BEE5D72;               // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxTeamAmount_31_14610F804FDE6A903986A6190E72BC84;        // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ownerID_32_7C25CD4068EE121D2F3788FB0A5BBD64;              // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

