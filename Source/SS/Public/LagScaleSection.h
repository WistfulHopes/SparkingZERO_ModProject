#pragma once
#include "CoreMinimal.h"
#include "LagScaleSection.generated.h"

USTRUCT(BlueprintType)
struct FLagScaleSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagBaseDownScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagBaseDownScaleStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagBaseDownScaleEndTime;
    
    SS_API FLagScaleSection();
};

