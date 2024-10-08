#pragma once
#include "CoreMinimal.h"
#include "SSAiAddEmotionParam.h"
#include "SSAiActionEmotionParam.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiActionEmotionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiAddEmotionParam Param;
    
    FSSAiActionEmotionParam();
};

