#pragma once
#include "CoreMinimal.h"
#include "SSEffectOverrideToonPointLightParam.h"
#include "SSEffectUpdateToonPointLightParam.h"
#include "SSEffectUpdateToonPointScene.generated.h"

USTRUCT(BlueprintType)
struct FSSEffectUpdateToonPointScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSEffectUpdateToonPointLightParam> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEffectOverrideToonPointLightParam ParamForOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequestRemove: 1;
    
    SS_API FSSEffectUpdateToonPointScene();
};

