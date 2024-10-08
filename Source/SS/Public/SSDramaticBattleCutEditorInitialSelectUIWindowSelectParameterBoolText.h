#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowSelectParameterBoolText.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorInitialSelectUIWindowSelectParameterBoolText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    SS_API FSSDramaticBattleCutEditorInitialSelectUIWindowSelectParameterBoolText();
};

