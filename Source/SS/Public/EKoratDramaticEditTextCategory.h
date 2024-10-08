#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditTextCategory.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditTextCategory : uint8 {
    None,
    BaseText,
    ReplaceWord,
    Jingru,
    Tag,
};

