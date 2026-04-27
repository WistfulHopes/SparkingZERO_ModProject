#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSModeHUNMissionDetailUi.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class SS_API USSModeHUNMissionDetailUi : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    USSModeHUNMissionDetailUi();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateFocusPanel(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnSetupPanelData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

