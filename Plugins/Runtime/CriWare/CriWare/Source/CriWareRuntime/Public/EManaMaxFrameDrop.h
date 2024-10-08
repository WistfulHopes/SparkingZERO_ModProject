#pragma once
#include "CoreMinimal.h"
#include "EManaMaxFrameDrop.generated.h"

UENUM(BlueprintType)
enum class EManaMaxFrameDrop : uint8 {
    Disabled,
    One,
    Two,
    Three,
    For,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Infinite,
};

