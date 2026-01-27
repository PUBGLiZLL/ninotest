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

// WidgetBlueprintGeneratedClass GlobalUIContainer_BP.GlobalUIContainer_BP_C
// 0x0008 (0x0290 - 0x0288)
class UGlobalUIContainer_BP_C : public UUAEWidgetContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0004) (Transient, DuplicateTransient)
	class UCanvasPanel*                                CanvasContainer;                                          // 0x028C(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass GlobalUIContainer_BP.GlobalUIContainer_BP_C");
		return pStaticClass;
	}


	void AddWidgetInternal(class UUAEUserWidget** Widget);
	void RemoveWidgetInternal(class UUAEUserWidget** Widget);
	void ExecuteUbergraph_GlobalUIContainer_BP(int EntryPoint);
};


}

