#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratActionDataList.h"
#include "KoratEffectColorDataDetail.h"
#include "KoratReceivedDamageParameter.h"
#include "SSCharacterEnergyBulletExplosionEffect.h"
#include "SSCharacterEnergyBulletGroupExplosion.h"
#include "CharacterDamageEffectByEnergyBulletParamater.generated.h"

class ASSCharacter;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FCharacterDamageEffectByEnergyBulletParamater {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratReceivedDamageParameter ReceivedDamageParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectColorDataDetail EffectMutipleColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform EffectTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterEnergyBulletGroupExplosion GroupExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterEnergyBulletExplosionEffect Explosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGuardEffect;
    
    SS_API FCharacterDamageEffectByEnergyBulletParamater();
};

