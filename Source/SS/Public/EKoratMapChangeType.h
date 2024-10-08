#pragma once
#include "CoreMinimal.h"
#include "EKoratMapChangeType.generated.h"

UENUM(BlueprintType)
enum class EKoratMapChangeType : uint8 {
    None,
    Escape,
    Destruct,
};

