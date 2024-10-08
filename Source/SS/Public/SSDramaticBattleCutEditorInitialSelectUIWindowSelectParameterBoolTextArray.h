#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowSelectParameterBoolText.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowSelectParameterBoolTextArray.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorInitialSelectUIWindowSelectParameterBoolTextArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleCutEditorInitialSelectUIWindowSelectParameterBoolText> SelectParameterBoolTexts;
    
    SS_API FSSDramaticBattleCutEditorInitialSelectUIWindowSelectParameterBoolTextArray();
};

