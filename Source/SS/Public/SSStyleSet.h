#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSStyleSet.generated.h"

class USSStyleGuideButton;
class USSStyleIcon;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class USSStyleSet : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSStyleIcon*> StyleIconWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSStyleGuideButton*> StyleGuideButtonWidgets;
    
public:
    USSStyleSet();

    UFUNCTION(BlueprintCallable)
    void SetStyleIconImage(int32 InStyleIndex, UTexture* InIconImage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStyleIconCount() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableStyle(int32 InStyleIndex, int32 InConsumeBlastStock);
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
    UFUNCTION(BlueprintCallable)
    void DecideStyle(int32 InStyleIndex);
    
    UFUNCTION(BlueprintCallable)
    void ActivateStyle(int32 InStyleIndex, int32 InConsumeBlastStock);
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

