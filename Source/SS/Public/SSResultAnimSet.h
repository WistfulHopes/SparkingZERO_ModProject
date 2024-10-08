#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSResultAnimSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSResultAnimSet : public USSUiWidget {
    GENERATED_BODY()
public:
    USSResultAnimSet();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeAnim_Effect4();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeAnim_Effect3();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeAnim_Effect2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeAnim_Effect1();
    
};

