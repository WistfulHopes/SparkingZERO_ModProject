#pragma once
#include "CoreMinimal.h"
#include "EKoratDestructionAttackParameterType.generated.h"

UENUM(BlueprintType)
enum class EKoratDestructionAttackParameterType : uint8 {
    kMove,
    kFighting,
    kSFighting,
    kBullet,
    kSBullet,
    kBlast,
    kCharge,
    kMaxCharge,
    kRush,
    kCollide,
    kWeakBlast,
    kMiddleBlast,
    kStrongBlast,
    kGiantTouch,
    kGiantStrongTouch,
    kGeneralGiantFighting,
    kGeneralGianlBullet,
    kOrdinaryPersonFighting,
    kOrdinaryPersonMove,
    kCollapse,
};

