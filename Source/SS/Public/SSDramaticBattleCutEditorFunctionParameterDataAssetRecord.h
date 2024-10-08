#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorFunctionParameterType.h"
#include "SSDramaticBattleCutEditorFunctionParameterDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorFunctionParameterDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorFunctionParameterType FunctionParameter;
    
    SS_API FSSDramaticBattleCutEditorFunctionParameterDataAssetRecord();
};

