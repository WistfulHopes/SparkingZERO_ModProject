#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorUIWindowDisplayConditionType.h"
#include "SSDramaticBattleCutEditorUIWindowDisplayConditionDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorUIWindowDisplayConditionDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorUIWindowDisplayConditionType DisplayCondition;
    
    SS_API FSSDramaticBattleCutEditorUIWindowDisplayConditionDataAssetRecord();
};

