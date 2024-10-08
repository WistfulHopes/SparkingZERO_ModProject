#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDragonAdventureIFChartCameraManager.generated.h"

class ASSLevelSequenceActor;

UCLASS(Blueprintable)
class ASSDragonAdventureIFChartCameraManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* CameraActor;
    
public:
    ASSDragonAdventureIFChartCameraManager(const FObjectInitializer& ObjectInitializer);

};

