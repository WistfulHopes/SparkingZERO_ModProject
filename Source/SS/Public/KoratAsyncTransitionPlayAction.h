#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratReplaceAnimationDataList.h"
#include "KoratAsyncTransitionPlayAction.generated.h"

class UKoratAsyncTransitionPlayAction;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionPlayAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionEnd;
    
    UKoratAsyncTransitionPlayAction();

    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionEnd();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionPlayAction* AsyncTransitionPlayAction(UObject* WorldContextObject, const FKoratReplaceAnimationDataList InAnimDataList);
    
};

