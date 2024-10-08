#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingSettingReviewType.generated.h"

UENUM(BlueprintType)
enum class ESSBattleTrainingSettingReviewType : uint8 {
    Appear,
    Win,
    Lose,
};

