#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SSCharacterActionTargetComponentPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterActionTargetComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SS_API FSSCharacterActionTargetComponentPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSSCharacterActionTargetComponentPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FSSCharacterActionTargetComponentPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

