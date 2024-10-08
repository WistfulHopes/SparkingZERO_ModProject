#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratPoolableActorInterface.h"
#include "KoratPoolableBlueprintBase.generated.h"

UCLASS(Blueprintable)
class AKoratPoolableBlueprintBase : public AActor, public IKoratPoolableActorInterface {
    GENERATED_BODY()
public:
    AKoratPoolableBlueprintBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

