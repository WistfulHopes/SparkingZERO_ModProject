#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "SSParticleParameter.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSParticleParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleSysParam Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvScalabilityBigCharacter;
    
    FSSParticleParameter();
};

