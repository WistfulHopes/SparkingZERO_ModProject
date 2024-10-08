#pragma once
#include "CoreMinimal.h"
#include "EKoratSelectGuestCharacterUiMode.generated.h"

UENUM(BlueprintType)
enum class EKoratSelectGuestCharacterUiMode : uint8 {
    None,
    Delete,
    Exchange,
};

