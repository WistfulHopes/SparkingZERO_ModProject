#pragma once
#include "CoreMinimal.h"
#include "EFocusTargetType.generated.h"

UENUM(BlueprintType)
enum class EFocusTargetType : uint8 {
    FocusTargetTypeNone,
    FocusTargetTypeNormal,
    FocusTargetTypeMax,
};

