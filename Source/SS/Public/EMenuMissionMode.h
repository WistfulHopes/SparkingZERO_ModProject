#pragma once
#include "CoreMinimal.h"
#include "EMenuMissionMode.generated.h"

UENUM(BlueprintType)
enum class EMenuMissionMode : uint8 {
    LifeLong,
    Tutorial,
    Mode02,
    Mode03,
    Trophy,
    None,
};

