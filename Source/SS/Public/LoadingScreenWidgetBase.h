#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoadingScreenWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SS_API ULoadingScreenWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    ULoadingScreenWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeyboardState(int32 VKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGamepadButtonState(int32 ControllerIndex, int32 ButtonIndex);
    
};

