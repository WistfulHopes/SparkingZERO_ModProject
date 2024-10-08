#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticDirectionMode.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticDirectionMode : uint8 {
    None,
    Trigger,
    Details,
    SpecialEnding,
};

