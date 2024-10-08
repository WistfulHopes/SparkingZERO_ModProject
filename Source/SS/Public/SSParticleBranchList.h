#pragma once
#include "CoreMinimal.h"
#include "SSParticleBranchList.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct SS_API FSSParticleBranchList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Prefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UParticleSystem>> Particles;
    
    FSSParticleBranchList();
};

