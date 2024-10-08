#pragma once
#include "CoreMinimal.h"
#include "AtomCueInfoAttachedAisacControlParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueInfoAttachedAisacControlParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    CRIWARERUNTIME_API FAtomCueInfoAttachedAisacControlParam();
};

