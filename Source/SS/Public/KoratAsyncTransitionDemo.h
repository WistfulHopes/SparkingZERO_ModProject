#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratActionDataList.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratAsyncTransitionDemo.generated.h"

class UKoratAsyncTransitionDemo;
class ULevelSequence;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionDemo : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionReturnToInGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionReaction;
    
    UKoratAsyncTransitionDemo();

    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionReturnToInGame();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionReaction();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionEnd();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionDemo* AsyncTransitionDemo(UObject* WorldContextObject, const FKoratActionDataList InActionDataList, const ULevelSequence* InLevelSequence, const bool bInIsSoonTurn, const bool bInPlayImmediately);
    
};

