#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratAsyncTransitionWaitMontageEnd.generated.h"

class UKoratAsyncTransitionWaitMontageEnd;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionWaitMontageEnd : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionEnd;
    
    UKoratAsyncTransitionWaitMontageEnd();

    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionEnd();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionWaitMontageEnd* AsyncTransitionWaitMontageEnd(UObject* WorldContextObject);
    
};

