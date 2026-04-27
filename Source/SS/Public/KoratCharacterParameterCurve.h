#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterParameterCurve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FKoratCharacterParameterCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    SS_API FKoratCharacterParameterCurve();
};

