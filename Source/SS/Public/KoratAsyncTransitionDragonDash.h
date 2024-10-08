#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratAsyncTransitionDragonDash.generated.h"

class UKoratAsyncTransitionDragonDash;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionDragonDash : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionNone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionDragonDashAttackUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionDragonDashAttackDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionDragonDashAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionDragonDashAttackLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionDragonDashAttackRight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionReaction;
    
    UKoratAsyncTransitionDragonDash();

    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionReaction();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionNone();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionDragonDashAttackUp();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionDragonDashAttackRight();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionDragonDashAttackLeft();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionDragonDashAttackDown();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionDragonDashAttack();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionDragonDash* AsyncTransitionDragonDash(UObject* WorldContextObject);
    
};

