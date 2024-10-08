#pragma once
#include "CoreMinimal.h"
#include "SSDramaticEditSelectingImageData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSSDramaticEditSelectingImageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> NowSelectingImage;
    
    SS_API FSSDramaticEditSelectingImageData();
};

