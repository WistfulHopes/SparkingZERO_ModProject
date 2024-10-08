#pragma once
#include "CoreMinimal.h"
#include "ESSHUDChangeMode.generated.h"

UENUM(BlueprintType)
enum class ESSHUDChangeMode : uint8 {
    None,
    StyleChange,
    CharacterChange,
};

