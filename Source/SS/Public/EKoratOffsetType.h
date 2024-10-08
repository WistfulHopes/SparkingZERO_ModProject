#pragma once
#include "CoreMinimal.h"
#include "EKoratOffsetType.generated.h"

UENUM(BlueprintType)
enum class EKoratOffsetType : uint8 {
    None,
    RushOffset,
    CollisionOffset,
    ExImpact,
};

