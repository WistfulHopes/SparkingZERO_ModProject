#pragma once
#include "CoreMinimal.h"
#include "ECrashImpactAttackDirection.generated.h"

UENUM(BlueprintType)
enum class ECrashImpactAttackDirection : uint8 {
    kFront,
    kRight,
    kLeft,
    kNum,
};

