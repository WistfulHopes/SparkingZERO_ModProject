#pragma once
#include "CoreMinimal.h"
#include "SSGauge.h"
#include "TrackingGaugeSetting.h"
#include "SSTrackingGauge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSTrackingGauge : public USSGauge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTrackingGaugeSetting> TrackingGaugeSettings;
    
public:
    USSTrackingGauge();

};

