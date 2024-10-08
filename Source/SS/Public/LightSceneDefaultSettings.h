#pragma once
#include "CoreMinimal.h"
#include "LightSceneDefaultSettings.generated.h"

USTRUCT(BlueprintType)
struct FLightSceneDefaultSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    float FrequencyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    float WiggleStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    float EaseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    float BaseShadow;
    
    SS_API FLightSceneDefaultSettings();
};

