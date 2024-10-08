#pragma once
#include "CoreMinimal.h"
#include "EManaFrameAction.generated.h"

UENUM(BlueprintType)
enum class EManaFrameAction : uint8 {
    Default,
    Hold,
    Clear,
};

