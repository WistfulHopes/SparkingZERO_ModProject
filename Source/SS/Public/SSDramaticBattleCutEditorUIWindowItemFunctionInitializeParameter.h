#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorFunctionOperationType.h"
#include "ESSDramaticBattleCutEditorFunctionParameterType.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.generated.h"

class ASSDramaticBattleCutEditorController;
class ASSDramaticBattleCutEditorUIWindowController;

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorFunctionOperationType FunctionOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorFunctionParameterType FunctionParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorUIWindowController* UIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorController* CutEditorController;
    
    SS_API FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter();
};

