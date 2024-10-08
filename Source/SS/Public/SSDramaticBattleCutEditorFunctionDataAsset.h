#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorFunctionDataAssetRecord.h"
#include "SSDramaticBattleCutEditorFunctionDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorFunctionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDramaticBattleCutEditorFunctionDataAssetRecord> Records;
    
public:
    USSDramaticBattleCutEditorFunctionDataAsset();

};

