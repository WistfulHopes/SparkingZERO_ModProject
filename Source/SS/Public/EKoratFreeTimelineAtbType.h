#pragma once
#include "CoreMinimal.h"
#include "EKoratFreeTimelineAtbType.generated.h"

UENUM(BlueprintType)
enum class EKoratFreeTimelineAtbType : uint8 {
    None,
    Run,
    DashJet,
    Landed,
    Step,
    StrongStep,
    WeakStrike,
    StrongStrike,
    RadialJetSmoke,
    MapCollide,
    SphereSmoke,
    ChargeAirPressureLoop,
    BulletDebris,
    BeamDebris,
    JetDebris,
    JetSmokeFired,
    JetSmokeBeam,
    JetSmokeNozzle,
    GroundDustChargeA,
    GroundDustChargeB,
    ChargingDebris,
    DomeExplosionDebrisMidium,
    DomeExplosionDebrisStrong,
    ChargingDust,
    ChargeAirPressureInOut,
    Dash,
    Jump,
    PWStaticelectricity,
    HoistingRubbleS,
    HoistingRubbleL,
};

