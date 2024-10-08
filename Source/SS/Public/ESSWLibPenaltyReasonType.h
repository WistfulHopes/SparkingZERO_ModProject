#pragma once
#include "CoreMinimal.h"
#include "ESSWLibPenaltyReasonType.generated.h"

UENUM(BlueprintType)
enum class ESSWLibPenaltyReasonType : uint8 {
    None,
    EditBattleReported,
    EditBattleFalseReport,
};

