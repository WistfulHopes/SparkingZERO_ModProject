#pragma once
#include "CoreMinimal.h"
#include "ESSAiFormChangeType.generated.h"

UENUM(BlueprintType)
enum class ESSAiFormChangeType : uint8 {
    None,
    Transform0,
    Transform1,
    Transform2,
    Transform3,
    Fusion0,
    Fusion1,
    Fusion2,
    Fusion3,
    Potara0,
    Potara1,
    Potara2,
    Potara3,
    Max,
};

