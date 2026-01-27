#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:52 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Login_UIPanelBG.Login_UIPanelBG_C
// 0x0000 (0x0270 - 0x0270)
class ULogin_UIPanelBG_C : public UUAEUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Login_UIPanelBG.Login_UIPanelBG_C");
		return pStaticClass;
	}


	void Show_Effects(bool Is_show);
};


}

