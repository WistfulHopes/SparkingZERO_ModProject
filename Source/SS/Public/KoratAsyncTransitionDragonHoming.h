#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratAsyncTransitionDragonHoming.generated.h"

class UKoratAsyncTransitionDragonHoming;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionDragonHoming : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionNone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionDragonSmashUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionDragonSmashDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionDragonSmash;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionDragonSmashLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionDragonSmashRight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionBurstSmashUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionBurstSmashDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionBurstSmash;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionBurstSmashLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionBurstSmashRight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionReaction;
    
    UKoratAsyncTransitionDragonHoming();

    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionReaction();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionNone();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionDragonSmashUp();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionDragonSmashRight();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionDragonSmashLeft();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionDragonSmashDown();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionDragonSmash();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionBurstSmashUp();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionBurstSmashRight();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionBurstSmashLeft();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionBurstSmashDown();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionBurstSmash();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionDragonHoming* AsyncTransitionDragonHoming(UObject* WorldContextObject);
    
};

