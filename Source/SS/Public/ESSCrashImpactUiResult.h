#pragma once
#include "CoreMinimal.h"
#include "ESSCrashImpactUiResult.generated.h"

UENUM(BlueprintType)
enum class ESSCrashImpactUiResult : uint8 {
    None,
    Win,
    Lose,
};

