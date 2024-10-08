#pragma once
#include "CoreMinimal.h"
#include "ESSImageGenerationStatus.generated.h"

UENUM(BlueprintType)
enum class ESSImageGenerationStatus : uint8 {
    None,
    Request,
    Processing,
    Complete,
};

