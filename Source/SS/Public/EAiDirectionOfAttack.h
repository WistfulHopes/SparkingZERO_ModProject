#pragma once
#include "CoreMinimal.h"
#include "EAiDirectionOfAttack.generated.h"

UENUM(BlueprintType)
enum class EAiDirectionOfAttack : uint8 {
    DirFront,
    DirUp,
    DirDown,
    DirMax,
};

