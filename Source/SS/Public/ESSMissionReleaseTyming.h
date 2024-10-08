#pragma once
#include "CoreMinimal.h"
#include "ESSMissionReleaseTyming.generated.h"

UENUM(BlueprintType)
enum class ESSMissionReleaseTyming : uint8 {
    None,
    AfterTutorial,
    AfterCharacterUnlock,
};

