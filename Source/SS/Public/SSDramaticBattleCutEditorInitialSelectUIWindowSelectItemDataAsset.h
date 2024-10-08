#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowSelectItemDataAssetRecord.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowSelectItemDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorInitialSelectUIWindowSelectItemDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDramaticBattleCutEditorInitialSelectUIWindowSelectItemDataAssetRecord> Records;
    
public:
    USSDramaticBattleCutEditorInitialSelectUIWindowSelectItemDataAsset();

};

