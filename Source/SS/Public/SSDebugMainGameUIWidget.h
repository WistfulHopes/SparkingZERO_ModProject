#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDebugMainGameUIWidget.generated.h"

class USSDebugMainGameUIExecute;

UCLASS(Blueprintable, EditInlineNew)
class USSDebugMainGameUIWidget : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSDebugMainGameUIExecute* ExecuteInstancePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchNewWBP;
    
public:
    USSDebugMainGameUIWidget();

    UFUNCTION(BlueprintCallable)
    void SetSwitchNewWBP(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwitchNewWBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<USSDebugMainGameUIExecute> GetExecuteInstancePtr() const;
    
};

