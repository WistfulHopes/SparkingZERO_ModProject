#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratAsyncTransitionShortDash.generated.h"

class UKoratAsyncTransitionShortDash;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionShortDash : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionNone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionDashAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionReaction;
    
    UKoratAsyncTransitionShortDash();

    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionReaction();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionNone();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionDashAttack();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionShortDash* AsyncTransitionShortDash(UObject* WorldContextObject);
    
};

