#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratReplaceAnimationDataList.h"
#include "KoratAsyncTransitionGuard.generated.h"

class UKoratAsyncTransitionGuard;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionGuard : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionNone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionFastAvoidance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionStep;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionAscertain;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionSuperZCounter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionVanishingAssault;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionThrow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionEnergyBulletRepel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionReaction;
    
    UKoratAsyncTransitionGuard();

    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionVanishingAssault();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionThrow();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionSuperZCounter();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionStep();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionReaction();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionNone();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionFastAvoidance();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionEnergyBulletRepel();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionAscertain();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionGuard* AsyncTransitionGuard(UObject* WorldContextObject, const FKoratReplaceAnimationDataList InAnimDataList);
    
};

