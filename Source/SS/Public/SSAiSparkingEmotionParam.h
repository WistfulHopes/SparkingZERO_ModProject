#pragma once
#include "CoreMinimal.h"
#include "SSAiCommonEmotionParam.h"
#include "SSAiSparkingEmotionParam.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiSparkingEmotionParam : public FSSAiCommonEmotionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSparking;
    
    FSSAiSparkingEmotionParam();
};

