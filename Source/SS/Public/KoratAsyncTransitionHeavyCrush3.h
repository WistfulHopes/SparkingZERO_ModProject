#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "KoratCharacterAsyncActionCompletedDelegate.h"
#include "KoratReplaceAnimationDataList.h"
#include "KoratAsyncTransitionHeavyCrush3.generated.h"

class UKoratAsyncTransitionHeavyCrush3;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UKoratAsyncTransitionHeavyCrush3 : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionNone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterAsyncActionCompleted TransitionReaction;
    
    UKoratAsyncTransitionHeavyCrush3();

    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionReaction();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastTransitionNone();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKoratAsyncTransitionHeavyCrush3* AsyncTransitionHeavyCrush3(UObject* WorldContextObject, const FKoratReplaceAnimationDataList InAnimDataList);
    
};

