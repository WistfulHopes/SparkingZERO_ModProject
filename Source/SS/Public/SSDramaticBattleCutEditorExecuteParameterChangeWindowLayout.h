#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorExecuteParameterChangeWindowLayout.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorExecuteParameterChangeWindowLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateLayout;
    
    SS_API FSSDramaticBattleCutEditorExecuteParameterChangeWindowLayout();
};

