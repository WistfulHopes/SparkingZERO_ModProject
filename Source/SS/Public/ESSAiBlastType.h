#pragma once
#include "CoreMinimal.h"
#include "ESSAiBlastType.generated.h"

UENUM(BlueprintType)
enum class ESSAiBlastType : uint8 {
    None,
    B1_BoostUp,
    B1_ReserveDefenseAssist,
    B1_QuickDefenseAssist,
    B1_AttackAssist,
    B2UB_BeamBulletS,
    B2UB_BeamBulletM,
    B2UB_BeamBulletL,
    B2UB_SelfExplosion,
    B2UB_TargetExplosion,
    B2UB_TackleDemo,
    B2UB_TackleNoDemo,
    B2UB_Throw,
    B2UB_FastActivation,
    B2UB_PenetrateObstacles,
    B2UB_PossibleCounterBlast,
    B2UB_PossibleBreakGuard,
};

