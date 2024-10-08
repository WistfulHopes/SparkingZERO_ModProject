#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorUIWindowButtonGuideDataAssetRecord.h"
#include "SSDramaticBattleCutEditorUIWindowButtonGuideDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowButtonGuideDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDramaticBattleCutEditorUIWindowButtonGuideDataAssetRecord> Records;
    
public:
    USSDramaticBattleCutEditorUIWindowButtonGuideDataAsset();

};

