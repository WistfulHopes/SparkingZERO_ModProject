#pragma once
#include "CoreMinimal.h"
#include "SSAiBodySize.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiBodySize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumRange;
    
    FSSAiBodySize();
};

