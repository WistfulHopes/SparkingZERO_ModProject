#pragma once
#include "CoreMinimal.h"
#include "EWindSimFieldMotorType.generated.h"

UENUM(BlueprintType)
enum class EWindSimFieldMotorType : uint8 {
    SphereDirectional,
    SphereOmni,
    SphereVortex,
    CapsuleDirectional,
    CapsuleOmni,
    CapsuleVortex,
    MotionSphere,
    BulletOmni,
    BulletOmni25D,
    Cylinder,
};

