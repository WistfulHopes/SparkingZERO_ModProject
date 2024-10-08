#pragma once
#include "CoreMinimal.h"
#include "SSPowerImpactCameraRecord.h"
#include "SSPowerImpactCameraTypeRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSPowerImpactCameraTypeRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPowerImpactCameraRecord GvsN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPowerImpactCameraRecord NvsG;
    
    SS_API FSSPowerImpactCameraTypeRecord();
};

