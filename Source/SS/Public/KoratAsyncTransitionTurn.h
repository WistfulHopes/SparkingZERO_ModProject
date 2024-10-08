#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratAsyncTransitionTurn.generated.h"

class UKoratAsyncTransitionTurn;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionTurn : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionEnd;
    
    UKoratAsyncTransitionTurn();

    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionEnd();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionTurn* AsyncTransitionTurn(UObject* WorldContextObject);
    
};

