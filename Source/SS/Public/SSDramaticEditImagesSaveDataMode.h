#pragma once
#include "CoreMinimal.h"
#include "EKoratImageDataResizeMode.h"
#include "EKoratImageDataShardingMode.h"
#include "SSDramaticEditImagesSaveDataMode.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSDramaticEditImagesSaveDataMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratImageDataResizeMode ImagesSaveDataResize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratImageDataShardingMode ImagesSaveDataSharding;
    
    FSSDramaticEditImagesSaveDataMode();
};

