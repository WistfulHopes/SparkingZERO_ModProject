#pragma once
#include "CoreMinimal.h"
#include "KoratTransitionData.generated.h"

class UKoratAsyncTransitionJudgment;

USTRUCT(BlueprintType)
struct FKoratTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionJudgment* AsyncTransition;
    
    SS_API FKoratTransitionData();
};

