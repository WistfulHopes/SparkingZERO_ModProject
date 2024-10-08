#pragma once
#include "CoreMinimal.h"
#include "WindMotorOutputs.generated.h"

USTRUCT(BlueprintType)
struct FWindMotorOutputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Outputs;
    
    SS_API FWindMotorOutputs();
};

