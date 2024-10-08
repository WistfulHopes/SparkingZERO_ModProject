#pragma once
#include "CoreMinimal.h"
#include "SSSubLevelTransitionData.h"
#include "SSBattleTrainingTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleTrainingTransitionData : public FSSSubLevelTransitionData {
    GENERATED_BODY()
public:
    SS_API FSSBattleTrainingTransitionData();
};

