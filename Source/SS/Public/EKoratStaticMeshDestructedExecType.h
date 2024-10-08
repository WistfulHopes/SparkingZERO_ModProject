#pragma once
#include "CoreMinimal.h"
#include "EKoratStaticMeshDestructedExecType.generated.h"

UENUM(BlueprintType)
enum class EKoratStaticMeshDestructedExecType : uint8 {
    None,
    Vanishing,
    RigidDestruction,
    SwitchDestruction,
};

