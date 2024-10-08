#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonSelector.h"
#include "SSDramaticBattleCutEditorUIWindowButtonSelector.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleCutEditorUIWindowButtonSelector : public USSMenuButtonSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VerticalFluctuation;
    
    USSDramaticBattleCutEditorUIWindowButtonSelector();

};

