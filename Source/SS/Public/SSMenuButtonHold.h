#pragma once
#include "CoreMinimal.h"
#include "ESSMenuButtonHoldDecideType.h"
#include "OnSSMenuButtonDecidedNewEventDelegate.h"
#include "OnSSMenuButtonHoldProgressDispEventDelegate.h"
#include "SSMenuButton.h"
#include "SSMenuButtonHold.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButtonHold : public USSMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldInputStartSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldInputDecideSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldSubtractSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMenuButtonHoldDecideType HoldDecideType;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonDecidedNewEvent OnHoldDecided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonHoldProgressDispEvent OnHoldProgress;
    
    USSMenuButtonHold();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldOnStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldOnFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldOffStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldOffFinished();
    
};

