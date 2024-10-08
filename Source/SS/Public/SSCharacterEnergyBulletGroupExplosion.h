#pragma once
#include "CoreMinimal.h"
#include "SSCharacterEnergyBulletExplosionEffect.h"
#include "SSCharacterEnergyBulletGroupExplosion.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSCharacterEnergyBulletGroupExplosion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterEnergyBulletExplosionEffect GroupExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceGroupExplosionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupExplosionConditionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupExplosionGroup;
    
    SS_API FSSCharacterEnergyBulletGroupExplosion();
};

