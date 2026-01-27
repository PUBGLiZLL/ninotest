#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:51 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Editor_login.Editor_login_C
// 0x0010 (0x02D0 - 0x02C0)
class AEditor_login_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0004) (Transient, DuplicateTransient)
	class UUAEUserWidget*                              loginWindow;                                              // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ACameraActor*                                CameraActorLogin_ExecuteUbergraph_Editor_login_RefProperty;// 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                CameraActorLogin_EdGraph_8_RefProperty;                   // 0x02CC(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Editor_login.Editor_login_C");
		return pStaticClass;
	}


	void UpdateAspect();
	void InitSplashUI();
	void InitLoginUI();
	void InpActEvt_Android_Back_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Editor_login(int EntryPoint);
};


}

