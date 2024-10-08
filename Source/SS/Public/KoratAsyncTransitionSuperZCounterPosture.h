#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratCharacterAsyncActionCompletedOutAnimDataListDelegate.h"
#include "KoratReplaceAnimationDataList.h"
#include "KoratAsyncTransitionSuperZCounterPosture.generated.h"

class UKoratAsyncTransitionSuperZCounterPosture;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionSuperZCounterPosture : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompletedOutAnimDataList TransitionNone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompletedOutAnimDataList TransitionCatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionReaction;
    
    UKoratAsyncTransitionSuperZCounterPosture();

    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionReaction();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionNone(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionCatch(const FKoratReplaceAnimationDataList InAnimDataList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionSuperZCounterPosture* AsyncTransitionSuperZCounterPosture(UObject* WorldContextObject, const FKoratReplaceAnimationDataList InAnimDataList);
    
};

