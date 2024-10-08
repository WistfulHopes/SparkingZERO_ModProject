#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWarpPointType.h"
#include "SSWarpPoint.generated.h"

USTRUCT(BlueprintType)
struct FSSWarpPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarpPointType pointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Pose;
    
    SS_API FSSWarpPoint();
};

