#pragma once
#include "CoreMinimal.h"
#include "ESSImageGenerationImageLabel.generated.h"

UENUM(BlueprintType)
enum class ESSImageGenerationImageLabel : uint8 {
    None,
    MainBgImage,
    PreviewImage01,
    PreviewImage02,
    PreviewImage03,
    PreviewImage04,
    PreviewImage05,
    Max,
};

