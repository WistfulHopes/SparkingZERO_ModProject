#pragma once
#include "CoreMinimal.h"
#include "ESSKeyInputType.h"
#include "SSHUDWidget.h"
#include "SSBBoost.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSBBoost : public USSHUDWidget {
    GENERATED_BODY()
public:
    USSBBoost();

    UFUNCTION(BlueprintCallable)
    void SetGuideKey(ESSKeyInputType InKeyInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWait();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNomalOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGenkaiOn();
    
    UFUNCTION(BlueprintCallable)
    void ChangeWait();
    
    UFUNCTION(BlueprintCallable)
    void ChangeShowIn();
    
    UFUNCTION(BlueprintCallable)
    void ChangeOut();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNormalOn();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMissOut();
    
    UFUNCTION(BlueprintCallable)
    void ChangeHide();
    
    UFUNCTION(BlueprintCallable)
    void ChangeGankaiOn();
    
};

