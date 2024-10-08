#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorUIWindowDisplayConditionDataAssetRecord.h"
#include "SSDramaticBattleCutEditorUIWindowDisplayConditionDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowDisplayConditionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDramaticBattleCutEditorUIWindowDisplayConditionDataAssetRecord> Records;
    
public:
    USSDramaticBattleCutEditorUIWindowDisplayConditionDataAsset();

};

