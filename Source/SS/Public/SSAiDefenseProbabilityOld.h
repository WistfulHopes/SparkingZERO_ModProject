#pragma once
#include "CoreMinimal.h"
#include "ESSAiDefenseProbabilityType.h"
#include "SSAiLevelProbability.h"
#include "SSAiDefenseProbabilityOld.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiDefenseProbabilityOld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSAiDefenseProbabilityType, FSSAiLevelProbability> Map;
    
    FSSAiDefenseProbabilityOld();
};

