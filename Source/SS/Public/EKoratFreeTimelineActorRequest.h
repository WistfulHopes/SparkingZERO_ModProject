#pragma once
#include "CoreMinimal.h"
#include "EKoratFreeTimelineActorRequest.generated.h"

UENUM(BlueprintType)
enum class EKoratFreeTimelineActorRequest : uint8 {
    None,
    OneShotPlay,
    Play,
    Stop,
    Pause,
    Destroy,
    Num,
};

