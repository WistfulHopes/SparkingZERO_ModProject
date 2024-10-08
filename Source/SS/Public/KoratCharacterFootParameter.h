#pragma once
#include "CoreMinimal.h"
#include "KoratInverseKinematicsFootTraceLine.h"
#include "KoratCharacterFootParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterFootParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInverseKinematicsFootTraceLine WalkTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInverseKinematicsFootTraceLine FlyTrace;
    
    SS_API FKoratCharacterFootParameter();
};

