#pragma once
#include "CoreMinimal.h"
#include "SSSubLevelTransitionData.h"
#include "SSAdventureIfTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FSSAdventureIfTransitionData : public FSSSubLevelTransitionData {
    GENERATED_BODY()
public:
    SS_API FSSAdventureIfTransitionData();
};

