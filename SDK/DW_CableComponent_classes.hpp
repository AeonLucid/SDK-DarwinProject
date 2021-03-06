#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CableComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CableComponent.CableActor
// 0x0008 (0x0370 - 0x0368)
class ACableActor : public AActor
{
public:
	class UCableComponent*                             CableComponent;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableActor");
		return ptr;
	}

};


// Class CableComponent.CableComponent
// 0x0080 (0x0740 - 0x06C0)
class UCableComponent : public UMeshComponent
{
public:
	struct FComponentReference                         AttachEndTo;                                              // 0x06C0(0x0018) (Edit)
	struct FName                                       AttachEndToSocketName;                                    // 0x06D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     endLocation;                                              // 0x06E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CableLength;                                              // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSegments;                                              // 0x06F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SubstepTime;                                              // 0x06F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SolverIterations;                                         // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTickOptimization;                                  // 0x06FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06FD(0x0003) MISSED OFFSET
	float                                              TimeWithoutOptimization;                                  // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStiffness;                                         // 0x0704(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0705(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0706(0x0002) MISSED OFFSET
	float                                              CollisionFriction;                                        // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CableForce;                                               // 0x070C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CableGravityScale;                                        // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CableWidth;                                               // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // 0x0720(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileMaterial;                                             // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0728(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableComponent");
		return ptr;
	}


	void SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName);
	void GetCableParticleLocations(TArray<struct FVector>* Locations);
	class USceneComponent* GetAttachedComponent();
	class AActor* GetAttachedActor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
