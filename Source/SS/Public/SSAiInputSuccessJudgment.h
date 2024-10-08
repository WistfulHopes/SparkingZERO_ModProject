#pragma once
#include "CoreMinimal.h"
#include "ESSAiInputSuccessJudgmentType.h"
#include "SSAiInputSuccessJudgment.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiInputSuccessJudgment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSAiInputSuccessJudgmentType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JumpIndex;
    
    FSSAiInputSuccessJudgment();
};

