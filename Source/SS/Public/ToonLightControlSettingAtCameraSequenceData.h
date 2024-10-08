#pragma once
#include "CoreMinimal.h"
#include "ToonLightControlSettingAtCameraSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FToonLightControlSettingAtCameraSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableRecieveShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InTimeOfDisableRecieveShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutTimeOfDisableRecieveShadow;
    
    SS_API FToonLightControlSettingAtCameraSequenceData();
};

