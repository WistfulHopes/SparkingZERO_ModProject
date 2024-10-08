#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SSMainMenuTransitionWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuTransitionWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USSMainMenuTransitionWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetAnimation* FindWidgetAnimation(FName InAnimName);
    
};

