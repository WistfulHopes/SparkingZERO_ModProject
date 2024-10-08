#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditFilterMode.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditFilterMode : uint8 {
    None,
    Picture,
    BaseText,
    ReplaceWord,
    ConvertionText,
    Tag,
};

