#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticThumbnailLoadType.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticThumbnailLoadType : uint8 {
    None,
    Loading,
    Loaded,
    SingleBrushed,
    Max,
};

