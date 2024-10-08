#pragma once
#include "CoreMinimal.h"
#include "SSBattleGameModeBase.h"
#include "SSExperimentalSkipRenderGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASSExperimentalSkipRenderGameMode : public ASSBattleGameModeBase {
    GENERATED_BODY()
public:
    ASSExperimentalSkipRenderGameMode(const FObjectInitializer& ObjectInitializer);

};

