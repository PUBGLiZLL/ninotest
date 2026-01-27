#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MediaCompositing.MediaPlaneComponent.SetMediaPlane
struct UMediaPlaneComponent_SetMediaPlane_Params
{
	struct FMediaPlaneParameters                       Plane;                                                    // (Parm)
};

// Function MediaCompositing.MediaPlaneComponent.OnRenderTextureChanged
struct UMediaPlaneComponent_OnRenderTextureChanged_Params
{
};

// Function MediaCompositing.MediaPlaneComponent.GetPlane
struct UMediaPlaneComponent_GetPlane_Params
{
	struct FMediaPlaneParameters                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

