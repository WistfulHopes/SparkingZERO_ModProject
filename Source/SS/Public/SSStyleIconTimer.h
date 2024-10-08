#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSStyleIconTimer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSStyleIconTimer : public USSHUDWidget {
    GENERATED_BODY()
public:
    USSStyleIconTimer();

    UFUNCTION(BlueprintCallable)
    void SetChangeCount(int32 InCount, bool InOperationFlg);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeActive();
    
};

