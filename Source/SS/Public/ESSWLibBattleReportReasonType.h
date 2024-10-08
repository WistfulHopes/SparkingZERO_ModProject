#pragma once
#include "CoreMinimal.h"
#include "ESSWLibBattleReportReasonType.generated.h"

UENUM(BlueprintType)
enum class ESSWLibBattleReportReasonType : uint8 {
    None,
    BattleContinuousPost,
    BattleImproper,
    BattleSameOriginal,
};

