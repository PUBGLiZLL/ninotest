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

// WidgetBlueprintGeneratedClass Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C
// 0x0004 (0x01B4 - 0x01B0)
class UCommon_RankIntegralLevel_Style_Small_UIBP_C : public UUserWidget
{
public:
	class UImage*                                      Image_Icon;                                               // 0x01B0(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C");
		return pStaticClass;
	}


	void SetRankInfoWithoutNum(int RankLevel, class UTexture2D* RankTexture, class UTexture2D** RankTextureOutput);
	void SetRankInfo(int RankLevel, class UTexture2D* RankTexture, class UTexture2D** RankTextureOutput);
	void SetRankInteralExtend(int rankIntegral, class UTextBlock* textIntegralName, class UTexture2D* Texture, class UTexture2D** Output);
	void SetRankInteral(int rankIntegral, class UTextBlock* textIntegralName);
};


}

