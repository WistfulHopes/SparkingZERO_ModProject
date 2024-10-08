#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorUIWindowSelectItemDataAssetRecord.h"
#include "SSDramaticBattleCutEditorUIWindowSelectItemDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowSelectItemDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDramaticBattleCutEditorUIWindowSelectItemDataAssetRecord> Records;
    
public:
    USSDramaticBattleCutEditorUIWindowSelectItemDataAsset();

};

