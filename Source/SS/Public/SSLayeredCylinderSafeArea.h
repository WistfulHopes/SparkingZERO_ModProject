#pragma once
#include "CoreMinimal.h"
#include "SSWarpCylinderRegion.h"
#include "SSLayeredCylinderSafeArea.generated.h"

USTRUCT(BlueprintType)
struct FSSLayeredCylinderSafeArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWarpCylinderRegion Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEffective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNeedRecoveryWarp;
    
    SS_API FSSLayeredCylinderSafeArea();
};

