#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorUIWindowSelectParameterBoolText.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorUIWindowSelectParameterBoolText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    SS_API FSSDramaticBattleCutEditorUIWindowSelectParameterBoolText();
};

