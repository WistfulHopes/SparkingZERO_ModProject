#pragma once
#include "CoreMinimal.h"
#include "EKoratMissionSelectAnimStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratMissionSelectAnimStatus : uint8 {
    None,
    AnimStart,
    AnimPlaying,
    AnimFinish,
};

