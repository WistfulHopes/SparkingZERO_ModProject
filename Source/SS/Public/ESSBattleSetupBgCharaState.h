#pragma once
#include "CoreMinimal.h"
#include "ESSBattleSetupBgCharaState.generated.h"

UENUM(BlueprintType)
enum class ESSBattleSetupBgCharaState : uint8 {
    Loading,
    OneFrameWaiting,
    WarpWaiting,
    SpawndHiddenStandby,
    Invalid,
};

