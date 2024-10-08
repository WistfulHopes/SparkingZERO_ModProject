#pragma once
#include "CoreMinimal.h"
#include "EShakeForceShapeType.generated.h"

UENUM(BlueprintType)
enum class EShakeForceShapeType : uint8 {
    TruncatedCone,
    Donut,
    Cylinder,
    Ball,
    MAX,
};

