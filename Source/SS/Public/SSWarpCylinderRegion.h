#pragma once
#include "CoreMinimal.h"
#include "SSWarpRegionTransform.h"
#include "SSWarpCylinderRegion.generated.h"

USTRUCT(BlueprintType)
struct FSSWarpCylinderRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWarpRegionTransform Transform;
    
    SS_API FSSWarpCylinderRegion();
};

