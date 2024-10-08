#pragma once
#include "CoreMinimal.h"
#include "EManaSoundType.h"
#include "ManaAudioTrackInfo.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FManaAudioTrackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SamplingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAmbisonics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaSoundType Type;
    
    FManaAudioTrackInfo();
};

