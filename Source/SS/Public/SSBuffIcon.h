#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSBuffIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSBuffIcon : public USSHUDWidget {
    GENERATED_BODY()
public:
    USSBuffIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBlink();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBlack();
    
};

