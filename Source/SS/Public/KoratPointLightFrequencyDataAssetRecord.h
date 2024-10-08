#pragma once
#include "CoreMinimal.h"
#include "KoratPointLightFrequencyDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratPointLightFrequencyDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WiggleStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseStrength;
    
    SS_API FKoratPointLightFrequencyDataAssetRecord();
};

