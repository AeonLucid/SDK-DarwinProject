// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ENV_House_03_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ENV_House_03.ENV_House_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AENV_House_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENV_House_03.ENV_House_03_C.UserConstructionScript");

	AENV_House_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
