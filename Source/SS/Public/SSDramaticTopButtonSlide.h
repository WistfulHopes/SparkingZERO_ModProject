#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticTopButtonSlide.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticTopButtonSlide : public USSMenuManager {
    GENERATED_BODY()
public:
    USSDramaticTopButtonSlide();

    UFUNCTION(BlueprintCallable)
    void SetCanInput();
    
    UFUNCTION(BlueprintCallable)
    void PlaySlideAnimation(UWidgetAnimation* InOneShotAnimation, UWidgetAnimation* InLoopAnimation, const TArray<UWidgetAnimation*>& InOneShotAnimationArray, const TArray<UWidgetAnimation*>& InLoopAnimationArray);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRightShift();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeftShift();
    
    UFUNCTION(BlueprintCallable)
    void ModeSet();
    
};

