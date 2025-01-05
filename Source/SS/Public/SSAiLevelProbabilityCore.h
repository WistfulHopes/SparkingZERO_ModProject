#pragma once
#include "CoreMinimal.h"
#include "SSAiLevelProbabilityCore.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SS_API FSSAiLevelProbabilityCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LevelCurve;
    
    FSSAiLevelProbabilityCore();
};

