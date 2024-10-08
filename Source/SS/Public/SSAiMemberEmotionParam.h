#pragma once
#include "CoreMinimal.h"
#include "ESSAiEmotionSignType.h"
#include "SSAiCommonEmotionParam.h"
#include "SSAiMemberEmotionParam.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiMemberEmotionParam : public FSSAiCommonEmotionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSAiEmotionSignType SignType;
    
    FSSAiMemberEmotionParam();
};

