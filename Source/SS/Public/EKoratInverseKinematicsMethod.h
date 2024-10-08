#pragma once
#include "CoreMinimal.h"
#include "EKoratInverseKinematicsMethod.generated.h"

UENUM(BlueprintType)
enum class EKoratInverseKinematicsMethod : uint8 {
    IKM_None,
    IKM_TwoBoneIK,
    IKM_CCDIK,
    IKM_FABRIK,
};

