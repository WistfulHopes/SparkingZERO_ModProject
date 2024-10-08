#pragma once
#include "CoreMinimal.h"
#include "KoratRimLightFrequencyData.generated.h"

USTRUCT(BlueprintType)
struct FKoratRimLightFrequencyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWiggleFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WiggleFrequency;
    
    SS_API FKoratRimLightFrequencyData();
};

