#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMapAreaSizeType.h"
#include "SSWarpFixSizeCylinderRegion.generated.h"

USTRUCT(BlueprintType)
struct FSSWarpFixSizeCylinderRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapAreaSizeType AreaSize;
    
    SS_API FSSWarpFixSizeCylinderRegion();
};

