#pragma once
#include "CoreMinimal.h"
#include "ESSBlastDemoBranchType.generated.h"

UENUM(BlueprintType)
enum class ESSBlastDemoBranchType : uint8 {
    None,
    Map,
    Wall,
    DramaticFinish,
    Team,
    Ex,
    BuffForm,
    Giant,
    GiantDramaticFinish,
    SpDerivA,
    SpDerivMax,
};

