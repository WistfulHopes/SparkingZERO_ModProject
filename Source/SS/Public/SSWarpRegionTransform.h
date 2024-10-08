#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSWarpRegionTransform.generated.h"

USTRUCT(BlueprintType)
struct FSSWarpRegionTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    SS_API FSSWarpRegionTransform();
};

