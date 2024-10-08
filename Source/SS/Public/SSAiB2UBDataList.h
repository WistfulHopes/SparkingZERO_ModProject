#pragma once
#include "CoreMinimal.h"
#include "SSAiBlastBaseDataList.h"
#include "SSAiB2UBDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiB2UBDataList : public FSSAiBlastBaseDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SparkingComboHightHpProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SparkingComboLowHpProbability;
    
    FSSAiB2UBDataList();
};

