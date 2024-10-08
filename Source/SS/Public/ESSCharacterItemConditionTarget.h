#pragma once
#include "CoreMinimal.h"
#include "ESSCharacterItemConditionTarget.generated.h"

UENUM(BlueprintType)
enum class ESSCharacterItemConditionTarget : uint8 {
    None,
    Myself,
    Enemy,
};

