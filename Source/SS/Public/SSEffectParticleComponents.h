#pragma once
#include "CoreMinimal.h"
#include "SSEffectParticleComponents.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FSSEffectParticleComponents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> EffComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SplineDists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SplineSpawnDists;
    
    SS_API FSSEffectParticleComponents();
};

