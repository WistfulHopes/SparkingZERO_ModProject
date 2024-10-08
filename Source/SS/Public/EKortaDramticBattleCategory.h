#pragma once
#include "CoreMinimal.h"
#include "EKortaDramticBattleCategory.generated.h"

UENUM(BlueprintType)
enum class EKortaDramticBattleCategory : uint8 {
    None,
    BeginnerClass,
    AdvancedClass,
    EliteClass,
    LegeandSuperClass,
    HighDegreeOfDifficulty,
};

