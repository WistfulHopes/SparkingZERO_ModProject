#pragma once
#include "CoreMinimal.h"
#include "ESSAiInputType.generated.h"

UENUM(BlueprintType)
enum class ESSAiInputType : uint8 {
    None,
    Push,
    Hold,
    Repeat,
    LatePush,
    LateHold,
    LateRepeat,
};

