#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_CustomCloudShadow_Curve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_CustomCloudShadow_Curve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCloudShadowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCloudShadowDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCloudShadowDetail1Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCloudShadowDetail2Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCloudShadowContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCloudShadowRangeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCloudShadowRangeDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCloudShadowHorizontalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCloudShadowOverallBrightness;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_CustomCloudShadow_Curve();
};

