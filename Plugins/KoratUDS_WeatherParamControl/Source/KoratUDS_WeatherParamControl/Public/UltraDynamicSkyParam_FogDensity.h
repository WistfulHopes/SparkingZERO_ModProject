#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_FogDensity.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_FogDensity {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BaseFogDensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FoggyDensityContribution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudyDensityContribution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DustDensityContribution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ScaleTotalFogDensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FogStartDistanceWhenClear;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FogDensityWhereStartDistanceReachesZero;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BaseHeightFogFalloff;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudyHeightFogFalloff;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FoggyHeightFogFalloff;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DustyHeightFogFalloff;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_FogDensity();
};

