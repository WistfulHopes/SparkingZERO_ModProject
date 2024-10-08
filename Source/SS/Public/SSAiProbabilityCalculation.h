#pragma once
#include "CoreMinimal.h"
#include "SSAiProbabilityCalculation.generated.h"

USTRUCT(BlueprintType)
struct FSSAiProbabilityCalculation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Work;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Denominator;
    
    SS_API FSSAiProbabilityCalculation();
};

