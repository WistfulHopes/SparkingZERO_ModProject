#pragma once
#include "CoreMinimal.h"
#include "EKoratLevelSequenceValidateResultType.generated.h"

UENUM(BlueprintType)
enum class EKoratLevelSequenceValidateResultType : uint8 {
    None,
    Warning,
    Modified,
};

