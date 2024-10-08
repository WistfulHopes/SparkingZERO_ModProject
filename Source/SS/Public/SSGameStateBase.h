#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "SSGameStateBase.generated.h"

UCLASS(Blueprintable)
class ASSGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    ASSGameStateBase(const FObjectInitializer& ObjectInitializer);

};

