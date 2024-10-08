#pragma once
#include "CoreMinimal.h"
#include "EKoratUDS_UDS_PropertyType.generated.h"

UENUM(BlueprintType)
enum class EKoratUDS_UDS_PropertyType : uint8 {
    Float,
    Int,
    LinearColor,
    Object,
    Bool,
    Byte,
    Rotator,
    Vector2D,
    Vector,
    SoftObject,
};

