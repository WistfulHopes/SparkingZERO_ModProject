#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonSelector.h"
#include "SSDramaticBattleCutEditorInitialSelectUIWindowButtonSelector.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleCutEditorInitialSelectUIWindowButtonSelector : public USSMenuButtonSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VerticalFluctuation;
    
    USSDramaticBattleCutEditorInitialSelectUIWindowButtonSelector();

};

