#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterPointLightData.h"
#include "KoratDestructionAttackParameter.h"
#include "SSCharacterEnergyBulletExplosionEffect.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSCharacterEnergyBulletExplosionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPointLightValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData PointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDestructionAttackParameter DestructionParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDrownOutable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> DrownOutLevelSequence;
    
    SS_API FSSCharacterEnergyBulletExplosionEffect();
};

