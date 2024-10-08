#pragma once
#include "CoreMinimal.h"
#include "SSWarpFixSizeCylinderRegion.h"
#include "SSWarpDirectablePoint.generated.h"

USTRUCT(BlueprintType)
struct FSSWarpDirectablePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWarpFixSizeCylinderRegion Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnderWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEffective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MostGroundHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNeedRecoveryWarp;
    
    SS_API FSSWarpDirectablePoint();
};

