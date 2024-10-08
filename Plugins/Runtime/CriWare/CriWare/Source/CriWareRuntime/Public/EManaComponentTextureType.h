#pragma once
#include "CoreMinimal.h"
#include "EManaComponentTextureType.generated.h"

UENUM(BlueprintType)
enum class EManaComponentTextureType : uint8 {
    Texture_Y,
    Texture_U,
    Texture_V,
    Texture_A,
    Texture_UV,
    Texture_RGB,
    Texture_External,
};

