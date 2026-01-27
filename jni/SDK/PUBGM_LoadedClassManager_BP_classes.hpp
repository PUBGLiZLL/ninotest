#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:41 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LoadedClassManager_BP.LoadedClassManager_BP_C
// 0x0004 (0x01CC - 0x01C8)
class ULoadedClassManager_BP_C : public UUAELoadedClassManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0004) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass LoadedClassManager_BP.LoadedClassManager_BP_C");
		return pStaticClass;
	}


	void LoadMissionBPTable();
	void LoadEmoteBPTable();
	void LoadConsumableBPTable();
	void LoadGameModeBPTable();
	void LoadAvatarBPTable();
	void LoadWeaponBPTable();
	void InitBPTableMap();
	void ExecuteUbergraph_LoadedClassManager_BP(int EntryPoint);
};


}

