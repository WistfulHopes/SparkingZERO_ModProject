#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleCutEditorFunctionParameterDataAssetRecord.h"
#include "SSDramaticBattleCutEditorFunctionParameterDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorFunctionParameterDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDramaticBattleCutEditorFunctionParameterDataAssetRecord> Records;
    
public:
    USSDramaticBattleCutEditorFunctionParameterDataAsset();

};

