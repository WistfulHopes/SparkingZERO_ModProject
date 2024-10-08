#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSTravelSystemSceneTransitionBas.generated.h"

class ASSTravelSystemWorker;

UCLASS(Blueprintable)
class ASSTravelSystemSceneTransitionBas : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSTravelSystemWorker* TravelWorker;
    
public:
    ASSTravelSystemSceneTransitionBas(const FObjectInitializer& ObjectInitializer);

};

