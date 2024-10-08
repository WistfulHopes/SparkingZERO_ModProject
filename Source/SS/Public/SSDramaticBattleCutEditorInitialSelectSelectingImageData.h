#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorInitialSelectSelectingImageData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorInitialSelectSelectingImageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> NowSelectingImage;
    
    SS_API FSSDramaticBattleCutEditorInitialSelectSelectingImageData();
};

