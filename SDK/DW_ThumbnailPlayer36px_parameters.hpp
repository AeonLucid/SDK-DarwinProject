#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ThumbnailPlayer36px_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.Reloaded
struct UThumbnailPlayer36px_C_Reloaded_Params
{
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.Initialize
struct UThumbnailPlayer36px_C_Initialize_Params
{
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.EventUpdateAvatarTexture
struct UThumbnailPlayer36px_C_EventUpdateAvatarTexture_Params
{
	class UTexture2D**                                 avatar;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.EventUpdatePlayerGradient
struct UThumbnailPlayer36px_C_EventUpdatePlayerGradient_Params
{
	struct FDarwinColorGradient*                       payerGradient;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.ExecuteUbergraph_ThumbnailPlayer36px
struct UThumbnailPlayer36px_C_ExecuteUbergraph_ThumbnailPlayer36px_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
