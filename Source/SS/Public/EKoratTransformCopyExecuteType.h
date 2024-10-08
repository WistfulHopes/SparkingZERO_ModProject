#pragma once
#include "CoreMinimal.h"
#include "EKoratTransformCopyExecuteType.generated.h"

UENUM(BlueprintType)
enum class EKoratTransformCopyExecuteType : uint8 {
    None,
    Activate,
    Deactivate,
    Trigger,
};

