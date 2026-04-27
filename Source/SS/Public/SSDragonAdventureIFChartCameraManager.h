#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDragonAdventureIFChartCameraManager.generated.h"

class ASSDragonAdventureIFEventIconActor;
class ASSLevelSequenceActor;

UCLASS(Blueprintable)
class ASSDragonAdventureIFChartCameraManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASSDragonAdventureIFEventIconActor*> EventIconActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RotationActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* CameraActor;
    
public:
    ASSDragonAdventureIFChartCameraManager(const FObjectInitializer& ObjectInitializer);

};

