#pragma once
#include "CoreMinimal.h"
#include "SSEffectUpdateToonPointLightParam.h"
#include "SSEffectOverrideToonPointLightParam.generated.h"

USTRUCT(BlueprintType)
struct FSSEffectOverrideToonPointLightParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEffectUpdateToonPointLightParam Param;
    
    SS_API FSSEffectOverrideToonPointLightParam();
};

