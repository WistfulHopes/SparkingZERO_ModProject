#pragma once
#include "CoreMinimal.h"
#include "KoratAttbuteParticleDataRecord.h"
#include "MutualDataAsset.h"
#include "KoratParticleBranchDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratParticleBranchDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratAttbuteParticleDataRecord> ParticleLists;
    
public:
    UKoratParticleBranchDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

