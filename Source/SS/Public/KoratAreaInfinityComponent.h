#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "KoratAreaInterface.h"
#include "KoratAreaInfinityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratAreaInfinityComponent : public USceneComponent, public IKoratAreaInterface {
    GENERATED_BODY()
public:
    UKoratAreaInfinityComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool IsInside(const FVector& WorldPoint) override PURE_VIRTUAL(IsInside, return false;);
    
};

