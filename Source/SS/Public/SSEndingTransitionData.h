#pragma once
#include "CoreMinimal.h"
#include "SSSubLevelTransitionData.h"
#include "SSEndingTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FSSEndingTransitionData : public FSSSubLevelTransitionData {
    GENERATED_BODY()
public:
    SS_API FSSEndingTransitionData();
};

