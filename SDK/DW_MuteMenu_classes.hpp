#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MuteMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MuteMenu.MuteMenu_C
// 0x0010 (0x0510 - 0x0500)
class UMuteMenu_C : public UDarwinUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                MuteVerticalBox;                                          // 0x0508(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MuteMenu.MuteMenu_C");
		return ptr;
	}


	void EventMuteMapAdd(int* UniqueId, bool* muted, EDarwinRoleEnum* Role);
	void ExecuteUbergraph_MuteMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
