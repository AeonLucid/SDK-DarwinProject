#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ManHuntGoldLootBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ManHuntGoldLootBP.ManHuntGoldLootBP_C
// 0x0058 (0x0458 - 0x0400)
class AManHuntGoldLootBP_C : public ADarwinLoot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class UDarwinGravityMovementComponent*             DarwinGravityMovement;                                    // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CollisionCube;                                            // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_LootBox;                                                // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      CHEST_ANIMATION;                                          // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Open;                                                     // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	struct FName                                       LootedName;                                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OpacityName;                                              // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ManHuntGoldLootBP.ManHuntGoldLootBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void HighlightLoot(bool* enable, int* stencil_value);
	void EventLootReset();
	void EventLootPickedUp(class ADarwinCharacter** Character);
	void EventActivateOpenParticles();
	void EventUpdateOpenRays(float* Intensity);
	void ExecuteUbergraph_ManHuntGoldLootBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
