#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditDisablePost.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditDisablePost : uint8 {
    None,
    NotClear,
    TempThumbnail,
    Penalty,
};

