#pragma once
#include "CoreMinimal.h"
#include "EPencilTransitionColorType.generated.h"

UENUM(BlueprintType)
enum class EPencilTransitionColorType : uint8 {
    None,
    Screen,
    Character,
    LingeringEffect,
    Num,
};

