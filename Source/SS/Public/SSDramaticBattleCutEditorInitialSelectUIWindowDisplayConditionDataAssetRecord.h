#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionType.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionType DisplayCondition;
    
    SS_API FSSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionDataAssetRecord();
};

