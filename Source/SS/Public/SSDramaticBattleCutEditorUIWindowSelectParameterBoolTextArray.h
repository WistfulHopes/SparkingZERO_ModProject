#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorUIWindowSelectParameterBoolText.h"
#include "SSDramaticBattleCutEditorUIWindowSelectParameterBoolTextArray.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorUIWindowSelectParameterBoolTextArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleCutEditorUIWindowSelectParameterBoolText> SelectParameterBoolTexts;
    
    SS_API FSSDramaticBattleCutEditorUIWindowSelectParameterBoolTextArray();
};

