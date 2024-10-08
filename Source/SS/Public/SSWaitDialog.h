#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSWaitDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSWaitDialog : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContextTextBlockName0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContextTextBlockName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitingIconEnable;
    
public:
    USSWaitDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitingIconEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitingIconDisable();
    
};

