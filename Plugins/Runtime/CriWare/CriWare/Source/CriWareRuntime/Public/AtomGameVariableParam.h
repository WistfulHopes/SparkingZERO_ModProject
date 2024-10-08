#pragma once
#include "CoreMinimal.h"
#include "AtomGameVariableParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomGameVariableParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    CRIWARERUNTIME_API FAtomGameVariableParam();
};

