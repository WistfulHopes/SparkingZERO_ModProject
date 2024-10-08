#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UltraDynamicSkyParam_CloudVortex.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_CloudVortex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CloudWholeRotationCenter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudWholeRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CloudVortexCenter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudVortexRotationSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudVortexTimeBase;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudVortexTimePeriod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudVortexAttenuationLUTScale;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_CloudVortex();
};

