#pragma once
#include "CoreMinimal.h"
#include "EKoratAttachRotRule.generated.h"

UENUM(BlueprintType)
enum class EKoratAttachRotRule : uint8 {
    None,
    ChrFront,
    ChrFrontZLock,
    ChrMoveDir,
    TwoBoneDir,
    World,
};

