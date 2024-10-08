#pragma once
#include "CoreMinimal.h"
#include "ESSCharacterItemType.generated.h"

UENUM(BlueprintType)
enum class ESSCharacterItemType : uint8 {
    None,
    Health,
    Strike,
    Energy,
    Combo,
    Blast,
    Special,
    Dramatic,
};

