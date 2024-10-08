#pragma once
#include "CoreMinimal.h"
#include "SSSurfaceTypeSettingDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSSurfaceTypeSettingDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LabelName;
    
    SS_API FSSSurfaceTypeSettingDataAssetRecord();
};

