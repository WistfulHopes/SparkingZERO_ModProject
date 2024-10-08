#pragma once
#include "CoreMinimal.h"
#include "EWindSimFieldShaderType.generated.h"

UENUM(BlueprintType)
enum class EWindSimFieldShaderType : uint8 {
    Normal,
    Simple,
    NoSimulation,
};

