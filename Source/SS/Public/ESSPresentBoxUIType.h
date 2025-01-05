#pragma once
#include "CoreMinimal.h"
#include "ESSPresentBoxUIType.generated.h"

UENUM(BlueprintType)
enum class ESSPresentBoxUIType : uint8 {
    List,
    History,
    Info,
    Num,
};

