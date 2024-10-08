#pragma once
#include "CoreMinimal.h"
#include "KoratPostProcessChameleonComponentBaseCacheParameters.h"
#include "KoratPostProcessWorldToScreenComponentCacheParameters.h"
#include "KoratPostProcessChameleonCacheParameters.generated.h"

USTRUCT(BlueprintType)
struct FKoratPostProcessChameleonCacheParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratPostProcessChameleonComponentBaseCacheParameters BaseParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratPostProcessWorldToScreenComponentCacheParameters WorldToScreenRadialBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratPostProcessWorldToScreenComponentCacheParameters WorldToScreenSpeedLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratPostProcessWorldToScreenComponentCacheParameters WorldToScreenBWSpeedLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratPostProcessWorldToScreenComponentCacheParameters WorldToScreenFVS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratPostProcessWorldToScreenComponentCacheParameters WorldToScreenDrmarize;
    
    SS_API FKoratPostProcessChameleonCacheParameters();
};

