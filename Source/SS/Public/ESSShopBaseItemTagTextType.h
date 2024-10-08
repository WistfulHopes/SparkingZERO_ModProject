#pragma once
#include "CoreMinimal.h"
#include "ESSShopBaseItemTagTextType.generated.h"

UENUM(BlueprintType)
enum class ESSShopBaseItemTagTextType : uint8 {
    None,
    CharaName,
    UnlockContentsNum,
};

