#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSWarpRegionTransform.h"
#include "SSWarpBoxRegion.generated.h"

USTRUCT(BlueprintType)
struct FSSWarpBoxRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWarpRegionTransform Transform;
    
    SS_API FSSWarpBoxRegion();
};

