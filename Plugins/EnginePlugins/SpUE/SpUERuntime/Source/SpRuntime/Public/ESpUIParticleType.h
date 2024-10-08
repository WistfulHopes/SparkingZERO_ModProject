#pragma once
#include "CoreMinimal.h"
#include "ESpUIParticleType.generated.h"

UENUM(BlueprintType)
enum class ESpUIParticleType : uint8 {
    Once,
    Loop,
    Loop_Anytime,
    Loop_Finished,
};

