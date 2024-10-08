#pragma once
#include "CoreMinimal.h"
#include "EAiEmotionType.h"
#include "SSAiAddEmotionParam.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiAddEmotionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAiEmotionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FSSAiAddEmotionParam();
};

