#pragma once
#include "CoreMinimal.h"
#include "EKoratCustomNavigationRule.generated.h"

UENUM(BlueprintType)
enum class EKoratCustomNavigationRule : uint8 {
    None,
    Geometry,
    Block,
    OverrideNavi,
};

