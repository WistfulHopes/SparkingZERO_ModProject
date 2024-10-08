#pragma once
#include "CoreMinimal.h"
#include "EKoratEffectSplineMeshTrailMaterialElementType.generated.h"

UENUM(BlueprintType)
enum class EKoratEffectSplineMeshTrailMaterialElementType : uint8 {
    None,
    WristL,
    WristR,
    ElbowL,
    ElbowR,
    ToeL,
    ToeR,
    ClankL,
    ClankR,
    Tail,
    Horn,
    Equipment,
    Etc,
};

