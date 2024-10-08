#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleCutEditorFunctionOperationDataList.h"
#include "KoratDramaticBattleCutEditorFunctionParameterDataList.h"
#include "SSDramaticBattleCutEditorFunctionDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorFunctionDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorFunctionOperationDataList FunctionOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCutEditorFunctionParameterDataList FunctionParameter;
    
    SS_API FSSDramaticBattleCutEditorFunctionDataAssetRecord();
};

