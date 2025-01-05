#pragma once
#include "CoreMinimal.h"
#include "SSAiLevelProbabilityCore.h"
#include "SSAiLevelProbability.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiLevelProbability : public FSSAiLevelProbabilityCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownTime;
    
    FSSAiLevelProbability();
};

