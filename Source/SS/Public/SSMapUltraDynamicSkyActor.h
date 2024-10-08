#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSMapUltraDynamicSkyActor.generated.h"

UCLASS(Blueprintable)
class ASSMapUltraDynamicSkyActor : public AActor {
    GENERATED_BODY()
public:
    ASSMapUltraDynamicSkyActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    double GetBPSunAngle();
    
};

