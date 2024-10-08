#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSWmStampManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSWmStampManager : public USSMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StampTime;
    
    USSWmStampManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeActive();
    
    UFUNCTION(BlueprintCallable)
    void ChangeHide();
    
    UFUNCTION(BlueprintCallable)
    void ChangeActive();
    
};

