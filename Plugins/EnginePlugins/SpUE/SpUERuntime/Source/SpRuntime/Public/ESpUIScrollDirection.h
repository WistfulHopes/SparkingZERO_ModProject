#pragma once
#include "CoreMinimal.h"
#include "ESpUIScrollDirection.generated.h"

UENUM(BlueprintType)
enum class ESpUIScrollDirection : uint8 {
    Left,
    Right,
    Up,
    Down,
};

