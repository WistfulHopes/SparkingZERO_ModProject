#pragma once
#include "CoreMinimal.h"
#include "EKoratAlignRotationType.generated.h"

UENUM(BlueprintType)
enum class EKoratAlignRotationType : uint8 {
    ActorXToTarget,
    ActorZToWorldZ,
    ActorXToTargetAndBodyPitchZero,
};

