#pragma once
#include "CoreMinimal.h"
#include "ESSAiEmotionSignType.h"
#include "SSAiCommonEmotionParam.h"
#include "SSAiSpEmotionParam.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiSpEmotionParam : public FSSAiCommonEmotionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Sp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSAiEmotionSignType SignType;
    
    FSSAiSpEmotionParam();
};

