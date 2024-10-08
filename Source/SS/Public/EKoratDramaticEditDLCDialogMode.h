#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditDLCDialogMode.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditDLCDialogMode : uint8 {
    None,
    ListBattle,
    DetailBattle,
    Edit,
    Post,
    Copy,
};

