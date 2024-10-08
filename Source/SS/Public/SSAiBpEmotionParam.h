#pragma once
#include "CoreMinimal.h"
#include "EAiEmotionType.h"
#include "EKoratInequalitySignType.h"
#include "SSAiBpEmotionParam.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiBpEmotionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAiEmotionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratInequalitySignType SignType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnableAiLevel;
    
    FSSAiBpEmotionParam();
};

