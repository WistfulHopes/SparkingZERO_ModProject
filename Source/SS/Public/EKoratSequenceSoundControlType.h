#pragma once
#include "CoreMinimal.h"
#include "EKoratSequenceSoundControlType.generated.h"

UENUM(BlueprintType)
enum class EKoratSequenceSoundControlType : uint8 {
    None,
    Play,
    Pause,
    PauseBreak,
    Stop,
    StopByManagedId,
    RePlay,
};

