#pragma once
#include "CoreMinimal.h"
#include "SSAiAction2EmotionParam.h"
#include "SSAiAddEmotionParam.h"
#include "SSAiHpEmotionParam.h"
#include "SSAiMemberEmotionParam.h"
#include "SSAiSkillStockEmotionParam.h"
#include "SSAiSpEmotionParam.h"
#include "SSAiSparkingEmotionParam.h"
#include "SSAiEmotionParam.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiEmotionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAiHpEmotionParam> HpParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAiSpEmotionParam> SpParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAiSkillStockEmotionParam> SkillStockParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAiSparkingEmotionParam> SparkingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAiMemberEmotionParam> MemberParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAiAction2EmotionParam> ActionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiAddEmotionParam ImpactParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetTime;
    
    FSSAiEmotionParam();
};

