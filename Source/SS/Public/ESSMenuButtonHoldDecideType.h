#pragma once
#include "CoreMinimal.h"
#include "ESSMenuButtonHoldDecideType.generated.h"

UENUM(BlueprintType)
enum class ESSMenuButtonHoldDecideType : uint8 {
    None,
    Short,
    Middle,
    Long,
};

