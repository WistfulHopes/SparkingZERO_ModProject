#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratActionDataList.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratAsyncTransitionJudgment.generated.h"

class UKoratAsyncTransitionJudgment;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionJudgment : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionJudgment;
    
    UKoratAsyncTransitionJudgment();

    UFUNCTION(BlueprintCallable)
    void CallSetReadyToDestroy();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionJudgment();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionJudgment* AsyncTransitionJudgment(UObject* WorldContextObject, const FKoratActionDataList InActionDataList);
    
};

