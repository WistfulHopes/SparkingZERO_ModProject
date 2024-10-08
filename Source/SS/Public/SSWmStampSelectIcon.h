#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSWmStampSelectIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSWmStampSelectIcon : public USSHUDWidget {
    GENERATED_BODY()
public:
    USSWmStampSelectIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeToSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeToMNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
};

