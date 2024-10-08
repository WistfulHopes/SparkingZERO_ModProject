#pragma once
#include "CoreMinimal.h"
#include "ESSSimpleAimTargetType.generated.h"

UENUM(BlueprintType)
enum class ESSSimpleAimTargetType : uint8 {
    Location,
    Actor,
    Bone,
    Impact,
};

