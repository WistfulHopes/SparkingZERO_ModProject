#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "SSPlayerState.generated.h"

UCLASS(Blueprintable)
class ASSPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    ASSPlayerState(const FObjectInitializer& ObjectInitializer);

};

