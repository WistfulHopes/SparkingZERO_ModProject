#pragma once
#include "CoreMinimal.h"
#include "EKoratMainGameSaveBattleSettingMode.generated.h"

UENUM(BlueprintType)
enum class EKoratMainGameSaveBattleSettingMode : uint8 {
    OfflineBattle,
    OnlineBattle,
    BattleSaveModeMax,
};

