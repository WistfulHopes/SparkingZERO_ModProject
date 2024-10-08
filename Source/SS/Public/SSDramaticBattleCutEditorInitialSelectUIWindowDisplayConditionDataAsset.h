#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionDataAssetRecord.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionDataAssetRecord> Records;
    
public:
    USSDramaticBattleCutEditorInitialSelectUIWindowDisplayConditionDataAsset();

};

