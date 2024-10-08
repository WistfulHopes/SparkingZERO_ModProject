#pragma once
#include "CoreMinimal.h"
#include "AtomCueInfoSelectorParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueInfoSelectorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    CRIWARERUNTIME_API FAtomCueInfoSelectorParam();
};

