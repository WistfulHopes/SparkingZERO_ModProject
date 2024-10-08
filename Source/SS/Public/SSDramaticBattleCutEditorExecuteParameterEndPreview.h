#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorExecuteParameterEndPreview.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorExecuteParameterEndPreview {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSuspend;
    
    SS_API FSSDramaticBattleCutEditorExecuteParameterEndPreview();
};

