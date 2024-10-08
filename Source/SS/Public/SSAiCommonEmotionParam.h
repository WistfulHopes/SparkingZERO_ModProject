#pragma once
#include "CoreMinimal.h"
#include "ESSAiEmotionTargetType.h"
#include "SSAiAddEmotionParam.h"
#include "SSAiCommonEmotionParam.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiCommonEmotionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSAiEmotionTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiAddEmotionParam AddParam;
    
    FSSAiCommonEmotionParam();
};

