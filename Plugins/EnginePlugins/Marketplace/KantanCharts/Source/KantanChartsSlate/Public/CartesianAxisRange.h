#pragma once
#include "CoreMinimal.h"
#include "CartesianAxisRange.generated.h"

USTRUCT(BlueprintType)
struct FCartesianAxisRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    KANTANCHARTSSLATE_API FCartesianAxisRange();
};

