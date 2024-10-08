#pragma once
#include "CoreMinimal.h"
#include "ESSMovieSoundCategory.generated.h"

UENUM(BlueprintType)
enum class ESSMovieSoundCategory : uint8 {
    None,
    BGM,
    Voice,
    SE,
};

