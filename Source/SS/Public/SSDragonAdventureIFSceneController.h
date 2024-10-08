#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDragonAdventureIFSceneController.generated.h"

class ASSMenuCharacterManager;

UCLASS(Blueprintable)
class ASSDragonAdventureIFSceneController : public AActor {
    GENERATED_BODY()
public:
    ASSDragonAdventureIFSceneController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    ASSMenuCharacterManager* GetMenuCharacterManager();
    
};

