#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratCharacterAsyncActionCompletedOutAnimDataListDelegate.h"
#include "KoratReplaceAnimationDataList.h"
#include "KoratAsyncTransitionRush.generated.h"

class UKoratAsyncTransitionRush;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionRush : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompletedOutAnimDataList TransitionNone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionRush;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompletedOutAnimDataList TransitionRushHighSpeedMove;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompletedOutAnimDataList TransitionRushStep;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionRushDerivative;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionLiftStrike;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionGrandSlash;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionAscertain;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionSuperZCounter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionVanishingAssault;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionReaction;
    
    UKoratAsyncTransitionRush();

    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionVanishingAssault();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionSuperZCounter();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionRushStep(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionRushHighSpeedMove(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionRushDerivative();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionRush();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionReaction();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionNone(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionLiftStrike();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionGrandSlash();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionAscertain();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionRush* AsyncTransitionRush(UObject* WorldContextObject, const FKoratReplaceAnimationDataList InAnimDataList);
    
};

