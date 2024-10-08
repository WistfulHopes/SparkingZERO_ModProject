#pragma once
#include "CoreMinimal.h"
#include "ESSAiUsableDecoratorType.generated.h"

UENUM(BlueprintType)
enum class ESSAiUsableDecoratorType : uint8 {
    None,
    CoolTime,
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
};

