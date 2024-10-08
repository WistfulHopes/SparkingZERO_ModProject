#pragma once
#include "CoreMinimal.h"
#include "EKoratFreeTimelineAtbBrkType.generated.h"

UENUM(BlueprintType)
enum class EKoratFreeTimelineAtbBrkType : uint8 {
    None,
    KnockWeak,
    KnockStrong,
    RadialKnockWeak,
    RadialKnockStrong,
    ConeKnockWeak,
    ConeKnockStrong,
    LinearKnockWeak,
    LinearKnockStrong,
    SlashingKnockWeak,
    SlashingKnowStrong,
    ArcLeftKnockWeak,
    ArcLeftKnockStrong,
    ArcRightKnockWeak,
    ArcRightKnockStrong,
    SphericalKnockWeak,
    SphericalKnockStrong,
    NewtonKnockWeak,
    NewtonKnockStrong,
    GreatDestructionKnock,
};

