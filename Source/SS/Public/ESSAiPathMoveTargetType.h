#pragma once
#include "CoreMinimal.h"
#include "ESSAiPathMoveTargetType.generated.h"

UENUM(BlueprintType)
enum class ESSAiPathMoveTargetType : uint8 {
    None,
    Target,
    SafeArea,
    Max,
};

