#pragma once
#include "CoreMinimal.h"
#include "ESSAiEmotionSignType.h"
#include "SSAiCommonEmotionParam.h"
#include "SSAiSkillStockEmotionParam.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiSkillStockEmotionParam : public FSSAiCommonEmotionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillStock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSAiEmotionSignType SignType;
    
    FSSAiSkillStockEmotionParam();
};

