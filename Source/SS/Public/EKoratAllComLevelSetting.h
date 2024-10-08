#pragma once
#include "CoreMinimal.h"
#include "EKoratAllComLevelSetting.generated.h"

UENUM(BlueprintType)
enum class EKoratAllComLevelSetting : uint8 {
    None,
    Low,
    Middle,
    High,
    ExtraHigh,
    Max,
};

