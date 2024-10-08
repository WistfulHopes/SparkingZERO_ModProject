#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSOptionOperationControlManager.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSOptionOperationControlManager : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedNo;
    
    USSOptionOperationControlManager();

    UFUNCTION(BlueprintCallable)
    void OnPadRButton();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPadLButton();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSwitch1to0();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSwitch1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSwitch0to1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeOut1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeOut0();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonHoldProgressDisp(USSMenuButton* InButton, float InProgress);
    
};

