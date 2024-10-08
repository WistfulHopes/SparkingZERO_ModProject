#pragma once
#include "CoreMinimal.h"
#include "SSSubLevelTransitionData.h"
#include "SSPlayerCardTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FSSPlayerCardTransitionData : public FSSSubLevelTransitionData {
    GENERATED_BODY()
public:
    SS_API FSSPlayerCardTransitionData();
};

