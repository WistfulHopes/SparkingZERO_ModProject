#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticSituationType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticSituationType : uint8 {
    Event3D,
    Event2D,
    Battle3D_Blast,
    Battle3D_ImpactSPE,
    Battle3D_ImpactPOW_N2N,
    Battle3D_ImpactPOW_G2N,
    Battle3D_Appeal,
    Battle3D_AppealWIN,
};

