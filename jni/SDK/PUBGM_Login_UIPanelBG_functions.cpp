//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:52 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Login_UIPanelBG.Login_UIPanelBG_C.Show Effects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_show                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULogin_UIPanelBG_C::Show_Effects(bool Is_show)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_UIPanelBG.Login_UIPanelBG_C.Show Effects");

	ULogin_UIPanelBG_C_Show_Effects_Params params;
	params.Is_show = Is_show;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

