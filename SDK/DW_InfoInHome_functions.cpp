// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InfoInHome_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InfoInHome.InfoInHome_C.LoopNextPage
// (Public, BlueprintCallable, BlueprintEvent)

void UInfoInHome_C::LoopNextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoInHome.InfoInHome_C.LoopNextPage");

	UInfoInHome_C_LoopNextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoInHome.InfoInHome_C.SelectNextPage
// (Public, BlueprintCallable, BlueprintEvent)

void UInfoInHome_C::SelectNextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoInHome.InfoInHome_C.SelectNextPage");

	UInfoInHome_C_SelectNextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoInHome.InfoInHome_C.StartNextPageTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInfoInHome_C::StartNextPageTimer(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoInHome.InfoInHome_C.StartNextPageTimer");

	UInfoInHome_C_StartNextPageTimer_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoInHome.InfoInHome_C.ShouldUpdateCurrentMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInfoInHome_C::ShouldUpdateCurrentMessage(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoInHome.InfoInHome_C.ShouldUpdateCurrentMessage");

	UInfoInHome_C_ShouldUpdateCurrentMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function InfoInHome.InfoInHome_C.GetDevCommunicationCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInfoInHome_C::GetDevCommunicationCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoInHome.InfoInHome_C.GetDevCommunicationCount");

	UInfoInHome_C_GetDevCommunicationCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function InfoInHome.InfoInHome_C.FillInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CommunicationIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInfoInHome_C::FillInfoText(int CommunicationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoInHome.InfoInHome_C.FillInfoText");

	UInfoInHome_C_FillInfoText_Params params;
	params.CommunicationIndex = CommunicationIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoInHome.InfoInHome_C.BndEvt__Button_GoToURL_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInfoInHome_C::BndEvt__Button_GoToURL_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoInHome.InfoInHome_C.BndEvt__Button_GoToURL_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UInfoInHome_C_BndEvt__Button_GoToURL_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoInHome.InfoInHome_C.EventDevCommunicationReceived
// (Event, Public, BlueprintEvent)

void UInfoInHome_C::EventDevCommunicationReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoInHome.InfoInHome_C.EventDevCommunicationReceived");

	UInfoInHome_C_EventDevCommunicationReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoInHome.InfoInHome_C.BndEvt__PreviousPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInfoInHome_C::BndEvt__PreviousPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoInHome.InfoInHome_C.BndEvt__PreviousPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UInfoInHome_C_BndEvt__PreviousPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoInHome.InfoInHome_C.BndEvt__NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInfoInHome_C::BndEvt__NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoInHome.InfoInHome_C.BndEvt__NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UInfoInHome_C_BndEvt__NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InfoInHome.InfoInHome_C.ExecuteUbergraph_InfoInHome
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInfoInHome_C::ExecuteUbergraph_InfoInHome(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoInHome.InfoInHome_C.ExecuteUbergraph_InfoInHome");

	UInfoInHome_C_ExecuteUbergraph_InfoInHome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
