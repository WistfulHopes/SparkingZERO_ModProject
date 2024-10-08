#pragma once
#include "CoreMinimal.h"
#include "KoratAttbuteParticleDataRecord.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FKoratAttbuteParticleDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrefixName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UParticleSystem>> ParticleList;
    
    SS_API FKoratAttbuteParticleDataRecord();
};

