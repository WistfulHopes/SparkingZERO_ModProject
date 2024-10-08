#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "AdditionalTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FAdditionalTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SS_API FAdditionalTickFunction();
};

template<>
struct TStructOpsTypeTraits<FAdditionalTickFunction> : public TStructOpsTypeTraitsBase2<FAdditionalTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

