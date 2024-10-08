#pragma once
#include "CoreMinimal.h"
#include "SSWarpBoxRegion.h"
#include "SSWarpNearByWallArea.generated.h"

USTRUCT(BlueprintType)
struct FSSWarpNearByWallArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWarpBoxRegion Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEffective;
    
    SS_API FSSWarpNearByWallArea();
};

