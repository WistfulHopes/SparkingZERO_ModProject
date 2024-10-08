#pragma once
#include "CoreMinimal.h"
#include "ESSBulletCharacterLastHitType.generated.h"

UENUM(BlueprintType)
enum class ESSBulletCharacterLastHitType : uint8 {
    PlayOT,
    Penerate,
    Destroy,
};

