#pragma once
#include "CoreMinimal.h"
#include "ESSContainerSubLevelVisibleMode.generated.h"

UENUM(BlueprintType)
enum class ESSContainerSubLevelVisibleMode : uint8 {
    None,
    Normal,
    EndTransition,
};

