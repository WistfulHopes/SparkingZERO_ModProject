#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSEmotePanel.generated.h"

class USSEmoteIcon;
class USSStyleGuideButton;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class USSEmotePanel : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSEmoteIcon*> EmoteIconWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSStyleGuideButton*> StyleGuideButtonWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSEmoteIcon* EmoteIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSStyleGuideButton* GuideButtonWidgets;
    
public:
    USSEmotePanel();

    UFUNCTION(BlueprintCallable)
    void WaitDisabled();
    
    UFUNCTION(BlueprintCallable)
    void WaitActive();
    
    UFUNCTION(BlueprintCallable)
    void SetEmoteIconImage(int32 InStyleIndex, UTexture* InIconImage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmoteDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmoteActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEmoteIconCount() const;
    
    UFUNCTION(BlueprintCallable)
    void EmoteHide();
    
    UFUNCTION(BlueprintCallable)
    void EmoteDisabled();
    
    UFUNCTION(BlueprintCallable)
    void EmoteActive();
    
    UFUNCTION(BlueprintCallable)
    void DisableIcon(int32 InStyleIndex);
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
    UFUNCTION(BlueprintCallable)
    void DecideIcon(int32 InStyleIndex);
    
    UFUNCTION(BlueprintCallable)
    void ActivateIcon(int32 InStyleIndex);
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

