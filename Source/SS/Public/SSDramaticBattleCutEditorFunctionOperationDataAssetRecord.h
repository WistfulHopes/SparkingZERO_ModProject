#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorFunctionOperationType.h"
#include "SSDramaticBattleCutEditorFunctionOperationDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorFunctionOperationDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorFunctionOperationType FunctionOperation;
    
    SS_API FSSDramaticBattleCutEditorFunctionOperationDataAssetRecord();
};

