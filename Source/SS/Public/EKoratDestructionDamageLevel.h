#pragma once
#include "CoreMinimal.h"
#include "EKoratDestructionDamageLevel.generated.h"

UENUM(BlueprintType)
enum class EKoratDestructionDamageLevel : uint8 {
    kNoDamage,
    kNoEffect,
    kTouch,
    kSmall,
    kMedium,
    kLarge,
    kDemo,
    kCollide,
    kDashSlide,
    kDamageSlide,
    kBlast,
    kMaximum,
    kCollapse,
    kNum,
};

