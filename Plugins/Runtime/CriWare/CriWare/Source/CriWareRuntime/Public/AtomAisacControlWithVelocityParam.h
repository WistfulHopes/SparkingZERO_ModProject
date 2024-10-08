#pragma once
#include "CoreMinimal.h"
#include "AtomAisacControlWithVelocityParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomAisacControlWithVelocityParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AisacControlName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVelocity;
    
    CRIWARERUNTIME_API FAtomAisacControlWithVelocityParam();
};

