#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletRatDecalSpawnNumFactor.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectBulletRatDecalSpawnNumFactor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    SS_API FKoratEffectBulletRatDecalSpawnNumFactor();
};

