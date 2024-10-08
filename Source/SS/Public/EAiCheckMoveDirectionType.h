#pragma once
#include "CoreMinimal.h"
#include "EAiCheckMoveDirectionType.generated.h"

UENUM(BlueprintType)
enum class EAiCheckMoveDirectionType : uint8 {
    Front,
    Back,
    Left,
    Right,
    Up,
    Down,
};

