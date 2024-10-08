#pragma once
#include "CoreMinimal.h"
#include "EAtomAudioVolumeType.generated.h"

UENUM(BlueprintType)
enum class EAtomAudioVolumeType : uint8 {
    UseSnapshot,
    UseBus,
    UseAisacControl,
    UseEntranceVolume,
    Num,
};

