#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSWmMainManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSWmMainManager : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StampTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StampWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NiceWaitTime;
    
    USSWmMainManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnPadRButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPadLButton();
    
};

