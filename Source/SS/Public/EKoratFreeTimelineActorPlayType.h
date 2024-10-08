#pragma once
#include "CoreMinimal.h"
#include "EKoratFreeTimelineActorPlayType.generated.h"

UENUM(BlueprintType)
enum class EKoratFreeTimelineActorPlayType : uint8 {
    None,
    Play,
    PlayLP,
    PlayOT,
    Stop,
    PlayMAX,
    Num,
};

