#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDragonAdventureIFEventLineInfoLocaterActor.generated.h"

UCLASS(Blueprintable)
class ASSDragonAdventureIFEventLineInfoLocaterActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LineID;
    
    ASSDragonAdventureIFEventLineInfoLocaterActor(const FObjectInitializer& ObjectInitializer);

};

