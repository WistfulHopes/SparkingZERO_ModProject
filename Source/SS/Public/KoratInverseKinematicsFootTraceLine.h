#pragma once
#include "CoreMinimal.h"
#include "KoratInverseKinematicsFootTraceLine.generated.h"

USTRUCT(BlueprintType)
struct FKoratInverseKinematicsFootTraceLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Upper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lower;
    
    SS_API FKoratInverseKinematicsFootTraceLine();
};

