#pragma once
#include "CoreMinimal.h"
#include "ESSAiImpactBoostType.generated.h"

UENUM(BlueprintType)
enum class ESSAiImpactBoostType : uint8 {
    None,
    OneShot,
    NoBurst,
    FullBurst,
    Max,
};

