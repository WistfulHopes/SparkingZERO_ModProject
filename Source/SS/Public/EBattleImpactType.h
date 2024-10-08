#pragma once
#include "CoreMinimal.h"
#include "EBattleImpactType.generated.h"

UENUM(BlueprintType)
enum class EBattleImpactType : uint8 {
    kNone,
    kSpeed,
    kBlast,
    kPower,
    kPowerNtoG,
    kPowerGtoN,
    kPowerGtoG,
    kCrash,
    kNum,
};

