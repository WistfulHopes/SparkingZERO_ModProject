#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ToonLightControlSettingAtCameraSequenceData.h"
#include "ToonLightControlSettingAtCameraSequence.generated.h"

USTRUCT(BlueprintType)
struct FToonLightControlSettingAtCameraSequence : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToonLightControlSettingAtCameraSequenceData ToonLightSetting;
    
    SS_API FToonLightControlSettingAtCameraSequence();
};

