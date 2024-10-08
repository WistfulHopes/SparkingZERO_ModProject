#pragma once
#include "CoreMinimal.h"
#include "SSPowerImpactCameraRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSPowerImpactCameraRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Prepare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Game;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> END;
    
    SS_API FSSPowerImpactCameraRecord();
};

