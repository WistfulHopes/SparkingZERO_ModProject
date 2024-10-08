#pragma once
#include "CoreMinimal.h"
#include "EAtomProfileSortType.generated.h"

UENUM(BlueprintType)
enum class EAtomProfileSortType : uint8 {
    AtomComponentID,
    Distance,
    Name,
    Time,
};

