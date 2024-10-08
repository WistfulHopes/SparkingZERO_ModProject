#pragma once
#include "CoreMinimal.h"
#include "EAiEnabledType.generated.h"

UENUM(BlueprintType)
enum class EAiEnabledType : uint8 {
    None,
    Enabled,
    Disabled,
};

