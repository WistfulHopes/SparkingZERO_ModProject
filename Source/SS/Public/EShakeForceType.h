#pragma once
#include "CoreMinimal.h"
#include "EShakeForceType.generated.h"

UENUM(BlueprintType)
enum class EShakeForceType : uint8 {
    None,
    Normal,
    ForceZero,
    ForceInfinite,
    NormalFake,
    ForceField0 = 10,
    ForceField1,
    ForceField2,
    ForceField3,
    ForceFieldRelease0 = 30,
    ForceFieldRelease1,
    AttitudeControl0 = 50,
    AttitudeControl1,
    RangedAttack0 = 70,
    MAX,
};

