#pragma once
#include "CoreMinimal.h"
#include "KoratAiDefenseProbabilityTypeDataList.h"
#include "SSAiLevelProbability.h"
#include "SSAiDefenseProbability.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiDefenseProbability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratAiDefenseProbabilityTypeDataList, FSSAiLevelProbability> Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    FSSAiDefenseProbability();
};

