#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSSpeedImpactDataAsset.generated.h"

UCLASS(Blueprintable)
class USSSpeedImpactDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactPhaseTime;
    
    USSSpeedImpactDataAsset();

};

