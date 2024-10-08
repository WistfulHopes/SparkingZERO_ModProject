#pragma once
#include "CoreMinimal.h"
#include "AtomSelectorParam.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomSelectorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    FAtomSelectorParam();
};

