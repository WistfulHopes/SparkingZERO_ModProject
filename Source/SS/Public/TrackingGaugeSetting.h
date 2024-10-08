#pragma once
#include "CoreMinimal.h"
#include "TrackingGaugeSetting.generated.h"

USTRUCT(BlueprintType)
struct FTrackingGaugeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeAngleDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GaugeTrackingPointNameStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GaugeTrackingPointNameRoute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GaugeTrackingPointNameEnd;
    
    SS_API FTrackingGaugeSetting();
};

