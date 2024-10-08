#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditImageNumCategory.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditImageNumCategory : uint8 {
    None,
    Title,
    Thumbnail,
    Preview,
};

