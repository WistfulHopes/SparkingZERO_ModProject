#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "SSAiCommonEmotionParam.h"
#include "SSAiAction2EmotionParam.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiAction2EmotionParam : public FSSAiCommonEmotionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> Actions;
    
    FSSAiAction2EmotionParam();
};

