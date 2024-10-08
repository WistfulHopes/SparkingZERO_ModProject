#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSetupStartMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleSetupStartMode : uint8 {
    None,
    BattleSetupTop,
    DebugBattleSetupTop,
    TestCharacterSelect,
};

