#pragma once
#include "CoreMinimal.h"
#include "WindMotorOutputs.h"
#include "WindMotorOutputCharacteristics.generated.h"

USTRUCT(BlueprintType)
struct FWindMotorOutputCharacteristics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWindMotorOutputs> RadiusPower;
    
    SS_API FWindMotorOutputCharacteristics();
};

