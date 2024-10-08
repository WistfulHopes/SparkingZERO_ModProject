#pragma once
#include "CoreMinimal.h"
#include "ESSWLibReplaySortType.generated.h"

UENUM(BlueprintType)
enum class ESSWLibReplaySortType : uint8 {
    None,
    PostedTime,
    PublicTime,
    Good,
};

