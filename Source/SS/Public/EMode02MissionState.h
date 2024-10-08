#pragma once
#include "CoreMinimal.h"
#include "EMode02MissionState.generated.h"

UENUM(BlueprintType)
enum class EMode02MissionState : uint8 {
    Normal,
    Relese,
    ReSelect,
    AnimFinish,
};

