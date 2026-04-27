#pragma once
#include "CoreMinimal.h"
#include "SSAiBlastDataWithOverrides.h"
#include "SSAiB2UB.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiB2UB : public FSSAiBlastDataWithOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SparkingComboHightHpProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SparkingComboLowHpProbability;
    
    FSSAiB2UB();
};

