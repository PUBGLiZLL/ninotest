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

// ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C
// 0x00B0 (0x0380 - 0x02D0)
class Abp_chat_voice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_GlobalChatvoiceDownloadData      BP_STRUCT_GlobalChatvoiceDownloadData;                    // 0x02D4(0x0030) (Edit, BlueprintVisible)
	bool                                               BP_GlobalChatvoiceSpeakerOpened;                          // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	int                                                BP_GlobalChatvoiceTotalLimit;                             // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceLbsSpeakerOpened;                       // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x030D(0x0003) MISSED OFFSET
	int                                                BP_GlobalChatvoiceCurrentMode;                            // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GlobalChatvoiceCurrentRole;                            // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceCurrentPlayFile;                        // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceToTextContent;                          // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceOpenSpeaker;                            // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceLbsMicOpened;                           // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x033A(0x0002) MISSED OFFSET
	struct FString                                     BP_GlobalChatvoiceUploadMsgId;                            // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceOpenRecord;                             // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceMicOpened;                              // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x034A(0x0002) MISSED OFFSET
	int                                                BP_GlobalChatvoiceUploadTime;                             // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceDefaultOpenTeam;                        // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_GlobalChatvoiceDownloadData> BP_ARRAY_GlobalChatvoiceDownloadList;                     // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceCurrentStage;                           // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceRecordSuccess;                          // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceIsTeamup;                               // 0x036D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x036E(0x0002) MISSED OFFSET
	struct FString                                     BP_GlobalChatvoiceCurrentRoom;                            // 0x0370(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x037C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C");
		return pStaticClass;
	}


	void EventChangeSpeakerState_NoFetch();
	void EventChangeSpeakerState();
	void EventClearGVoiceProcedure_NoFetch();
	void EventClearGVoiceProcedure();
	void EventChatVoiceSetInfo_Push_NoFetch();
	void EventChatVoiceSetInfo_Push();
	void EventNotifyVoiceOpenSpeaker_NoFetch();
	void EventNotifyVoiceOpenSpeaker();
	void EventNotifySystemVoiceOpen_NoFetch();
	void EventNotifySystemVoiceOpen();
	void EventStartPlayGVoiceRecord_NoFetch();
	void EventStartPlayGVoiceRecord();
	void EventStopGVoiceRecord_NoFetch();
	void EventStopGVoiceRecord();
	void EventUploadGVoiceRecord_NoFetch();
	void EventUploadGVoiceRecord();
	void EventTickVoiceRoom_NoFetch();
	void EventTickVoiceRoom();
	void EventStopPlayGVoiceRecord_NoFetch();
	void EventStopPlayGVoiceRecord();
	void EventNotifySystemSpeakerOpen_NoFetch();
	void EventNotifySystemSpeakerOpen();
	void EventNotifyDownloadFailed_NoFetch();
	void EventNotifyDownloadFailed();
	void EventNotifyRecordTooShort_NoFetch();
	void EventNotifyRecordTooShort();
	void EventOnTryOpenMic_NoFetch();
	void EventOnTryOpenMic();
	void EventNotifyVoiceProcedureFailed_NoFetch();
	void EventNotifyVoiceProcedureFailed();
	void EventStartGVoiceRecord_NoFetch();
	void EventStartGVoiceRecord();
	void EventCancelGVoiceRecord_NoFetch();
	void EventCancelGVoiceRecord();
	void EventOnClickCheckOpenRecord_NoFetch();
	void EventOnClickCheckOpenRecord();
	void EventChangeGVoiceMode_NoFetch();
	void EventChangeGVoiceMode();
	void EventNotifyVoiceRecordTooShort_NoFetch();
	void EventNotifyVoiceRecordTooShort();
	void EventNotifyLbsOnly_NoFetch();
	void EventNotifyLbsOnly();
	void EventChangeMicState_NoFetch();
	void EventChangeMicState();
	void EventNotifyTeamupOnly_NoFetch();
	void EventNotifyTeamupOnly();
	void EventOnClickCheckOpenSpeaker_NoFetch();
	void EventOnClickCheckOpenSpeaker();
	void EventNotifyVoiceChatFailToRecord_NoFetch();
	void EventNotifyVoiceChatFailToRecord();
	void EventChatVoiceFetchInfo_NoFetch();
	void EventChatVoiceFetchInfo();
	void EventNotifySystemMicOpen_NoFetch();
	void EventNotifySystemMicOpen();
	void UserConstructionScript();
};


}

