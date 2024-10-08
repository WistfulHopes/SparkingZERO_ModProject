#pragma once
#include "CoreMinimal.h"
#include "EKoratFreeTimelinePlayType.generated.h"

UENUM(BlueprintType)
enum class EKoratFreeTimelinePlayType : uint8 {
    None,
    Play,
    PlayLP,
    PlayOT,
    Stop,
    PlayMAX,
};

