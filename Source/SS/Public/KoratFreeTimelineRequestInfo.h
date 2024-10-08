#pragma once
#include "CoreMinimal.h"
#include "EKoratFreeTimelineActorRequest.h"
#include "KoratFreeTimelineRequestInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratFreeTimelineRequestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelineActorRequest CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelineActorRequest RequestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RequestPlayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOneShotExecuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUpdateAfterChangeState;
    
    SS_API FKoratFreeTimelineRequestInfo();
};

