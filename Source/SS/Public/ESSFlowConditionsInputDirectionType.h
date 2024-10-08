#pragma once
#include "CoreMinimal.h"
#include "ESSFlowConditionsInputDirectionType.generated.h"

UENUM(BlueprintType)
enum class ESSFlowConditionsInputDirectionType : uint8 {
    Front,
    Back,
    Left,
    Right,
    Neutral,
};

