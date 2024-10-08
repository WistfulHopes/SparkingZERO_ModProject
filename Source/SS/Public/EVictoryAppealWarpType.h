#pragma once
#include "CoreMinimal.h"
#include "EVictoryAppealWarpType.generated.h"

UENUM(BlueprintType)
enum class EVictoryAppealWarpType : uint8 {
    MyselfSafeArea,
    TargetSmallArea,
    NoWarp,
};

