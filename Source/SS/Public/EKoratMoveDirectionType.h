#pragma once
#include "CoreMinimal.h"
#include "EKoratMoveDirectionType.generated.h"

UENUM(BlueprintType)
enum class EKoratMoveDirectionType : uint8 {
    CharacterDirection,
    CharacterDirection_CorrectionTowardCenter,
    TargetDirection,
    TargetDirection_CorrectionTowardCenter,
    TargetDirectionXY,
    TargetDirectionXY_CorrectionTowardCenter,
};

