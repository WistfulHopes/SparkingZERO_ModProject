#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SSTimeLineViewPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSTimeLineViewPanel : public UUserWidget {
    GENERATED_BODY()
public:
    USSTimeLineViewPanel();

    UFUNCTION(BlueprintCallable)
    void PanelFocus();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSizeChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnKeyFocus(int32 InKeyId);
    
};

