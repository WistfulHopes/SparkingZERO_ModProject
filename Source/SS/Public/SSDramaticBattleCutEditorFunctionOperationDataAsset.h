#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorFunctionOperationDataAssetRecord.h"
#include "SSDramaticBattleCutEditorFunctionOperationDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorFunctionOperationDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDramaticBattleCutEditorFunctionOperationDataAssetRecord> Records;
    
public:
    USSDramaticBattleCutEditorFunctionOperationDataAsset();

};

