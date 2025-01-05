#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSSubLevelTravelInfo.h"
#include "SSDragonAdventureIFSceneController.generated.h"

class ASSMenuCharacterManager;

UCLASS(Blueprintable)
class ASSDragonAdventureIFSceneController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSSubLevelTravelInfo TravelInfo;
    
public:
    ASSDragonAdventureIFSceneController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    ASSMenuCharacterManager* GetMenuCharacterManager();
    
};

