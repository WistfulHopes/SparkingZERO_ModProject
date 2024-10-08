#pragma once
#include "CoreMinimal.h"
#include "ETypeOfTeleportToPassToBattleCamera.generated.h"

UENUM(BlueprintType)
enum class ETypeOfTeleportToPassToBattleCamera : uint8 {
    None,
    ActVAS,
    ActVAA,
    ActSZCV,
    ActZCO,
    ActRFM,
    ActRFMC,
    ActHSE,
    ActCRFVE,
    ActSM,
    ActSCS,
    ActTA2,
    ActTA3,
    ActRI1,
    ActSI2,
    ActCAS,
    ActHC2,
    ActHC3,
    actHSM,
    actHSMS,
    actZBD,
};

