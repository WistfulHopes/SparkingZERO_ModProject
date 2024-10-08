#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleEditTriggerSwitcher.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleEditTriggerSwitcher : uint8 {
    OneIcon,
    Attack,
    Change,
    Num,
    IconAndNum,
    IconAndEmote,
    Blank,
};

