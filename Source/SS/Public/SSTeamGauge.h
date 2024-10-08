#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSTeamGauge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSTeamGauge : public USSHUDWidget {
    GENERATED_BODY()
public:
    USSTeamGauge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeActive();
    
    UFUNCTION(BlueprintCallable)
    void ChangeOk();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNormal();
    
    UFUNCTION(BlueprintCallable)
    void ChangeActive();
    
};

