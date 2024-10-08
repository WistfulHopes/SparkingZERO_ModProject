#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDirectingConditionTargetType.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleDirectingConditionTargetType : uint8 {
    CharacterSlot,
    PlayerTeam,
    EnemyTeam,
    Anyone,
};

