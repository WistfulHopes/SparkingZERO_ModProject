#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSAquaticSurface.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ASSAquaticSurface : public AActor {
    GENERATED_BODY()
public:
    ASSAquaticSurface(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBoxComponent* GetUnderWaterBoxComponent() const;
    
};

