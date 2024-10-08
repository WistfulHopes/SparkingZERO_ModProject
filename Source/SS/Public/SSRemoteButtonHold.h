#pragma once
#include "CoreMinimal.h"
#include "ESSMenuButtonHoldDecideType.h"
#include "SSRemoteButton.h"
#include "SSRemoteButtonHold.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSRemoteButtonHold : public USSRemoteButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMenuButtonHoldDecideType HoldDecideType;
    
public:
    USSRemoteButtonHold();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldOnStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldOnFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldOffStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldOffFinished();
    
};

