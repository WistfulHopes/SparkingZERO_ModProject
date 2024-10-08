#pragma once
#include "CoreMinimal.h"
#include "ESSBlackoutExecType.h"
#include "OnFloatBlackOutDelegate.h"
#include "SSMpcPriorityActorBase.h"
#include "SSBlackoutTheBackground.generated.h"

UCLASS(Blueprintable)
class ASSBlackoutTheBackground : public ASSMpcPriorityActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESSBlackoutExecType ExecType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float StartSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float EndSeconds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatBlackOut OnEventStartBlackOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatBlackOut OnEventEndBlackOut;
    
    ASSBlackoutTheBackground(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetExecType(const ESSBlackoutExecType Type);
    
    UFUNCTION(BlueprintCallable)
    float GetBlackOutMinRate();
    
};

