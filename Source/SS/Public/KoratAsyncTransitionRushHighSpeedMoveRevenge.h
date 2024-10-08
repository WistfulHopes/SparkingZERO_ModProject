#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratReplaceAnimationDataList.h"
#include "KoratAsyncTransitionRushHighSpeedMoveRevenge.generated.h"

class UKoratAsyncTransitionRushHighSpeedMoveRevenge;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionRushHighSpeedMoveRevenge : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionNone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionRush;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionReaction;
    
    UKoratAsyncTransitionRushHighSpeedMoveRevenge();

    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionRush();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionReaction();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionNone();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionRushHighSpeedMoveRevenge* AsyncTransitionRushHighSpeedMoveRevenge(UObject* WorldContextObject, const FKoratReplaceAnimationDataList InAnimDataList);
    
};

