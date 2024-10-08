#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESSImageGenerationImageLabel.h"
#include "SSDramaticImageGenerationCaptureData.h"
#include "SSDramaticImageGenerationManager.generated.h"

class USSDramaticServerCutData;

UCLASS(Blueprintable)
class USSDramaticImageGenerationManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESSImageGenerationImageLabel, FSSDramaticImageGenerationCaptureData> CaptureDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESSImageGenerationImageLabel, USSDramaticServerCutData*> CaptureServerCutDatas;
    
public:
    USSDramaticImageGenerationManager();

};

