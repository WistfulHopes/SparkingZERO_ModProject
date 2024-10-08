#pragma once
#include "CoreMinimal.h"
#include "EAtomFormat.h"
#include "AtomWaveInfo.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomWaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtomFormat Format;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SamplingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsStreamed: 1;
    
    FAtomWaveInfo();
};

