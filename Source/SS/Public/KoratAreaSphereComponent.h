#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SphereComponent.h"
#include "KoratAreaInterface.h"
#include "KoratAreaSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratAreaSphereComponent : public USphereComponent, public IKoratAreaInterface {
    GENERATED_BODY()
public:
    UKoratAreaSphereComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool IsInside(const FVector& WorldPoint) override PURE_VIRTUAL(IsInside, return false;);
    
};

