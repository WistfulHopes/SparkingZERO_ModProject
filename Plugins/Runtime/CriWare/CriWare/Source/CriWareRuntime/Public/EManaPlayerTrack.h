#pragma once
#include "CoreMinimal.h"
#include "EManaPlayerTrack.generated.h"

UENUM(BlueprintType)
enum class EManaPlayerTrack : uint8 {
    Audio,
    SubAudio,
    ExtraAudio,
    EventPoint,
    Subtitle,
    Video,
    Alpha,
};

