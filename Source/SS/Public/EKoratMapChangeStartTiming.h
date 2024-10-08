#pragma once
#include "CoreMinimal.h"
#include "EKoratMapChangeStartTiming.generated.h"

UENUM(BlueprintType)
enum class EKoratMapChangeStartTiming : uint8 {
    PreHitDemo,
    FrontOfAudience,
    HitMap,
    StartInGameOT,
};

