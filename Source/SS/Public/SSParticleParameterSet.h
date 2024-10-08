#pragma once
#include "CoreMinimal.h"
#include "SSParticleParameter.h"
#include "SSParticleParameterSet.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSParticleParameterSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSParticleParameter> Parameters;
    
    FSSParticleParameterSet();
};

