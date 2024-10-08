#pragma once
#include "CoreMinimal.h"
#include "AtomAttenuationDistanceParam.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomAttenuationDistanceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    FAtomAttenuationDistanceParam();
};

