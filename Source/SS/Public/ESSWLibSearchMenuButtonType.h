#pragma once
#include "CoreMinimal.h"
#include "ESSWLibSearchMenuButtonType.generated.h"

UENUM(BlueprintType)
enum class ESSWLibSearchMenuButtonType : uint8 {
    None,
    Detail,
    Tag,
    ID,
    Follow,
};

