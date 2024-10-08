#pragma once
#include "CoreMinimal.h"
#include "KoratWaterEffectBulletDataRecord.h"
#include "KoratWaterEffectDataCharacterRecord.h"
#include "MutualDataAsset.h"
#include "KoratWaterEffectDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratWaterEffectDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratWaterEffectDataCharacterRecord> CharacterEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratWaterEffectDataCharacterRecord> CharacterMoveEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratWaterEffectBulletDataRecord> BulletEffects;
    
    UKoratWaterEffectDataAsset();

};

