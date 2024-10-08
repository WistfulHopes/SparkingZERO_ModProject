#pragma once
#include "CoreMinimal.h"
#include "EKoratFreeTimelineHitInfoState.h"
#include "KoratInteractHitInfoState.generated.h"

USTRUCT(BlueprintType)
struct FKoratInteractHitInfoState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelineHitInfoState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ContinueUniqueId;
    
    SS_API FKoratInteractHitInfoState();
};

