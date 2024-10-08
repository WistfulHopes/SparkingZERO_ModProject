#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSSPGaugeMinusEf.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSSPGaugeMinusEf : public USSHUDWidget {
    GENERATED_BODY()
public:
    USSSPGaugeMinusEf();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMinusStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMinusShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMinusHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMinusEnd();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMinusStarted();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMinusShow();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMinusHide();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMinusEnd();
    
};

