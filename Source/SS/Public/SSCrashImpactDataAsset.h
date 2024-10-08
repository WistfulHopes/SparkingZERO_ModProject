#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSCrashImpactCameraRecord.h"
#include "SSCrashImpactDataAsset.generated.h"

UCLASS(Blueprintable)
class USSCrashImpactDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashImpactPhaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashImpactInputWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashImpactInputWaitTimeRandomWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashImpactBoostTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCrashImpactCameraRecord Camera;
    
    USSCrashImpactDataAsset();

};

