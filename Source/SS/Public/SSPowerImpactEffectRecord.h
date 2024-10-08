#pragma once
#include "CoreMinimal.h"
#include "SSPowerImpactEffectSequenceRecord.h"
#include "SSPowerImpactEffectRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSPowerImpactEffectRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPowerImpactEffectSequenceRecord NvsN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPowerImpactEffectSequenceRecord GvsN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPowerImpactEffectSequenceRecord NvsG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPowerImpactEffectSequenceRecord GvsG;
    
    SS_API FSSPowerImpactEffectRecord();
};

