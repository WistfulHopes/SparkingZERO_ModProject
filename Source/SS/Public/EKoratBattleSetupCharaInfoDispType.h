#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSetupCharaInfoDispType.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleSetupCharaInfoDispType : uint8 {
    None,
    SkillAndForm,
    EquipAndStatus,
    Num,
};

