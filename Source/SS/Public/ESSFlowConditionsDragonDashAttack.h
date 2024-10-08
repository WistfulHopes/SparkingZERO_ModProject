#pragma once
#include "CoreMinimal.h"
#include "ESSFlowConditionsDragonDashAttack.generated.h"

UENUM(BlueprintType)
enum class ESSFlowConditionsDragonDashAttack : uint8 {
    NoDragonDashAssist,
    Succeed,
    Failed,
};

