#pragma once
#include "CoreMinimal.h"
#include "ESSEffectPlayMode.generated.h"

UENUM(BlueprintType)
enum class ESSEffectPlayMode : uint8 {
    None,
    Play,
    Stop,
    StopAll,
    StopSeqAll,
};

