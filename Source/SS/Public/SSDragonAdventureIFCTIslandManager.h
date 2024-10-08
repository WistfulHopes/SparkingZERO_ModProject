#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDragonAdventureIFCTIslandManager.generated.h"

class ASSDragonAdventureIFEventIslandActor;

UCLASS(Blueprintable)
class ASSDragonAdventureIFCTIslandManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASSDragonAdventureIFEventIslandActor*> IslandArray;
    
public:
    ASSDragonAdventureIFCTIslandManager(const FObjectInitializer& ObjectInitializer);

};

