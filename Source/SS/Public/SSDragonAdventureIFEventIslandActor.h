#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDragonAdventureIFEventIslandActor.generated.h"

UCLASS(Blueprintable)
class ASSDragonAdventureIFEventIslandActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    ASSDragonAdventureIFEventIslandActor(const FObjectInitializer& ObjectInitializer);

};

