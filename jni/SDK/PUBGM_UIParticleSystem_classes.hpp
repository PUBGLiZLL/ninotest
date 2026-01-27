#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UIParticleSystem.ParticleWidget
// 0x0018 (0x00E8 - 0x00D0)
class UParticleWidget : public UWidget
{
public:
	class UParticleSystemComponent*                    ParticleComponent;                                        // 0x00D0(0x0004) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      ParticleActor;                                            // 0x00D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00D9(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticleSystem.ParticleWidget");
		return pStaticClass;
	}


	void ActivateParticles(bool bActive, bool bReset);
};


// Class UIParticleSystem.UIParticleComponent
// 0x0000 (0x07F0 - 0x07F0)
class UUIParticleComponent : public UParticleSystemComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticleSystem.UIParticleComponent");
		return pStaticClass;
	}

};


// Class UIParticleSystem.UIParticle
// 0x0000 (0x02B8 - 0x02B8)
class AUIParticle : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticleSystem.UIParticle");
		return pStaticClass;
	}

};


}

