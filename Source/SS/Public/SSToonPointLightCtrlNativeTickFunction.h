#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SSToonPointLightCtrlNativeTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSSToonPointLightCtrlNativeTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SS_API FSSToonPointLightCtrlNativeTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSSToonPointLightCtrlNativeTickFunction> : public TStructOpsTypeTraitsBase2<FSSToonPointLightCtrlNativeTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

