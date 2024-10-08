#pragma once
#include "CoreMinimal.h"
#include "AtomCueInfoAttachedSelectorParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueInfoAttachedSelectorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    CRIWARERUNTIME_API FAtomCueInfoAttachedSelectorParam();
};

