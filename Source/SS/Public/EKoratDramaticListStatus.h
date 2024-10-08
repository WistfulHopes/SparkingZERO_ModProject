#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticListStatus.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticListStatus : uint8 {
    None,
    ListHideAnim,
    ListReDisplay,
};

