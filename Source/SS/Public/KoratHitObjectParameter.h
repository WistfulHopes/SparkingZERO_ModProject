#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterEffectColorSetData.h"
#include "SSCharacterEnergyBulletExplosionEffect.h"
#include "KoratHitObjectParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratHitObjectParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bColorSetIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetData ColorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterEnergyBulletExplosionEffect Explosion;
    
    SS_API FKoratHitObjectParameter();
};

