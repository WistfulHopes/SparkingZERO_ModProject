#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SSPlayerController.generated.h"

class ASSEffectActorInFrontOfTheCamera;

UCLASS(Blueprintable)
class ASSPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSEffectActorInFrontOfTheCamera* EffectInFrontOfTheCamera;
    
public:
    ASSPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LevelBeginPlayFinishedCallback();
    
};

