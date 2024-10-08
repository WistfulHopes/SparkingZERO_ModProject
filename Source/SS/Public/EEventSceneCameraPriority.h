#pragma once
#include "CoreMinimal.h"
#include "EEventSceneCameraPriority.generated.h"

UENUM(BlueprintType)
enum class EEventSceneCameraPriority : uint8 {
    None,
    Directing,
    FirstPerson,
};

