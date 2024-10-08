#pragma once
#include "CoreMinimal.h"
#include "ESSCharacterItemTagTextType.generated.h"

UENUM(BlueprintType)
enum class ESSCharacterItemTagTextType : uint8 {
    None,
    EquipCharaSlot1,
    EquipCharaSlot2,
    CombinedChara,
    ChangedSkillName,
};

