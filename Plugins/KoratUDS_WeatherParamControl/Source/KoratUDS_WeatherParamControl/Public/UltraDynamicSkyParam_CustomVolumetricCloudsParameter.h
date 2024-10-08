#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UltraDynamicSkyParam_CustomVolumetricCloudsParameter.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_CustomVolumetricCloudsParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TopCloudColor_Near;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MiddleCloudColor_Near;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BottomCloud_Near;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TopCloudColor_Far;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MiddleCloudColor_Far;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BottomCloudColor_Far;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudHight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudContrast;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceCloudColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceCloudContrast;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_CustomVolumetricCloudsParameter();
};

