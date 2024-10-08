#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "WarpCollisionUtil.generated.h"

class AActor;
class UPhysicalMaterial;

UCLASS(Blueprintable)
class SS_API UWarpCollisionUtil : public UObject {
    GENERATED_BODY()
public:
    UWarpCollisionUtil();

    UFUNCTION(BlueprintCallable)
    static UPhysicalMaterial* GetHitResultPhysMaterial(FHitResult InHitResult);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetHitResultImpactPoint(FHitResult InHitResult);
    
    UFUNCTION(BlueprintCallable)
    static float GetHitResultHitDistance(FHitResult InHitResult);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetHitResultHitActor(FHitResult InHitResult);
    
};

