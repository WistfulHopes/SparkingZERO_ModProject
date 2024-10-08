#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratReplaceAnimationDataList.h"
#include "KoratAsyncTransitionRollingHammer.generated.h"

class UKoratAsyncTransitionRollingHammer;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionRollingHammer : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionNone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionRush;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionRollingHurricane;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionRollingPress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionReaction;
    
    UKoratAsyncTransitionRollingHammer();

    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionRush();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionRollingPress();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionRollingHurricane();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionReaction();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionNone();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionRollingHammer* AsyncTransitionRollingHammer(UObject* WorldContextObject, const FKoratReplaceAnimationDataList InAnimDataList);
    
};

