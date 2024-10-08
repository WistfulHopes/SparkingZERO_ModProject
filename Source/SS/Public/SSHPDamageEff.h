#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSHPDamageEff.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSHPDamageEff : public USSHUDWidget {
    GENERATED_BODY()
public:
    USSHPDamageEff();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageShowStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageShowFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageHideStarted();
    
};

