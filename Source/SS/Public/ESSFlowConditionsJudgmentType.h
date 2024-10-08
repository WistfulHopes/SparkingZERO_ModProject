#pragma once
#include "CoreMinimal.h"
#include "ESSFlowConditionsJudgmentType.generated.h"

UENUM(BlueprintType)
enum class ESSFlowConditionsJudgmentType : uint8 {
    Continue,
    Stop,
};

