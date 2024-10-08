#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSOptionManager.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class USSOptionManager : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ClassHudBPActor;
    
    USSOptionManager();

    UFUNCTION(BlueprintCallable)
    void SetTabControlLock(bool bInIsLock);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVideoButton();
    
    UFUNCTION(BlueprintCallable)
    void OnSoundButton();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPadRButton();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPadLButton();
    
    UFUNCTION(BlueprintCallable)
    void OnLanguageButton();
    
    UFUNCTION(BlueprintCallable)
    void OnKeyControlButton();
    
    UFUNCTION(BlueprintCallable)
    void OnEtcButton();
    
    UFUNCTION(BlueprintCallable)
    void OnCreditButton();
    
    UFUNCTION(BlueprintCallable)
    void OnControlButton();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangeKeyInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChange_Normal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChange_Brightness();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBrightnessButton();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBrightness_Wait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedTab();
    
};

