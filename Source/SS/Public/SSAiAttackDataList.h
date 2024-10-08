#pragma once
#include "CoreMinimal.h"
#include "SSAiAttackDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiAttackDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    FSSAiAttackDataList();
};

