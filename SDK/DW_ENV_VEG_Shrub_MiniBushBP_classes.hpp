#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ENV_VEG_Shrub_MiniBushBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ENV_VEG_Shrub_MiniBushBP.ENV_VEG_Shrub_MiniBushBP_C
// 0x0008 (0x0400 - 0x03F8)
class AENV_VEG_Shrub_MiniBushBP_C : public ADarwinFoliageActorBP_C
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ENV_VEG_Shrub_MiniBushBP.ENV_VEG_Shrub_MiniBushBP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
