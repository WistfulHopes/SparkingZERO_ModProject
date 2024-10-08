#pragma once
#include "CoreMinimal.h"
#include "ESSMenuButtonHoldDecideType.h"
#include "OnSSMenuButtonDecidedNewEventDelegate.h"
#include "OnSSMenuButtonGuideHoldProgressDispEventDelegate.h"
#include "SSMenuButton.h"
#include "SSMenuButtonGuideHold.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButtonGuideHold : public USSMenuButton {
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
    FOnSSMenuButtonGuideHoldProgressDispEvent OnHoldProgress;
    
    USSMenuButtonGuideHold();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldOnStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldOnFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldOffStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldOffFinished();
    
};

