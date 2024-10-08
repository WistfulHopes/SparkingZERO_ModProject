#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_CustomCloudShadow.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_CustomCloudShadow {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowDirection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowDetail1Strength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowDetail2Strength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowContrast;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowRangeRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowRangeDensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowHorizontalSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowOverallBrightness;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_CustomCloudShadow();
};

