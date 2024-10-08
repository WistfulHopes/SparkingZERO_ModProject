#pragma once
#include "CoreMinimal.h"
#include "ESSWLibDetailSearchCharacterMenuButtonType.generated.h"

UENUM(BlueprintType)
enum class ESSWLibDetailSearchCharacterMenuButtonType : uint8 {
    Invalid,
    None,
    Secret,
    Free,
    Select,
};

