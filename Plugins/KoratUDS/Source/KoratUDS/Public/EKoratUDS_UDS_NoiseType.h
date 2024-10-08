#pragma once
#include "CoreMinimal.h"
#include "EKoratUDS_UDS_NoiseType.generated.h"

UENUM(BlueprintType)
enum class EKoratUDS_UDS_NoiseType : uint8 {
    VoronoiSmooth,
    VoronoiDiverse,
    Custom,
};

