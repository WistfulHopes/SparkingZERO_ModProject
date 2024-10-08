#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SSPlayerController.generated.h"

UCLASS(Blueprintable)
class ASSPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ASSPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LevelBeginPlayFinishedCallback();
    
};

