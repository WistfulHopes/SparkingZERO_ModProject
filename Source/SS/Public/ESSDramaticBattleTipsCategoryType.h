#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleTipsCategoryType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleTipsCategoryType : uint8 {
    All,
    CustomBattle,
    EditMode,
    ActivateCondition,
    BattleProduction,
    CutEditor,
    Others,
    SingleTipsOnly,
};

