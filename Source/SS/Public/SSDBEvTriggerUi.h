#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSDBEvTriggerUi.generated.h"

class USpUICircleGauge;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSDBEvTriggerUi : public USSUiWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* PressButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpUICircleGauge* CircleGauge;
    
public:
    USSDBEvTriggerUi();

    UFUNCTION(BlueprintCallable)
    void TimeAlert();
    
    UFUNCTION(BlueprintCallable)
    void StartInPlayerIndex(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void StartHide();
    
    UFUNCTION(BlueprintCallable)
    void PressTriggerButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimeAlert();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissHide();
    
    UFUNCTION(BlueprintCallable)
    void MissHide();
    
    UFUNCTION(BlueprintCallable)
    void FinishShow();
    
    UFUNCTION(BlueprintCallable)
    void FinishHide();
    
};

