#pragma once
#include "CoreMinimal.h"
#include "SSDramaticImageGenerationCaptureData.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticImageGenerationCaptureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> CaptureBinaryDatas;
    
    SS_API FSSDramaticImageGenerationCaptureData();
};

