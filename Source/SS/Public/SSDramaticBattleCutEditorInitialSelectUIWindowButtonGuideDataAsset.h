#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowButtonGuideDataAssetRecord.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowButtonGuideDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorInitialSelectUIWindowButtonGuideDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDramaticBattleCutEditorInitialSelectUIWindowButtonGuideDataAssetRecord> Records;
    
public:
    USSDramaticBattleCutEditorInitialSelectUIWindowButtonGuideDataAsset();

};

