#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleEditDetailSwitcher.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleEditDetailSwitcher : uint8 {
    OneIcon,
    Arrow,
    IconAndNum,
    IconAndEmote,
    IconAndItem,
    IconAndBuff,
    Table,
    EventText,
    Bgm,
    Scene,
    Blank,
    None,
};

