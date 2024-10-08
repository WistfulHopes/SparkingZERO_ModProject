#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSParticleParameterSet.h"
#include "SSParticleParameterDataAsset.generated.h"

class USSParticleCategoryPatternDataAsset;

UCLASS(Blueprintable)
class USSParticleParameterDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSParticleParameterSet TemplateParamterSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSParticleParameterSet CommonParameterSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSParticleCategoryPatternDataAsset* ParticleCategoryPatternDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSSParticleParameterSet> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GiantInvScaleBias;
    
public:
    USSParticleParameterDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

