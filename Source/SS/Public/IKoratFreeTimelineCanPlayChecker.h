#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IKoratFreeTimelineCanPlayChecker.generated.h"

class UKoratInteractHitInformationBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UIKoratFreeTimelineCanPlayChecker : public UInterface {
    GENERATED_BODY()
};

class IIKoratFreeTimelineCanPlayChecker : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOneShot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckHitInformation(UKoratInteractHitInformationBase* InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPlay();
    
};

