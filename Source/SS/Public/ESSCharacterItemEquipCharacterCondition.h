#pragma once
#include "CoreMinimal.h"
#include "ESSCharacterItemEquipCharacterCondition.generated.h"

UENUM(BlueprintType)
enum class ESSCharacterItemEquipCharacterCondition : uint8 {
    None,
    Only,
    Except,
};

