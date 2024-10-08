#pragma once
#include "CoreMinimal.h"
#include "ESSAiEmotionSignType.h"
#include "SSAiCommonEmotionParam.h"
#include "SSAiHpEmotionParam.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiHpEmotionParam : public FSSAiCommonEmotionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSAiEmotionSignType SignType;
    
    FSSAiHpEmotionParam();
};

