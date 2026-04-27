#pragma once
#include "CoreMinimal.h"
#include "ESSGalleryMyDataMiddleItemType.generated.h"

UENUM(BlueprintType)
enum class ESSGalleryMyDataMiddleItemType : uint8 {
    ModeNSR_ACB_Single,
    ModeNSR_ACB_DP,
    ModeNSR_ACB_Team,
    ModeNSR_UCB_Single,
    ModeNSR_UCB_DP,
    ModeNSR_UCB_Team,
    Num,
};

