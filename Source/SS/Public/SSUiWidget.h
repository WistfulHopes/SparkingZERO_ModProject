#pragma once
#include "CoreMinimal.h"
#include "SSUserWidget.h"
#include "SSUiWidget.generated.h"

class UUMGSequencePlayer;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class USSUiWidget : public USSUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> WidgetAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUMGSequencePlayer*> SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> IsWidgetAnimationLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> SoundWidgetAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUMGSequencePlayer*> SoundSequencePlayer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CultureDirectionSpAutoScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickEvenWhenPaused;
    
    USSUiWidget();

    UFUNCTION(BlueprintCallable)
    void StopWidgetAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SkipWidgetAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayWidgetAnimation(UWidgetAnimation* InOneShotAnimation, UWidgetAnimation* InLoopAnimation, const TArray<UWidgetAnimation*>& InOneShotAnimationArray, const TArray<UWidgetAnimation*>& InLoopAnimationArray);
    
    UFUNCTION(BlueprintCallable)
    void PlaySoundAnimation(UWidgetAnimation* InAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideFinished();
    
    UFUNCTION(BlueprintCallable)
    void CloseFromBlueprint();
    
};

