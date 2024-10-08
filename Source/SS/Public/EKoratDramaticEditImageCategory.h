#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditImageCategory.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditImageCategory : uint8 {
    None,
    Preset,
    UserScreenShot,
    Setup,
};

