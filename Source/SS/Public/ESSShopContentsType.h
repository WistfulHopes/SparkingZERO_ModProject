#pragma once
#include "CoreMinimal.h"
#include "ESSShopContentsType.generated.h"

UENUM(BlueprintType)
enum class ESSShopContentsType : uint8 {
    None,
    Character,
    StockItem,
    PlayerCardBG,
    BattleBGM,
    EquipItemBegin,
    EquipPowerUp,
    EquipCostume,
    EquipEquipment,
    EquipEntryAction,
    EquipEntryVoice,
    EquipVictoryAction,
    EquipVictoryVoice,
    EquipAppealAction,
    EquipAppealVoice,
    EquipVoice,
    EquipCombine,
    EquipItemCombine,
    EquipSparkingBGM,
    EquipAIType,
    EquipAILevel,
    EquipControl,
    EquipItemEnd,
};

