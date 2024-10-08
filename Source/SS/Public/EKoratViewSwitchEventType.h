#pragma once
#include "CoreMinimal.h"
#include "EKoratViewSwitchEventType.generated.h"

UENUM(BlueprintType)
enum class EKoratViewSwitchEventType : uint8 {
    kMesh,
    kShadow,
    kNum,
};

