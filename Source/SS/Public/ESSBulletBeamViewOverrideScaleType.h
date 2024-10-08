#pragma once
#include "CoreMinimal.h"
#include "ESSBulletBeamViewOverrideScaleType.generated.h"

UENUM(BlueprintType)
enum class ESSBulletBeamViewOverrideScaleType : uint8 {
    None,
    CharacterCollision,
    ScaledCharacterCollision,
};

