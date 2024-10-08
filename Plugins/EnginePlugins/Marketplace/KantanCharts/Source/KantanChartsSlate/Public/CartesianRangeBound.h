#pragma once
#include "CoreMinimal.h"
#include "ECartesianRangeBoundType.h"
#include "CartesianRangeBound.generated.h"

USTRUCT(BlueprintType)
struct FCartesianRangeBound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECartesianRangeBoundType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedBoundValue;
    
    KANTANCHARTSSLATE_API FCartesianRangeBound();
};

