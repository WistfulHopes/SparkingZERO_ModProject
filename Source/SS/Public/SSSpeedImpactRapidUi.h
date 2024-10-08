#pragma once
#include "CoreMinimal.h"
#include "SSImpactBaseUi.h"
#include "SSSpeedImpactRapidUi.generated.h"

class USSSwitchUI;

UCLASS(Blueprintable, EditInlineNew)
class USSSpeedImpactRapidUi : public USSImpactBaseUi {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoInputAlertSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoInputButtonAnimSec;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSwitchUI* RapidButton;
    
public:
    USSSpeedImpactRapidUi();

    UFUNCTION(BlueprintCallable)
    void PressKey();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpeedImpactResult(int32 InJudgeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRapidInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoInputAlert();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJudgeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideStartSpeedImpact(int32 InJudgeIndex);
    
    UFUNCTION(BlueprintCallable)
    void JudgeStart();
    
    UFUNCTION(BlueprintCallable)
    void ChangeResultRequest();
    
};

