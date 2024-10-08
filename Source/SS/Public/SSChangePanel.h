#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSChangePanel.generated.h"

class USSChangeIcon;
class USSStyleGuideButton;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class USSChangePanel : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSChangeIcon*> ChangeIconWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> ChangeIconWidgetsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSStyleGuideButton*> StyleGuideButtonWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSChangeIcon* ChangeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSStyleGuideButton* GuideButtonWidgets;
    
public:
    USSChangePanel();

    UFUNCTION(BlueprintCallable)
    void WaitDisabled();
    
    UFUNCTION(BlueprintCallable)
    void WaitActive();
    
    UFUNCTION(BlueprintCallable)
    void SetChangeIconImage(int32 InStyleIndex, UTexture* InIconImage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChangeIconCount() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableIcon(int32 InStyleIndex);
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
    UFUNCTION(BlueprintCallable)
    void DecideIcon(int32 InStyleIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeHide();
    
    UFUNCTION(BlueprintCallable)
    void ChangeDisabled();
    
    UFUNCTION(BlueprintCallable)
    void ChangeActive();
    
    UFUNCTION(BlueprintCallable)
    void ActivateIcon(int32 InStyleIndex);
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

