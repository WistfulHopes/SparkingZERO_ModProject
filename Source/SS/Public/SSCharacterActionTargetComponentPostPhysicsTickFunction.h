#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SSCharacterActionTargetComponentPostPhysicsTickFunction.generated.h"

class USSCharacterActionTargetComponent;

USTRUCT(BlueprintType)
struct FSSCharacterActionTargetComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterActionTargetComponent* Target;
    
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

