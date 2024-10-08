#pragma once
#include "CoreMinimal.h"
#include "ECameraZoomType.generated.h"

UENUM(BlueprintType)
enum class ECameraZoomType : uint8 {
    ZoomNone,
    ZoomOutLV1,
    ZoomOutLV2,
    ZoomOutLV3,
    ZoomOutLV4,
    ZoomOutLV5,
    ZoomOutLV6,
    ZoomInLV1,
    ZoomInLV2,
    ZoomInLV3,
    ZoomInLV4,
    ZoomInLV5,
    ZoomInLV6,
    MAX,
};

