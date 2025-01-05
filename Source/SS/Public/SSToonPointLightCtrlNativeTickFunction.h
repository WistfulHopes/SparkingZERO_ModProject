#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SSToonPointLightCtrlNativeTickFunction.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSSToonPointLightCtrlNativeTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
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

