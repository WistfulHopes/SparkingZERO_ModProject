#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDragonAdventureIFEventIconInfoActor.generated.h"

UCLASS(Blueprintable)
class ASSDragonAdventureIFEventIconInfoActor : public AActor {
    GENERATED_BODY()
public:
    ASSDragonAdventureIFEventIconInfoActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
};

