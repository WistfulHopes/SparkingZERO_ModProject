#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DirectionalLightControlSettingData.h"
#include "DirectionalLightSettingPerLevel.generated.h"

USTRUCT(BlueprintType)
struct FDirectionalLightSettingPerLevel : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectionalLightControlSettingData DirectionalLightSettingsData;
    
    SS_API FDirectionalLightSettingPerLevel();
};

