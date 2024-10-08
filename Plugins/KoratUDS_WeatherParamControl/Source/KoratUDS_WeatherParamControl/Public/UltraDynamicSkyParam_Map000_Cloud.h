#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_Map000_Cloud.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_Map000_Cloud {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Map000_Cloud_Ratio;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudFarRotationSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudFarIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudFarMaskIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudFarTransparency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudNearRotationSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudNearIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudNearMaskIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudNearTransparency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudThinRotationSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudThinIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudThinMaskIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudThinTransparency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudTopRotationSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudTopIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudTopMaskIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudTopTransparency;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_Map000_Cloud();
};

