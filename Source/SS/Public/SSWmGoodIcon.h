#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSWmGoodIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSWmGoodIcon : public USSHUDWidget {
    GENERATED_BODY()
public:
    USSWmGoodIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeAction();
    
};

