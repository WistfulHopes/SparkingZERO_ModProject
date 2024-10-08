#pragma once
#include "CoreMinimal.h"
#include "EKoratCombativesCollisionType.generated.h"

UENUM(BlueprintType)
enum class EKoratCombativesCollisionType : uint8 {
    Bone,
    Capsule,
    Box,
    Sphere,
};

