#pragma once
#include "CoreMinimal.h"
#include "ESSWLibPenaltyContentsRestrictType.generated.h"

UENUM(BlueprintType)
enum class ESSWLibPenaltyContentsRestrictType : uint8 {
    None,
    EditBattleUpload,
    EditBattleReport,
};

