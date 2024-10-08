#pragma once
#include "CoreMinimal.h"
#include "EKoratBattlePauseResultMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattlePauseResultMode : uint8 {
    Non,
    Normal,
    TrainingSetting,
    ReturnStandby,
    FinishTraining,
    TurorilaSkip,
};

